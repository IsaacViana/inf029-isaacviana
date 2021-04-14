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
