#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#include "EstruturaVetores.h"

void inicializar()
{
	int posic;
	int retorno = 0;
    int existeEstruturaAuxiliar = 0;
    int temEspaco = 0;
    //p[posicao - 1] == NULL;
    //int posicao_invalida = 0;
    //int p[posicao - 1].qtdElementos = 0;
};

int criarEstruturaAuxiliar(int posicao, int tamanho)
{
    int  retorno;
    p[posicao - 1].tam = 0;
    int qtdELem = 0;

    if(posicao >= 1 || posicao <= 10)
    {
        if(p[posicao - 1].ptrEstAuxiliar == NULL)
        {   
   
            if(tamanho > 1)
            { 
            	if(tamanho < 100)
            	{                   
                    p[posicao - 1].ptrEstAuxiliar = (int*) malloc(sizeof(int)*tamanho);
                    p[posicao - 1].tam = tamanho;
                    p[posicao - 1].qtdElementos++; // incrementa para contar e controlar a quantidade de elementos

                    return retorno = SUCESSO;                 
                }
                else
                {
                    return retorno = SEM_ESPACO; 
                }    
            }
            else
            {
               return retorno = TAMANHO_INVALIDO;  
            } 
        }
        else
        {
            return retorno = JA_TEM_ESTRUTURA_AUXILIAR; 
        }     
    }    
    else
    {
        return retorno = POSICAO_INVALIDA;
    }    
}

int inserirNumeroEmEstrutura(int posicao, int valor)
{
    int tamVetor;
    int tamanho;
    int retorno = 0;
    int existeEstruturaAuxiliar = 0;
    int temEspaco = 0;
    //int posicao_invalida = 0;
    //int p[posicao - 1].qtdElementos = 0; 

    tamVetor = (p[posicao - 1].qtdElementos) * sizeof(int);

    if (posicao >= 1 || posicao <= 10)
    {                    
        if (p[posicao - 1].ptrEstAuxiliar != NULL)
        {
            if (tamVetor < tamanho)
            {            	
                p[posicao - 1].valor = valor;
                p[posicao - 1].qtdElementos++; 
                
                return retorno = SUCESSO; 
            }
            else
            {
                return retorno = SEM_ESPACO; 
            }
        }
        else
        {
            return retorno = SEM_ESTRUTURA_AUXILIAR; 
        }
    }
    else
    {
       return retorno = POSICAO_INVALIDA; 
    }
}

int excluirNumeroDoFinaldaEstrutura(int posicao)
{
   
    int retorno = SUCESSO;
	    
    if(posicao >= 1 || posicao <= 10)
    {
	    if(p[posicao - 1].ptrEstAuxiliar != NULL)
	    {  
	        if(p[posicao - 1].ptrEstAuxiliar > 0 && posicao == p[posicao - 1].posic)
	        {
	            p[posicao - 1].ptrEstAuxiliar--;

	            return retorno = SUCESSO;	        
	        }
	        else
	        {
	            return retorno = ESTRUTURA_AUXILIAR_VAZIA;
	        }
	    }
	    else
	    {
	        return retorno = SEM_ESTRUTURA_AUXILIAR;
	    }
	}
	else
	{
		return retorno = POSICAO_INVALIDA;
	}    
}

int excluirNumeroEspecificoDeEstrutura(int posicao, int valor)
{

	int aux;
    int retorno = SUCESSO;
    int tamanho;
    int i;

    if(p[posicao - 1].ptrEstAuxiliar != NULL)
    {
        if(posicao >= 1 || posicao <= 10)
        {
        	if(p[posicao -1].qtdElementos != 0)
        	{
	            if(valor == p[posicao - 1].valor)
	            {
	            	p[posicao - 1].valor = -1;
	            }	
	            else
	            {
	                return retorno = NUMERO_INEXISTENTE;
	            }	        
            }            
            else
            {
                return retorno = ESTRUTURA_AUXILIAR_VAZIA;
            }	            
        }    
        else
        {
            return retorno = POSICAO_INVALIDA;
        }
    }    
    else
    {
        return retorno = SEM_ESTRUTURA_AUXILIAR;
    }
}

