#include <stdio.h>
#include <string.h>

#include "IsaacAraujo2018116026.h"
/*
## função utilizada para testes  ##
 somar = somar dois valores
@objetivo
    Somar dois valores x e y e retonar o resultado da soma
@entrada
    dois inteiros x e y
@saida
    resultado da soma (x + y)
 
int somar(int x, int y)
{
    int soma = 0;
    soma = x + y;
    return soma;
}

/*
## função utilizada para testes  ##
 fatorial = fatorial de um número
@objetivo
    calcular o fatorial de um número
@entrada
    um inteiro x
@saida
    fatorial de x -> x!
 */
/*int fatorial(int x)
{ //função utilizada para testes
    int fat = 1;
    return fat;
}*/


/*int teste(int a)
{
    int val;
    if (a == 2)
        val = 3;
    else
        val = 4;

    return val;
}*/

/*typedef struct DQ
{
    char sDia [3];
    char sMes [3];
    char sAno [3];
    int valido; // 0 se inválido, e 1 se válido 
} DataQuebrada;
DataQuebrada quebraData(char *data){
    //[ 1 , 2  ,  /  ,    ,   ,  /  ,    ,     ,    ,      ,]
}*/
/*
 Q1 = validar data
@objetivo
    Validar uma data
@entrada
    uma string data. Formatos que devem ser aceitos: dd/mm/aaaa, onde dd = dia, mm = mês, e aaaa, igual ao ano. dd em mm podem ter apenas um digito, e aaaa podem ter apenas dois digitos.
@saida
    0 -> se data inválida
    1 -> se data válida
 @restrições
    Não utilizar funções próprias de string (ex: strtok)   
    pode utilizar strlen para pegar o tamanho da string
 */
int q1(char *data)
{
   
    //quebrar a string data em strings sDia, sMes, sAno

    //DataQuebrada dataQuebrada = quebraData(data);
    //if (dataQuebrada.valido == 0) return 0;

    //converter sDia, sMes e sAno em inteiros (ex: atoi)

    //criar as variáveis iDia, iMes, iAno
    //int iAno = atoi(dataQuebrada.sAno);

    //printf("%s\n", data);
    //início do código
    char sDia[3];
    char sMes[3];
    char sAno[5];
    int i, iDia, iMes, iAno, dat;

    for(i = 0; i < 11; i++){
    }

        if(data[2] == '/' && data[5] == '/'){   // valida a data no formato: DD/MM/AAAA.
            sDia[0] = data[0];
            sDia[1] = data[1];
            sDia[2] = '\0';

            sMes[0] = data[3];
            sMes[1] = data[4];
            sMes[2] = '\0';

            sAno[0] = data[6];
            sAno[1] = data[7];
            sAno[2] = data[8];
            sAno[3] = data[9];
            sAno[4] = '\0';
        }

        if(data[1] == '/' && data[3] == '/'){   // valida a data no formato: D/M/AAAA.      
            sDia[0] = data[0];
            sDia[1] = '\0';

            sMes[0] = data[2];
            sMes[1] = '\0';

            sAno[0] = data[4];
            sAno[1] = data[5];
            sAno[2] = data[6];
            sAno[3] = data[7];
            sAno[4] = '\0';
        }

        if(data[1] == '/' && data[4] == '/'){   // valida a data no formato: D/MM/AAAA.
            sDia[0] = data[0];
            sDia[1] = '\0';

            sMes[0] = data[2];
            sMes[1] = data[3];
            sMes[2] = '\0';

            sAno[0] = data[5];
            sAno[1] = data[6];
            sAno[2] = data[7];
            sAno[3] = data[8];
            sAno[4] = '\0';
        }

        if(data[2] == '/' && data[4] == '/'){   // valida a data no formato: DD/M/AAAA.
            sDia[0] = data[0];
            sDia[1] = data[1];
            sDia[2] = '\0';

            sMes[0] = data[3];
            sMes[1] = '\0';

            sAno[0] = data[5];
            sAno[1] = data[6];
            sAno[2] = data[7];
            sAno[3] = data[8];
            sAno[4] = '\0';
        }

         if((iAno >= 100) && (iAno < 1000)){    // se entrada da string sano contiver três dígitos, a data será inválida.
            dat = 0;
         }

         if(iAno < 100){            // se entrada da string sano contiver dois dígitos, será a ela acrescentado o valor 2000.
            iAno = iAno + 2000;
        }
   
        if((iDia >= 1 && iDia <= 29)  && (iMes == 2) && (iAno % 4 == 0 && (iAno % 100 != 0 || iAno % 400 == 0))){   // condição para que o ano seja considerado bissexto com mês 2 tendo 29 dias. 
                return dat = 1;
            }else if((iDia >= 1 && iDia <= 28) && (iMes == 2) && (iAno % 4 != 0)){  // condição para que o ano não seja considerado bissexto com mês 2 tendo 28 dias. 
                    return dat = 1;
                }else if((iDia >= 1 && iDia <= 30) && (iMes == 4 || iMes == 6 || iMes == 9 || iMes == 11)){
                        return dat = 1;
                    }else if((iDia >= 1 && iDia <= 31) && (iMes == 1 || iMes == 3 || iMes == 5 || iMes == 7 || 
                              iMes == 8 || iMes == 10 || iMes == 12)){
                            return dat = 1;      
                        }else{
                            return dat = 0;
                        }

}

