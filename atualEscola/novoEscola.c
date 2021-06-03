#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "novoEscola.h"

void menu(){
    int a;  
        
    do{
        printf("1 - SESSAO PROFESSOR:\n");
        printf("2 - SESSAO ALUNO:\n");
        printf("3 - SESSAO DISCIPLINA:\n");
        printf("0 - ENCERRAR PROGRAMA\n");
        printf("Digite a opcao desejada:\n");
        scanf("%d", &a);
        setbuf(stdin, NULL);
        
        switch(a){
            case 0:
                break;
            case 1:
                menuProfessor();
                break;
            case 2: 
                menuAluno();
                break;
            case 3: 
                menuDisciplina();
                break;    
            default:
                printf("Valor invalido.\n");
                break;
            }
    }while(a != 0);
        if(a == 0){
        printf("Sair.");
        }
}

void menuProfessor(void){  
        int a;                

    do{

        printf("ESCOLHA OPCAO:\n\n");
        printf("1 - INSERE PROFESSORES\n");
        printf("2 - LISTA PROFESSORES\n");
        printf("0 - RETORNA AO MENU ANTERIOR\n");
        printf("3 - ENCERRA O PROGRAMA\n");
        scanf("%d", &a);
        setbuf(stdin, NULL);
        
        switch(a){
            case 0:
                break;
            case 1:
                printf("Inserir professor\n");
                insereProfessor(cadProfessor);
                break;
            case 2: 
                printf("Listar professores\n");
                listaProfessor(cadProfessor);
                break;
            case 3: 
                exit(1);
                break;
            default:
                printf("Valor invalido!\n");
                printf("Tente novamente\n");
                break;
        }
    }while(a != 0);
        if(a == 0){
            printf("Voce retornou ao menu anterior.\n");
        }
}

void menuAluno(void){  
        int a;

    do{

        printf("ESCOLHA OPCAO\n\n");
        printf("1 - INSERE ALUNOS\n");
        printf("2 - LISTA ALUNOS\n");        
        printf("3 - MATRICULAR ALUNO\n");
        printf("0 - RETORNA AO MENU ANTERIOR\n");
        printf("4 - ENCERRA O PROGRAMA\n");        
       
        scanf("%d", &a);
        setbuf(stdin, NULL);
               
        switch(a){
            case 0:
                break;
            case 1:
                printf("Inserir Aluno\n");
                insereAluno(cadAluno);
                break;
            case 2:
                printf("Listar alunos\n"); 
                listaAluno(cadAluno);
                break;
            case 3: 
                printf("Matricula alunos\n");
                matricularAluno(cadMatricula);
                break;
            case 4: 
                exit(1);
                break;           
            default:
                printf("Valor invalido!\n");
                printf("Tente novamente\n");
                break;
        }
    
    }while(a != 0);
        if(a == 0){
            printf("Voce retornou ao menu anterior.\n");
        }
}

void menuDisciplina(void){  
        int a;                

    do{
        printf("ESCOLHA OPCAO\n\n");
        printf("1 - INSERE DISCIPLINA\n");
        printf("2 - LISTA DISCIPLINA\n");
        printf("0 - RETORNA AO MENU ANTERIOR\n");
        printf("3 - ENCERRA O PROGRAMA\n");
        scanf("%d", &a);
        setbuf(stdin, NULL);
        
        switch(a){
            case 0:
                break;
            case 1:
                printf("Insere disciplinas\n");
                insereDisciplina(cadDisciplina);
                break;
            case 2: 
                printf("lista disciplinas\n");
                listaDisciplina(cadDisciplina);
                break;
            case 3: 
                exit(1);
                break;
            default:
                printf("Valor invalido!\n");
                printf("Tente novamente\n");
                break;
        }
    }while(a != 0);
        if(a == 0){
            printf("Voce retornou ao menu anterior.\n");
        }
}