int getDadosEstruturaAuxiliar(int posicao, int vetorAux[])
{
    int retorno, i = 0;
    

    if(posicao >= 1 || posicao <= 10)
    {
        if (p[posicao-1].ptrEstAuxiliar != NULL)
        {
            while(i < (p[posicao - 1].qtdElementos))
            {
                vetorAux[i] = p[posicao-1].ptrEstAuxiliar[i];
                i++;
            }

            return retorno = SUCESSO;
        }
        else
        {
            return retorno = SEM_ESTRUTURA_AUXILIAR;
        }
    }
    else
    {
        return retorno = POSICAO_INVALIDA;
    }    
}

int getDadosOrdenadosEstruturaAuxiliar(int posicao, int vetorAux[])
{

    int retorno = 0, i;


    if(posicao >= 1 || posicao <= 10)
    {
    	if (p[posicao-1].ptrEstAuxiliar != NULL)
        {
        	for(i = 0; i < (p[posicao - 1].qtdElementos); i++)
        	{
        		vetorAux[i] = p[posicao - 1].ptrEstAuxiliar[i]; 
        	}
        		return retorno = SUCESSO;
        }
        else
        {
        	return retorno = SEM_ESTRUTURA_AUXILIAR;
        }	
    }    
    else
    {
    	return retorno = POSICAO_INVALIDA;
    }
}    

/*int getDadosDeTodasEstruturasAuxiliares(int vetorAux[])
{

    int retorno = 0;
    return retorno;
}

int getDadosOrdenadosDeTodasEstruturasAuxiliares(int vetorAux[])
{

    int retorno = 0;
    return retorno;
}*/

int modificarTamanhoEstruturaAuxiliar(int posicao, int novoTamanho)
{

    int retorno;

    if(p[posicao - 1].ptrEstAuxiliar != NULL)
    {
        if(posicao >= 1 || posicao <= 10)
        {
            if(novoTamanho > 0)
            {
                p[posicao - 1].tam = novoTamanho;
                p[posicao - 1].ptrEstAuxiliar = ((int*)realloc(p[posicao - 1].ptrEstAuxiliar), sizeof(int) * novoTamanho);


                return retorno = SUCESSO;                
            }    
            else
            {
                return retorno = NOVO_TAMANHO_INVALIDO;               
        	}
        }	
        else
        {
            return retorno = POSICAO_INVALIDA; 
        }
    }    
    else
    {
        return retorno = SEM_ESTRUTURA_AUXILIAR;
    }
}

int getQuantidadeElementosEstruturaAuxiliar(int posicao)
{

    int retorno = 0;
    int qtdElementosEstruturaAuxiliar; // variável que irá receber quantidade de elementos

    if (posicao >= 1 || posicao <= 10)
    {
    	if(p[posicao - 1].ptrEstAuxiliar != NULL)
	    {
	    	if(p[posicao -1].qtdElementos != 0)
        	{
        		qtdElementosEstruturaAuxiliar = p[posicao -1].qtdElementos;
        	}
        	else
        	{
        		return retorno = ESTRUTURA_AUXILIAR_VAZIA;	
        	}
	    }
	    else
	    {
	    	return retorno = SEM_ESTRUTURA_AUXILIAR;
	    }	
	}
	else
	{
		return retorno = POSICAO_INVALIDA;	
	}
}

/*No *montarListaEncadeadaComCabecote()
{

    return NULL;
}

void getDadosListaEncadeadaComCabecote(No *inicio, int vetorAux[])
{
}

void destruirListaEncadeadaComCabecote(No **inicio)
{
}*/

void finalizar()
{
	int retorno = 0;
    int existeEstruturaAuxiliar = 0;
    int temEspaco = 0;
};