/*
 Q2 = diferença entre duas datas
 @objetivo
    Calcular a diferença em anos, meses e dias entre duas datas
 @entrada
    uma string datainicial, uma string datafinal. Além disso, a função tem três parâmetros qtdDias, qtdMeses e qtdAnos. Esses três parâmetros devem ser utilizados para guardar os resultados dos cálculos. Na chamada da função deve passar o valor -1 para os três
 @saida
    1 -> cálculo de diferença realizado com sucesso
    2 -> datainicial inválida
    3 -> datafinal inválida
    4 -> datainicial > datafinal
 */


int q2(char *datainicial, char *datafinal, int *qtdDias, int *qtdMeses, int *qtdAnos)
{

    //calcule os dados e armazene nas três variáveis a seguir
    int nDias, nMeses, nAnos;

    //mantenha o código abaixo, para salvar os dados em 
    //nos parâmetros da funcao
    

    //coloque o retorno correto

    //char datainicial[11], datafinal[11];    // início do código
    char sDiainicial[3], sDiafinal[3];
    char sMesinicial[3], sMesfinal[3];
    char sAnoinicial[5], sAnofinal[5];
    int  i, j, iDiainicial, iMesinicial, iAnoinicial, iDiafinal, iMesfinal, iAnofinal, dat;
    int  anobissextoinicial, anobissextofinal;
    //int  qtdDias, qtdMeses, qtdAnos;

    for(i = 0; i < 11; i++){
    }

        if(datainicial[2] == '/' && datainicial[5] == '/'){     // valida a data no formato: DD/MM/AAAA.
            sDiainicial[0] = datainicial[0];
            sDiainicial[1] = datainicial[1];
            sDiainicial[2] = '\0';

            sMesinicial[0] = datainicial[3];
            sMesinicial[1] = datainicial[4];
            sMesinicial[2] = '\0';

            sAnoinicial[0] = datainicial[6];
            sAnoinicial[1] = datainicial[7];
            sAnoinicial[2] = datainicial[8];
            sAnoinicial[3] = datainicial[9];
            sAnoinicial[4] = '\0';
        }

        if(datainicial[1] == '/' && datainicial[3] == '/'){     // valida a data no formato: D/M/AAAA.
            sDiainicial[0] = datainicial[0];
            sDiainicial[1] = '\0';

            sMesinicial[0] = datainicial[2];
            sMesinicial[1] = '\0';

            sAnoinicial[0] = datainicial[4];
            sAnoinicial[1] = datainicial[5];
            sAnoinicial[2] = datainicial[6];
            sAnoinicial[3] = datainicial[7];
            sAnoinicial[4] = '\0';
        }

        if(datainicial[1] == '/' && datainicial[4] == '/'){     // valida a data no formato: D/MM/AAAA.
            sDiainicial[0] = datainicial[0];
            sDiainicial[1] = '\0';

            sMesinicial[0] = datainicial[2];
            sMesinicial[1] = datainicial[3];
            sMesinicial[2] = '\0';

            sAnoinicial[0] = datainicial[5];
            sAnoinicial[1] = datainicial[6];
            sAnoinicial[2] = datainicial[7];
            sAnoinicial[3] = datainicial[8];
            sAnoinicial[4] = '\0';
        }

        if(datainicial[2] == '/' && datainicial[4] == '/'){     // valida a data no formato: DD/M/AAAA.
            sDiainicial[0] = datainicial[0];
            sDiainicial[1] = datainicial[1];
            sDiainicial[2] = '\0';

            sMesinicial[0] = datainicial[3];
            sMesinicial[1] = '\0';

            sAnoinicial[0] = datainicial[5];
            sAnoinicial[1] = datainicial[6];
            sAnoinicial[2] = datainicial[7];
            sAnoinicial[3] = datainicial[8];
            sAnoinicial[4] = '\0';
        }

        iDiainicial = atoi(sDiainicial);
        iMesinicial = atoi(sMesinicial);
        iAnoinicial = atoi(sAnoinicial);

    for(j = 0; j < 11; j++){
    }

        if(datafinal[2] == '/' && datafinal[5] == '/'){     // valida a data no formato: DD/MM/AAAA.
            sDiafinal[0] = datafinal[0];
            sDiafinal[1] = datafinal[1];
            sDiafinal[2] = '\0';

            sMesfinal[0] = datafinal[3];
            sMesfinal[1] = datafinal[4];
            sMesfinal[2] = '\0';

            sAnofinal[0] = datafinal[6];
            sAnofinal[1] = datafinal[7];
            sAnofinal[2] = datafinal[8];
            sAnofinal[3] = datafinal[9];
            sAnofinal[4] = '\0';
        }

        if(datafinal[1] == '/' && datafinal[3] == '/'){     // valida a data no formato: D/M/AAAA.
            sDiafinal[0] = datafinal[0];
            sDiafinal[1] = '\0';

            sMesfinal[0] = datafinal[2];
            sMesfinal[1] = '\0';

            sAnofinal[0] = datafinal[4];
            sAnofinal[1] = datafinal[5];
            sAnofinal[2] = datafinal[6];
            sAnofinal[3] = datafinal[7];
            sAnofinal[4] = '\0';
        }

        if(datafinal[1] == '/' && datafinal[4] == '/'){     // valida a data no formato: D/MM/AAAA.
            sDiafinal[0] = datafinal[0];
            sDiafinal[1] = '\0';

            sMesfinal[0] = datafinal[2];
            sMesfinal[1] = datafinal[3];
            sMesfinal[2] = '\0';

            sAnofinal[0] = datafinal[5];
            sAnofinal[1] = datafinal[6];
            sAnofinal[2] = datafinal[7];
            sAnofinal[3] = datafinal[8];
            sAnofinal[4] = '\0';
        }

        if(datafinal[2] == '/' && datafinal[4] == '/'){     // valida a data no formato: DD/M/AAAA.
            sDiafinal[0] = datafinal[0];
            sDiafinal[1] = datafinal[1];
            sDiafinal[2] = '\0';

            sMesfinal[0] = datafinal[3];
            sMesfinal[1] = '\0';

            sAnofinal[0] = datafinal[5];
            sAnofinal[1] = datafinal[6];
            sAnofinal[2] = datafinal[7];
            sAnofinal[3] = datafinal[8];
            sAnofinal[4] = '\0';
        }

        iDiafinal = atoi(sDiafinal);
        iMesfinal = atoi(sMesfinal);
        iAnofinal = atoi(sAnofinal);

        if((iAnoinicial >= 100) && (iAnoinicial < 1000)){   // se entrada da string sAnoinicial contiver três dígitos, a data inicial será inválida.
            return 2;  
        }

        if(iAnoinicial < 100){                 // se entrada da string sAnoinicial contiver dois dígitos, será a ela acrescentado o valor 2000.
            iAnoinicial = iAnoinicial + 2000;
        }


        if((iAnofinal >= 100) && (iAnofinal < 1000)){    // se entrada da string sAnofinal contiver três dígitos, a data final será inválida.
            return 3;
        }

        if(iAnofinal < 100){                 // se entrada da string sAnofinal contiver dois dígitos, será a ela acrescentado o valor 2000.  
            iAnofinal = iAnofinal + 2000;
        }   
    
        if((iDiainicial >= 1 && iDiainicial <= 29)  && (iMesinicial == 2) && (iAnoinicial % 4 == 0 && (iAnoinicial % 100 != 0 || iAnoinicial % 400 == 0))){ 
                dat = 1;                                
            }else if((iDiainicial >= 1 && iDiainicial <= 28) && (iMesinicial == 2) && (iAnoinicial % 4 != 0)){
                    dat = 1;
                }else if((iDiainicial >= 1 && iDiainicial <= 30) && (iMesinicial == 4 || iMesinicial == 6 || iMesinicial == 9 || iMesinicial == 11)){
                        dat = 1;
                    }else if((iDiainicial >= 1 && iDiainicial <= 31) && (iMesinicial == 1 || iMesinicial == 3 || iMesinicial == 5 || iMesinicial == 7 || 
                              iMesinicial == 8 || iMesinicial == 10 || iMesinicial == 12)){
                            dat = 1;      
                        }else{
                            dat = 0;
                        }

                         if(dat == 1){
                                dat = 1;
                             }else{
                                return 2;
                             }   

        if((iAnoinicial % 4 == 0) && (iAnoinicial % 100 != 0 || iAnoinicial % 400 == 0)){
                anobissextoinicial = 1;
        }

        if((iDiafinal >= 1 && iDiafinal <= 29) && (iMesfinal == 2) && (iAnofinal % 4 == 0 && (iAnofinal % 100 != 0 || iAnofinal % 400 == 0))){  // condição para que o ano seja considerado bissexto com mês 2 tendo 29 dias.
                dat = 1;                                
            }else if((iDiafinal >= 1 && iDiafinal <= 28) && (iMesfinal == 2) && (iAnofinal % 4 != 0)){  // condição para que o ano não seja considerado bissexto com mês 2 tendo 28 dias.
                    dat = 1;
                }else if((iDiafinal >= 1 && iDiafinal <= 30) && (iMesfinal == 4 || iMesfinal == 6 || iMesfinal == 9 || iMesfinal == 11)){
                        dat = 1;
                    }else if((iDiafinal >= 1 && iDiafinal <= 31) && (iMesfinal == 1 || iMesfinal == 3 || iMesfinal == 5 || iMesfinal == 7 || 
                              iMesfinal == 8 || iMesfinal == 10 || iMesfinal == 12)){
                            dat = 1;      
                        }else{
                            dat = 0;
                        }
                         if(dat == 1){
                                dat = 1;
                             }else{
                                return 3;
                             }

        if((iAnofinal % 4 == 0) && (iAnofinal % 100 != 0 || iAnofinal % 400 == 0)){
                anobissextofinal = 1;
        }

            if((iAnofinal < iAnoinicial) || (iAnofinal == iAnoinicial && iMesfinal < iMesinicial) || (iAnofinal == iAnoinicial &&
                 iMesfinal == iMesinicial && iDiafinal < iDiainicial)){   // condição em que data inicial > data final.  
                    return 4;       
            }
                 else if((iAnofinal >= iAnoinicial) && (iMesfinal >= iMesinicial) && (iDiafinal >= iDiainicial)){
                    nDias = iDiafinal - iDiainicial;
                    nMeses = iMesfinal - iMesinicial;
                    nAnos = iAnofinal - iAnoinicial;
                 }
                     else if((iAnofinal > iAnoinicial) && (iMesfinal < iMesinicial) && (iDiafinal >= iDiainicial)){
                        nDias = iDiafinal - iDiainicial;
                        nMeses = 13 - iMesinicial;
                        nAnos = iAnofinal - iAnoinicial;
                     }
                         else if((iAnofinal > iAnoinicial) && (iMesinicial == 2) && (anobissextofinal == 1) && (iDiafinal < iDiainicial)){
                            nDias = (29 - iDiainicial) + iDiafinal;
                            nMeses = iMesfinal - iMesinicial;
                            nAnos = iAnofinal - iAnoinicial;
                         }
                             else if((iAnofinal > iAnoinicial) && (anobissextoinicial == 1) && (iMesfinal == iMesinicial) && (iDiainicial == 29 && iDiafinal == 28)){
                                nDias = 0;
                                nMeses = 0; 
                                nAnos = 1;
                             }
                            
            *qtdDias = nDias;
            *qtdAnos = nAnos;
            *qtdMeses = nMeses;

            return 1;
   
}

