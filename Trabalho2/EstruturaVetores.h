#include <stdio.h>
#include <stdlib.h>

enum { TAMANHO_INVALIDO, SEM_ESPACO_DE_MEMORIA, POSICAO_INVALIDA, ESTRUTURA_AUXILIAR_VAZIA, NUMERO_INEXISTENTE,
       NOVO_TAMANHO_INVALIDO, JA_TEM_ESTRUTURA_AUXILIAR, SEM_ESTRUTURA_AUXILIAR, SEM_ESPACO, SUCESSO };


// Definição da estrutura principal
typedef struct
{
	int tam, posic, qtdElementos, valor;
	int *ptrEstAuxiliar;

}principal;

principal p[10];

int criarEstruturaAuxiliar(int posicao, int tamanho);
int inserirNumeroEmEstrutura(int posicao, int valor);
int excluirNumeroDoFinaldaEstrutura(int posicao);
int excluirNumeroEspecificoDeEstrutura(int posicao, int valor);
int getDadosEstruturaAuxiliar(int posicao, int vetorAux[]);
int getDadosOrdenadosEstruturaAuxiliar(int posicao, int vetorAux[]);
int modificarTamanhoEstruturaAuxiliar(int posicao, int novoTamanho);
int getQuantidadeElementosEstruturaAuxiliar(int posicao);

/*No *montarListaEncadeadaComCabecote();
void getDadosListaEncadeadaComCabecote(No *inicio, int vetorAux[]);
void destruirListaEncadeadaComCabecote(No **inicio);*/

void inicializar();
void finalizar();
