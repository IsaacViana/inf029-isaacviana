/* ARQUIVO PRINCIPAL */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include "menus.h"
#include "aluno.h"
#include "professor.h"
#include "disciplina.h"

#define TAM 5


struct Data{
    int dia;
    int mes;
    int ano;
}dataNascimento;

struct registro{
  char nome[50];
  char sexo;
  char dataNascimento[13];
  char cpf[12];
  int matricula;
}professor, aluno, cadProfessor[TAM], cadAluno[TAM];

struct cadastro{
  char nome[50];
  char codigo[11];
  int semestre;
  char professor[50];
}disciplina, cadDisciplina[TAM];

struct matr{
    struct registro aluno;
    struct registro cadAluno;
    struct cadastro disciplina;
    struct cadastro cadDisciplina;
}matricula, cadMatricula[TAM];

int main(){

    printf("----------PROJETO ESCOLA----------\n");

    menu();

    return 0;
}