int validaDataNascimentoProfessor(struct registro *cadProfessor){
    
    int Dia, Mes, Ano;
    int dat;
    int i;   
   
    printf("Dia:\n");
    scanf("%d", &Dia);
    printf("Mes:\n");
    scanf("%d", &Mes);
    printf("Ano:\n");
    scanf("%d", &Ano);
    
    for(i = 0; i < TAM; i++){ 
    
    if((Dia >= 1 && Dia <= 29)  && (Mes == 2) && (Ano % 4 == 0 && (Ano % 100 != 0 || Ano % 400 == 0)) && 
       (Ano >= 1956 && Ano <= 2003)){ 
            dat = 1;
    }else if((Ano % 4 != 0) && (Ano >= 1956 && Ano <= 2003) && (Mes == 2) && (Dia >= 1 && Dia <= 28)){
            dat = 1;
    }else if((Dia >= 1 && Dia <= 30) && (Mes == 4 || Mes == 6 || Mes == 9 || Mes == 11) && (Ano >= 1956 && Ano <= 2003)){
            dat = 1;
    }else if((Dia >= 1 && Dia <= 31) && (Mes == 1 || Mes == 3 || Mes == 5 || Mes == 7 || Mes == 8 || Mes == 10 || 
              Mes == 12) && (Ano >= 1956 && Ano <= 2003)){
            dat = 1;      
    }else {
        dat = 0;
    }
      cadProfessor[i].dataNascimento = Dia;
      cadProfessor[i].dataNascimento = Mes;
      cadProfessor[i].dataNascimento = Ano;
   }
    return dat;
}

int validaSexoProfessor(struct registro *cadProfessor){
    int i, num;
        
    for(i = 0; i < TAM; i++){
        scanf("%c", &cadProfessor[i].sexo);
        if(cadProfessor[i].sexo == 'M' || cadProfessor[i].sexo == 'm' || cadProfessor[i].sexo == 'F' || cadProfessor[i].sexo == 'f' || cadProfessor[i].sexo == 'O' || cadProfessor[i].sexo == 'o')
        {
    		return num = 1; 
        }else{
            return num = 0; 
        }
    }      
}

int validaCpfProfessor(struct registro *cadProfessor){
     int i, j, out;
    char vetorCpf[12];

    scanf("%s", vetorCpf);
    
    for(i = 0; i <  TAM; i++){

        for(j= 0; j <= 11; j++){
        if(vetorCpf[0] != '\0' && vetorCpf[1] != '\0' && vetorCpf[2] != '\0' && vetorCpf[3] != '\0' && vetorCpf[4] != '\0'
            && vetorCpf[5] != '\0' && vetorCpf[6] != '\0' && vetorCpf[7] != '\0' && vetorCpf[8] != '\0' && vetorCpf[9] != '\0'
            && vetorCpf[10] != '\0' && vetorCpf[11] == '\0'){
                out = 1;
            }else{
                out = 0;
            }            
        }  
        strcpy(cadProfessor[i].cpf, vetorCpf);
        return out;    
    }
}

int gerarMatriculaProfessor(struct registro *cadProfessor){
    int mat, i;
    for(i = 0, mat = 100; i < TAM; i++){
        mat = mat + 1;
        cadProfessor[i].matricula = mat;
    }
    return mat;
}

void insereProfessor(struct registro *cadProfessor){
    int i, num, out, mat, dat;

    for(i = 0; i < TAM; i++){
      printf("Nome do Professor:");
      fgets(cadProfessor[i].nome, 50, stdin);
      printf("Sexo:");
                num = validaSexoProfessor(cadProfessor);
                if(num == 0){
                    printf("Cadastro invalido. Dado de sexo invalido\n");
                    printf("Tente novamente.\n\n");
                    return;                }
      printf("Cpf:");
                out = validaCpfProfessor(cadProfessor);
                if(out == 0){
                    printf("Cadastro invalido. Dado de cpf invalido\n");
                    printf("Tente novamente.\n\n");
                    return;
                }
      printf("Data de nascimento:\n");
        dat = validaDataNascimentoProfessor(cadProfessor);
        if(dat == 0){
            printf("Cadastro invalido. Dado de data de nascimento invalido\n");
            printf("Tente novamente.\n\n");
            return;
        }    
      printf("Data de nascimento: %d/%d/%d\n", cadProfessor[i].dataNascimento, cadProfessor[i].dataNascimento, cadProfessor[i].dataNascimento);
      printf("Matricula:");
        mat = gerarMatriculaProfessor(cadProfessor);
      printf(" %d\n", cadProfessor[i].matricula);
      
    }
}

