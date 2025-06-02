/*
-----------------------------------------------------------------------------------
  Sistema de biblioteca universitária que gerencia empréstimos de livros e usuários.
-----------------------------------------------------------------------------------
  Cada livro contém:
  - Código ISBN (10 dígitos. EX: 123-4-56-7891)
  - Título
  - Ano
  - Autor

  Cada usuário contém:
  - Cargo (Aluno, Professor ou Funcionário)
  - ID
  - Nome
  - E-mail
  - Telefone
------------------------------------------------------------------------------------
  Regras:
  - Um usuário pode pegar emprestado 0 ou mais livros
  - Um livro pode estar emprestado a, no máximo, um usuário
  - Cada emprestimo registra a data, horário e a devolução prevista
------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



int main(){

  srand(time(NULL));

  struct Livro{
    int ISBN[4];
    char titulo[40];
    int ano;
    char autor[25];
  };

  struct Usuario{
    char cargo[20];
    int id[4];
    char nome[40];
    char email[20];
    int telefone[3];
  };

  struct Emprestimo{
    int data[3];
    int emprestimo;
    int hora[2];
    int devolucao[3+2];
  };

  struct Livro livro1, livro2, livro3, livro4, livro5, livro6, livro7, livro8, livro9, livro10;

  // ISBN individiaul
  livro1.ISBN[0] = (rand() % 900) + 100;
  livro1.ISBN[1] = (rand() % 10);
  livro1.ISBN[2] = (rand() % 90) + 10;
  livro1.ISBN[3] = (rand() % 9000) + 1000;

  livro2.ISBN[0] = (rand() % 900) + 100;
  livro2.ISBN[1] = (rand() % 9);
  livro2.ISBN[2] = (rand() % 90) + 10;
  livro2.ISBN[3] = (rand() % 9000) + 1000;

  livro3.ISBN[0] = (rand() % 900) + 100;
  livro3.ISBN[1] = (rand() % 10);
  livro3.ISBN[2] = (rand() % 90) + 10;
  livro3.ISBN[3] = (rand() % 9000) + 1000;

  livro4.ISBN[0] = (rand() % 900) + 100;
  livro4.ISBN[1] = (rand() % 10);
  livro4.ISBN[2] = (rand() % 90) + 10;
  livro4.ISBN[3] = (rand() % 9000) + 1000;

  livro5.ISBN[0] = (rand() % 900) + 100;
  livro5.ISBN[1] = (rand() % 10);
  livro5.ISBN[2] = (rand() % 90) + 10;
  livro5.ISBN[3] = (rand() % 9000) + 1000;

  livro6.ISBN[0] = (rand() % 900) + 100;
  livro6.ISBN[1] = (rand() % 10);
  livro6.ISBN[2] = (rand() % 90) + 10;
  livro6.ISBN[3] = (rand() % 9000) + 1000;

  livro7.ISBN[0] = (rand() % 900) + 100;
  livro7.ISBN[1] = (rand() % 10);
  livro7.ISBN[2] = (rand() % 90) + 10;
  livro7.ISBN[3] = (rand() % 9000) + 1000;
  
  livro8.ISBN[0] = (rand() % 900) + 100;
  livro8.ISBN[1] = (rand() % 10);
  livro8.ISBN[2] = (rand() % 90) + 10;
  livro8.ISBN[3] = (rand() % 9000) + 1000;
  
  livro9.ISBN[0] = (rand() % 900) + 100;
  livro9.ISBN[1] = (rand() % 10);
  livro9.ISBN[2] = (rand() % 90) + 10;
  livro9.ISBN[3] = (rand() % 9000) + 1000;

  livro10.ISBN[0] = (rand() % 900) + 100;
  livro10.ISBN[1] = (rand() % 10);
  livro10.ISBN[2] = (rand() % 90) + 10;
  livro10.ISBN[3] = (rand() % 9000) + 1000;

  // Informações individuais
  strcpy(livro1.titulo, "1984");
  livro1.ano = 1949;
  strcpy(livro1.autor, "George Orwell");

  strcpy(livro2.titulo, "Dom Quixote");
  livro2.ano = 1605;
  strcpy(livro2.autor, "Miguel de Cervantes");

  strcpy(livro3.titulo, "O Senhor dos Aneis");
  livro3.ano = 1954;
  strcpy(livro3.autor, "J.R.R. Tolkien");

  strcpy(livro4.titulo, "Harry Potter e a Pedra Filosofal");
  livro4.ano = 1997;
  strcpy(livro4.autor, "J.K. Rowling");

  strcpy(livro5.titulo, "Cem Anos de Solidao");
  livro5.ano = 1967;
  strcpy(livro5.autor, "Gabriel G. Marquez");

  strcpy(livro6.titulo, "O Pequeno Principe");
  livro6.ano = 1943;
  strcpy(livro6.autor, "Antoine de S. Exupery");

  strcpy(livro7.titulo, "Fundacao");
  livro7.ano = 1951;
  strcpy(livro7.autor, "Isaac Asimov");

  strcpy(livro8.titulo, "Saberes Pedagogicos e Atividades Docentes");
  livro8.ano = 2008;
  strcpy(livro8.autor, "Salma Garrido");

  strcpy(livro9.titulo, "A Pratica Educativa");
  livro9.ano = 2022;
  strcpy(livro9.autor, "Antonio Zabala");

  strcpy(livro10.titulo, "Musashi");
  livro10.ano = 1935;
  strcpy(livro10.autor, "Eiji Yoshikawa");


  struct Livro acervo[10] = {livro1, livro2, livro3, livro4, livro5, livro6, livro7, livro8, livro9, livro10};
  int disponibilidade[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};


  // printf("Livro: %s\n", acervo[9].titulo);
  // printf("ISBN: %i-%i-%i-%i\n", acervo[9].ISBN[0], acervo[9].ISBN[1], acervo[9].ISBN[2], acervo[9].ISBN[3]);
  // printf("Autor: %s\n", acervo[9].autor);
  // printf("Ano: %i\n", acervo[9].ano);

  int op;
  printf("Escolha um livro de 1 a 10 --> ");
  scanf("%i", &op);

  switch (op){
    case 1:
      printf("Livro: %s\n", livro1.titulo);
      printf("ISBN: %i-%i-%i-%i\n", livro1.ISBN[0], livro1.ISBN[1], livro1.ISBN[2], livro1.ISBN[3]);
      printf("Ano: %i\n", livro1.ano);
      printf("Autor: %s\n", livro1.autor);
      break;
    case 2:
      printf("Livro: %s\n", livro2.titulo);
      printf("ISBN: %i-%i-%i-%i\n", livro2.ISBN[0], livro2.ISBN[1], livro2.ISBN[2], livro2.ISBN[3]);
      printf("Ano: %i\n", livro2.ano);
      printf("Autor: %s\n", livro2.autor);
      break;
    case 3:
      printf("Livro: %s\n", livro3.titulo);
      printf("ISBN: %i-%i-%i-%i\n", livro3.ISBN[0], livro3.ISBN[1], livro3.ISBN[2], livro3.ISBN[3]);
      printf("Ano: %i\n", livro3.ano);
      printf("Autor: %s\n", livro3.autor);
      break;
    case 4:
      printf("Livro: %s\n", livro4.titulo);
      printf("ISBN: %i-%i-%i-%i\n", livro4.ISBN[0], livro4.ISBN[1], livro4.ISBN[2], livro4.ISBN[3]);
      printf("Ano: %i\n", livro4.ano);
      printf("Autor: %s\n", livro4.autor);
      break;
    case 5:
      printf("Livro: %s\n", livro5.titulo);
      printf("ISBN: %i-%i-%i-%i\n", livro5.ISBN[0], livro5.ISBN[1], livro5.ISBN[2], livro5.ISBN[3]);
      printf("Ano: %i\n", livro5.ano);
      printf("Autor: %s\n", livro5.autor);
      break;
    case 6:
      printf("Livro: %s\n", livro6.titulo);
      printf("ISBN: %i-%i-%i-%i\n", livro6.ISBN[0], livro6.ISBN[1], livro6.ISBN[2], livro6.ISBN[3]);
      printf("Ano: %i\n", livro6.ano);
      printf("Autor: %s\n", livro6.autor);
      break;
    case 7:
      printf("Livro: %s\n", livro7.titulo);
      printf("ISBN: %i-%i-%i-%i\n", livro7.ISBN[0], livro7.ISBN[1], livro7.ISBN[2], livro7.ISBN[3]);
      printf("Ano: %i\n", livro7.ano);
      printf("Autor: %s\n", livro7.autor);
      break;
    case 8:
      printf("Livro: %s\n", livro8.titulo);
      printf("ISBN: %i-%i-%i-%i\n", livro8.ISBN[0], livro8.ISBN[1], livro8.ISBN[2], livro8.ISBN[3]);
      printf("Ano: %i\n", livro8.ano);
      printf("Autor: %s\n", livro8.autor);
      break;
    case 9:
      printf("Livro: %s\n", livro9.titulo);
      printf("ISBN: %i-%i-%i-%i\n", livro9.ISBN[0], livro9.ISBN[1], livro9.ISBN[2], livro9.ISBN[3]);
      printf("Ano: %i\n", livro9.ano);
      printf("Autor: %s\n", livro9.autor);
      break;
    case 10:
      printf("Livro: %s\n", livro10.titulo);
      printf("ISBN: %i-%i-%i-%i\n", livro10.ISBN[0], livro10.ISBN[1], livro10.ISBN[2], livro10.ISBN[3]);
      printf("Ano: %i\n", livro10.ano);
      printf("Autor: %s\n", livro10.autor);
      break;
    default:
      printf("Livro não encontrado.");
  }




  

}
