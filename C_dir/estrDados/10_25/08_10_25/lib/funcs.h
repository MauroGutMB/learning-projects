typedef struct ponto Ponto;
Ponto* criarPonto(float x, float y);
void freePonto(Ponto *p);
float getX(Ponto *p);
float gety(Ponto *p);
void setPonto(Ponto *p, int x, int y);
float getDistancia(Ponto *p1, Ponto *p2);