void listaProfessor(struct registro *cadProfessor){
    int i;
    
    for(i = 0; i < TAM; i++){
      printf("Nome do professor: %s\n", cadProfessor[i].nome);
      printf("Sexo: %c\n", cadProfessor[i].sexo);
      printf("Data de Nascimento: %d\n", cadProfessor[i].dataNascimento);
      printf("Cpf: %s\n", cadProfessor[i].cpf);
      printf("Matricula: %d\n", cadProfessor[i].matricula);
    }
}

void matricularProfessor(struct matr *cadMatricula){
    int i;

    for(i = 0; i < TAM; i++){
      printf("Nome do Professor:\n");
      scanf("%s", cadProfessor[i].nome);
      printf("Disciplina:\n");
      scanf("%s", cadDisciplina[i].nome);
    }
}

int validaSexoAluno(struct registro *cadAluno){
    int i, num;

    for(i = 0; i < TAM; i++){
        scanf("%c", &cadAluno[i].sexo);
        if(cadAluno[i].sexo == 'M' || cadAluno[i].sexo == 'm' || cadAluno[i].sexo == 'F' || cadAluno[i].sexo == 'f' || cadAluno[i].sexo == 'O' || cadAluno[i].sexo == 'o')
        {
        	return num = 1;
        }else{
            return num = 0;
        }
    }
}

int validaCpfAluno(struct registro *cadAluno){
     int i, j, out;
    char vetorCpf[12];

    scanf("%s", vetorCpf);
    
    for(i = 0; i <  TAM; i++){

        for(j= 0; j <= 11; j++){
        if(vetorCpf[0] != '\0' && vetorCpf[1] != '\0' && vetorCpf[2] != '\0' && vetorCpf[3] != '\0' && vetorCpf[4] != '\0'
            && vetorCpf[5] != '\0' && vetorCpf[6] != '\0' && vetorCpf[7] != '\0' && vetorCpf[8] != '\0' && vetorCpf[9] != '\0'
            && vetorCpf[10] != '\0' && vetorCpf[11] == '\0'){
                out = 1;
            }else{
                out = 0;
            }            
        }  
        strcpy(cadAluno[i].cpf, vetorCpf);
        return out;    
    }
}

int validaDataNascimentoAluno(struct registro *cadAluno){
    
    int Dia, Mes, Ano;
    int dat;
    int i;   
   
    printf("Dia:\n");
    scanf("%d", &Dia);
    printf("Mes:\n");
    scanf("%d", &Mes);
    printf("Ano:\n");
    scanf("%d", &Ano);
    
    for(i = 0; i < TAM; i++){ 
    
    if((Dia >= 1 && Dia <= 29)  && (Mes == 2) && (Ano % 4 == 0 && (Ano % 100 != 0 || Ano % 400 == 0)) && 
       (Ano >= 1956 && Ano <= 2003)){ 
            dat = 1;
    }else if((Ano % 4 != 0) && (Ano >= 1956 && Ano <= 2003) && (Mes == 2) && (Dia >= 1 && Dia <= 28)){
            dat = 1;
    }else if((Dia >= 1 && Dia <= 30) && (Mes == 4 || Mes == 6 || Mes == 9 || Mes == 11) && (Ano >= 1956 && Ano <= 2003)){
            dat = 1;
    }else if((Dia >= 1 && Dia <= 31) && (Mes == 1 || Mes == 3 || Mes == 5 || Mes == 7 || Mes == 8 || Mes == 10 || 
              Mes == 12) && (Ano >= 1956 && Ano <= 2003)){
            dat = 1;      
    }else {
        dat = 0;
    }
      cadAluno[i].dataNascimento = Dia;
      cadAluno[i].dataNascimento = Mes;
      cadAluno[i].dataNascimento = Ano;
   }
    return dat;
}

