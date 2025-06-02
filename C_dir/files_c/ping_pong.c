#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <termios.h>
#include <sys/select.h>

#define WIDTH 40
#define HEIGHT 20
#define PADDLE_SIZE 4

void setBufferedInput(int enable) {
    static struct termios oldt, newt;
    if (!enable) {
        tcgetattr(STDIN_FILENO, &oldt);
        newt = oldt;
        newt.c_lflag &= ~(ICANON | ECHO);
        tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    } else {
        tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    }
}

int kbhit() {
    struct timeval tv = { 0L, 0L };
    fd_set fds;
    FD_ZERO(&fds);
    FD_SET(STDIN_FILENO, &fds);
    return select(STDIN_FILENO+1, &fds, NULL, NULL, &tv);
}

int main() {
    int ballX = WIDTH / 2, ballY = HEIGHT / 2;
    int ballDirX = -1, ballDirY = -1;
    int p1Y = HEIGHT / 2 - PADDLE_SIZE / 2;
    int p2Y = HEIGHT / 2 - PADDLE_SIZE / 2;
    int score1 = 0, score2 = 0;

    setBufferedInput(0);

    while (1) {
        // Desenha a tela
        system("clear"); 
        for (int y = 0; y < HEIGHT; y++) {
            for (int x = 0; x < WIDTH; x++) {
                if (x == 0 || x == WIDTH - 1)
                    printf("|");
                else if (y == 0 || y == HEIGHT - 1)
                    printf("-");
                else if (x == 2 && y >= p1Y && y < p1Y + PADDLE_SIZE)
                    printf("|");
                else if (x == WIDTH - 3 && y >= p2Y && y < p2Y + PADDLE_SIZE)
                    printf("|");
                else if (x == ballX && y == ballY)
                    printf("O");
                else
                    printf(" ");
            }
            printf("\n");
        }

        printf("P1 (W/S) | P2 (↑/↓) | Q para sair\n");
        printf("P1: %d    P2: %d\n", score1, score2);

        // Movimentos da bola
        ballX += ballDirX;
        ballY += ballDirY;

        if (ballY <= 1 || ballY >= HEIGHT - 2)
            ballDirY *= -1;

        if (ballX == 3 && ballY >= p1Y && ballY < p1Y + PADDLE_SIZE)
            ballDirX *= -1;
        else if (ballX == WIDTH - 4 && ballY >= p2Y && ballY < p2Y + PADDLE_SIZE)
            ballDirX *= -1;

        if (ballX <= 0) {
            score2++;
            ballX = WIDTH / 2;
            ballY = HEIGHT / 2;
            ballDirX = 1;
        }

        if (ballX >= WIDTH - 1) {
            score1++;
            ballX = WIDTH / 2;
            ballY = HEIGHT / 2;
            ballDirX = -1;
        }

        // Leitura de teclado
        if (kbhit()) {
            char ch = getchar();
            if (ch == 'q') break;
            else if (ch == 'w' && p1Y > 1) p1Y--;
            else if (ch == 's' && p1Y + PADDLE_SIZE < HEIGHT - 1) p1Y++;
            else if (ch == 27) { // ESC
                if (kbhit() && getchar() == '[') {
                    char arrow = getchar();
                    if (arrow == 'A' && p2Y > 1) p2Y--; // seta cima
                    else if (arrow == 'B' && p2Y + PADDLE_SIZE < HEIGHT - 1) p2Y++; // seta baixo
                }
            }
        }

        usleep(60000);
    }

    setBufferedInput(1);
    return 0;
}

