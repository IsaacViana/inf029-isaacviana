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
        dat = validaDataNascimento(cadAluno);
        if(dat == 0){
            printf("Cadastro invalido. Dado de data de nascimento invalido\n");
            printf("Tente novamente.\n\n");
            return;
        }    
      printf("Matricula:");
        mat = gerarMatricula(cadAluno);
      printf(" %d\n", cadAluno[i].matricula);
      
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

int validaSexoAluno(struct registro *cadAluno){
    int i, num;

    for(i = 0; i < TAM; i++){
        scanf("%c", &cadAluno[i].sexo);
        if(cadAluno[i].sexo == 'M' || cadAluno[i].sexo == 'm' || cadAluno[i].sexo == 'F' || cadAluno[i].sexo == 'f' || cadAluno[i].sexo == 'O' || cadAluno[i].sexo == 'o')
        {
        num = 1;
        }else{
            num = 0;
        }
    }
        return num;
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

int gerarMatricula(struct registro *cadAluno){
    int mat, i;
    for(i = 0, mat = 100; i < TAM; i++){
        mat = mat + 1;
        cadAluno[i].matricula = mat;
    }
    return mat;
}

int validaDataNascimento(struct registro *cadAluno){
    
    int dia, mes, ano;
    int dat;
    int i;   
   
    printf("Dia:\n");
    scanf("%d", &dia);
    printf("Mes:\n");
    scanf("%d", &mes);
    printf("Ano:\n");
    scanf("%d", &ano);
    
    for(i = 0; i < TAM; i++){ 
    
    if((dia >= 1 && dia <= 29)  && (mes == 2) && (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) && 
       (ano >= 1956 && ano <= 2003)){ 
            dat = 1;
    }else if((ano % 4 != 0) && (ano >= 1956 && ano <= 2003) && (mes == 2) && (dia >= 1 && dia <= 28)){
            dat = 1;
    }else if((dia >= 1 && dia <= 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11) && (ano >= 1956 && ano <= 2003)){
            dat = 1;
    }else if((dia >= 1 && dia <= 31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || 
              mes == 12) && (ano >= 1956 && ano <= 2003)){
            dat = 1;      
    }else {
        dat = 0;
    }
      cadAluno[i].dataNascimento.dia = dia;
      cadAluno[i].dataNascimento.mes = mes;
      cadAluno[i].dataNascimento.ano = ano;
   }
    return dat;
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
