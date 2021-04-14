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
                    return;
                }
      scanf("%c", &cadProfessor[i].sexo);
      setbuf(stdin, NULL);
      printf("Cpf:");
                out = validaCpfProfessor(cadProfessor);
                if(out == 0){
                    printf("Cadastro invalido. Dado de cpf invalido\n");
                    printf("Tente novamente.\n\n");
                    return;
                }
      printf("cpf:%s\n", cadProfessor[i].cpf);
      printf("Data de nascimento:\n");
        dat = validaDataNascimento(cadProfessor);
        if(dat == 0){
            printf("Cadastro invalido. Dado de data de nascimento invalido\n");
            printf("Tente novamente.\n\n");
            return;
        }    
      printf("Data de nascimento: %d/%d/%d\n", cadProfessor[i].dataNascimento.dia, cadProfessor[i].dataNascimento.mes, cadProfessor[i].dataNascimento.ano);
      printf("Matricula:");
        mat = gerarMatricula(cadProfessor);
      printf(" %d\n", cadProfessor[i].matricula);
      
    }
}

void listaProfessor(struct registro *cadProfessor){
    int i;
    
    for(i = 0; i < TAM; i++){
      printf("Nome do professor: %s\n", cadProfessor[i].nome);
      printf("Sexo: %c\n", cadProfessor[i].sexo);
      printf("Data de Nascimento: %s\n", cadProfessor[i].dataNascimento);
      printf("Cpf: %s\n", cadProfessor[i].cpf);
      printf("Matricula: %s\n", cadProfessor[i].matricula);
    }
}

int validaSexoProfessor(struct registro *cadProfessor){
    int i, num;
        
    for(i = 0; i < TAM; i++){
        scanf("%c", &cadProfessor[i].sexo);
        if(cadProfessor[i].sexo == 'M' || cadProfessor[i].sexo == 'm' || cadProfessor[i].sexo == 'F' || cadProfessor[i].sexo == 'f' || cadProfessor[i].sexo == 'O' || cadProfessor[i].sexo == 'o')
        {
    		num = 1; 
        }else{
            num = 0; 
        }
    }      
        return num;
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

int gerarMatricula(struct registro *cadProfessor){
    int mat, i;
    for(i = 0, mat = 100; i < TAM; i++){
        mat = mat + 1;
        cadAluno[i].matricula = mat;
    }
    return mat;
}

int validaDataNascimento(struct registro *cadProfessor){
    
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
      cadProfessor[i].dataNascimento.dia = dia;
      cadAlcadProfessoruno[i].dataNascimento.mes = mes;
      cadProfessor[i].dataNascimento.ano = ano;
   }
    return dat;
}

void matricularProfessor(struct matr *cadMatricula){
    int i;

    for(i = 0; i < TAM; i++){
      printf("Nome do Professor:\n");
      scanf("%s", cadMatricula[i].professor.nome);
      printf("Disciplina:\n");
      scanf("%s", cadMatricula[i].disciplina.nome);
    }
}