int gerarMatriculaAluno(struct registro *cadAluno){
    int mat, i;
    for(i = 0, mat = 100; i < TAM; i++){
        mat = mat + 1;
        cadAluno[i].matricula = mat;
    }
    return mat;
}

void insereAluno(struct registro *cadAluno){
    int i, num, out, mat, dat;

    for(i = 0; i < TAM; i++){
      printf("Nome do aluno:");
      fgets(cadAluno[i].nome, 50, stdin);
      printf("Sexo:");
                num = validaSexoAluno(cadAluno);
                if(num == 0){
                    printf("Cadastro invalido. Dado de sexo invalido\n");
                    printf("Tente novamente.\n\n");
                    return;
                }
      scanf("%c", &cadAluno[i].sexo);
      setbuf(stdin, NULL);
      printf("Cpf:");
                out = validaCpfAluno(cadAluno);
                if(out == 0){
                    printf("Cadastro invalido. Dado de cpf invalido\n");
                    printf("Tente novamente.\n\n");
                    return;
                }
      printf("cpf:%s\n", cadAluno[i].cpf);
      printf("Data de nascimento:\n");
        dat = validaDataNascimentoAluno(cadAluno);
        if(dat == 0){
            printf("Cadastro invalido. Dado de data de nascimento invalido\n");
            printf("Tente novamente.\n\n");
            return;
        }    
      printf("Matricula:");
        mat = gerarMatriculaAluno(cadAluno);
      printf(" %d\n", cadAluno[i].matricula);
      setbuf(stdin, NULL);
      
    }
}

void listaAluno(struct registro *cadAluno){
    int i;

      for(i = 0; i < TAM; i++){
        printf("Nome do aluno: %s\n", cadAluno[i].nome);
        printf("Sexo: %c\n", cadAluno[i].sexo);
        printf("Data de Nascimento:");
        printf("Cpf: %s\n", cadAluno[i].cpf);
        printf("Matricula: %d\n", cadAluno[i].matricula);
      }
}

void matricularAluno(struct matr *cadMatricula){
    int i;

    for(i = 0; i < TAM; i++){
      printf("Nome do aluno:\n");
      scanf("%s", cadMatricula[i].aluno.nome);
      printf("Disciplina:\n");
      scanf("%s", cadMatricula[i].disciplina.nome);
    }
}

void insereDisciplina(struct cadastro *cadDisciplina){
    int i;

    for(i = 0;i < TAM; i++){
      printf("Nome da disciplina:\n");
      fgets(cadDisciplina[i].nome, 50, stdin);
      printf("Codigo da disciplina:\n");
      scanf("%s", cadDisciplina[i].codigo);
      printf("Semestre da disciplina:\n");
      scanf("%d", &cadDisciplina[i].semestre);
      printf("Professor da disciplina:\n");
      scanf("%s", cadDisciplina[i].professor);
    }
}

void listaDisciplina(struct cadastro *cadDisciplina){
    int i;

    for(i = 0; i< TAM; i++){
      printf("Nome disciplina: %s\n", cadDisciplina[i].nome);
      printf("Codigo disciplina: %s\n", cadDisciplina[i].codigo);
      printf("Semestre disciplina ministrada: %d", cadDisciplina[i].semestre);
      printf("Professor que ministra: %s", cadDisciplina[i].professor);
    }
}

void listarDiscAlunos(struct matr *cadMatricula){  
    char pesquisaDisciplina[50];
    int i;

    printf("Digite a disciplina para ver os alunos que nela estao matriculados:\n");
    setbuf(stdin, NULL);
    scanf("%s", pesquisaDisciplina);
        for(i= 0; i < TAM; i++){
            if(!strcmp(cadMatricula[i].disciplina.nome,pesquisaDisciplina)){                        
                printf("Aluno: %s\n", cadMatricula[i].aluno.nome);
            }
        }
}
