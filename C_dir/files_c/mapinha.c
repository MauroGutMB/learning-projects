#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>
#include <string.h>

#define HEIGHT 11
#define WIDTH 28

typedef struct {
    int y, x;
    char MAP[HEIGHT][WIDTH];
} mapa;

// Função para desativar o buffer do terminal temporariamente (captura de tecla sem ENTER)
char get_input() {
    struct termios oldt, newt;
    char ch;

    tcgetattr(STDIN_FILENO, &oldt);           // Salva config atual do terminal
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);         // Desativa modo canônico e o echo

    tcsetattr(STDIN_FILENO, TCSANOW, &newt);  // Aplica config
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);  // Restaura config

    return ch;
}

void desenhar_mapa(mapa *m, int player_y, int player_x) {
    system("clear"); // ou "cls" no Windows

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH - 1; j++) {
            if (i == player_y && j == player_x)
                putchar('@'); // jogador
            else
                putchar(m->MAP[i][j]);
        }
        putchar('\n');
    }
}

void iniciar_mapa(mapa *m) {
    strcpy(m->MAP[0],    "---------------------------");
    strcpy(m->MAP[1],    "|                         |");
    strcpy(m->MAP[2],    "|                         |");
    strcpy(m->MAP[3],    "|                         |");
    strcpy(m->MAP[4],    "|                         |");
    strcpy(m->MAP[5],    "|                         |");
    strcpy(m->MAP[6],    "|                         |");
    strcpy(m->MAP[7],    "|                         |");
    strcpy(m->MAP[8],    "|                         |");
    strcpy(m->MAP[9],    "|                         |");
    strcpy(m->MAP[10],   "---------------------------");
}

int main() {
    mapa m;
    iniciar_mapa(&m);

    int player_x = 2;
    int player_y = 2;

    while (1) {
        desenhar_mapa(&m, player_y, player_x);

        char input = get_input();
        if (input == 'q') break;

        switch (input) {
            case 'w': if (m.MAP[player_y - 1][player_x] != '-') player_y--; break;
            case 's': if (m.MAP[player_y + 1][player_x] != '-') player_y++; break;
            case 'a': if (m.MAP[player_y][player_x - 1] != '|') player_x--; break;
            case 'd': if (m.MAP[player_y][player_x + 1] != '|') player_x++; break;
        }
    }

    return 0;
}
