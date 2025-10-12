typedef struct atributo Atributo;
Atributo* gerarAtributoAnimal(Atributo *at, int idade, char sexo[10]);
void setAtributoIdade(Atributo *at, int idade);
int getAtributoIdade(Atributo *at);
void setAtributoSexo(Atributo *at, char sexo[10]);
char* getAtributoSexo(Atributo *at);
