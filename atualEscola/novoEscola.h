#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 5

struct Data{
    int dia;
    int mes;
    int ano;
}dataNascimento;

struct registro{
  char nome[50];
  char sexo;
  char dataNascimento;
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

void menu(void);
void menuProfessor(void);
void menuAluno(void);
void menuDisciplina(void);

void insereProfessor(struct registro *cadProfessor);
void listaProfessor(struct registro *cadProfessor);
int validaSexoProfessor(struct registro *cadProfessor);
int validaCpfProfessor(struct registro *cadProfessor);
int gerarMatriculaProfessor(struct registro *cadProfessor);
int validaDataNascimentoProfessor(struct registro *cadProfessor);
void matricularProfessor(struct matr *cadMatricula);

void insereAluno(struct registro *cadAluno);
void listaAluno(struct registro *cadAluno);
int validaSexoAluno(struct registro *cadAluno);
int validaCpfAluno(struct registro *cadAluno);
int gerarMatriculaAluno(struct registro *cadAluno);
int validaDataNascimentoAluno(struct registro *cadAluno);
void matricularAluno(struct matr *cadMatricula);

void insereDisciplina(struct cadastro *cadDisciplina);
void listaDisciplina(struct cadastro *cadDisciplina);
void listarDiscAlunos(struct matr *cadMatricula);
