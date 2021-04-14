void insereDisciplina(struct cadastro *cadDisciplina){
    int i;

    for(i = 0;i < TAM; i++){
      printf("Nome da disciplina:\n");
      scanf(cadDisciplina[i].nome, 50, stdin);
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