/*
 Q3 = encontrar caracter em texto
 @objetivo
    Pesquisar quantas vezes um determinado caracter ocorre em um texto
 @entrada
    uma string texto, um caracter c e um inteiro que informa se é uma pesquisa Case Sensitive ou não. Se isCaseSensitive = 1, a pesquisa deve considerar diferenças entre maiúsculos e minúsculos.
        Se isCaseSensitive != 1, a pesquisa não deve  considerar diferenças entre maiúsculos e minúsculos.
 @saida
    Um número n >= 0.
 



int q3(char *texto, char c, int isCaseSensitive)
{
    
    char texto[TAM];  //início do código
    char letra[2];
    int i, j, qtdOcorrencias = 0;

    for(i = 0; texto[i] != '\0'; i++){
        for(j = 0; letra[j] != '\0'; j++){
            if(letra[j] == texto[i]){
                qtdOcorrencias++;
            }
        }
    }

    return qtdOcorrencias;
}
*/

/*
 Q4 = encontrar palavra em texto
 @objetivo
    Pesquisar todas as ocorrências de uma palavra em um texto
 @entrada
    uma string texto base (strTexto), uma string strBusca e um vetor de inteiros (posicoes) que irá guardar as posições de início e fim de cada ocorrência da palavra (strBusca) no texto base (texto).
 @saida
    Um número n >= 0 correspondente a quantidade de ocorrências encontradas.
    O vetor posicoes deve ser preenchido com cada entrada e saída correspondente. Por exemplo, se tiver uma única ocorrência, a posição 0 do vetor deve ser preenchido com o índice de início do texto, e na posição 1, deve ser preenchido com o índice de fim da ocorrencias. Se tiver duas ocorrências, a segunda ocorrência será amazenado nas posições 2 e 3, e assim consecutivamente. Suponha a string "Instituto Federal da Bahia", e palavra de busca "dera". Como há uma ocorrência da palavra de busca no texto, deve-se armazenar no vetor, da seguinte forma:
        posicoes[0] = 13;
        posicoes[1] = 16;
        Observe que o índice da posição no texto deve começar ser contado a partir de 1.
        O retorno da função, n, nesse caso seria 1;
 
int q4(char *strTexto, char *strBusca, int posicoes[30])
{
    int qtdOcorrencias = -1;

    return qtdOcorrencias;
}*/

/*
 Q5 = inverte número
 @objetivo
    Inverter número inteiro
 @entrada
    uma int num.
 @saida
    Número invertido
 */

int q5(int num)
{
  
    //long int num;
    int sobra;

    do{
        sobra = num % 10;
            if(num < 0){
                num *= -1;
            }            
        num /= 10;        
    }while(num != 0);

    return sobra;       // não consegui fazer o caminho inverso para montar novamente o numero
}

/*
 Q6 = ocorrência de um número em outro
 @objetivo
    Verificar quantidade de vezes da ocorrência de um número em outro
 @entrada
    Um número base (numerobase) e um número de busca (numerobusca).
 @saida
    Quantidade de vezes que número de busca ocorre em número base
 */

/*int q6(int numerobase, int numerobusca)
{
    int qtdOcorrencias;
    return qtdOcorrencias;
}
*/
