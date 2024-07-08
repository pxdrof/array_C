/******************************************************************************
Escreva um programa em C que leia um array de N inteiros, calcule e imprima:
a. A moda dos elementos no array (elemento mais freqüente).
b. A mediana dos elementos no array (elemento central)
c. A média
*******************************************************************************/
#include <stdio.h>

int main()
{
    int tamanho;
    int moda, media;
    int medianaPar, medianaImpar;
    int icont, jcont;
    int aux, temp, calc, mod, soma;
    
    printf("Qual o tamanho do array: ");
    scanf("%d", &tamanho);
    
    int array[tamanho];
    
    printf("\n************  Entre com os valores do array ************ \n");
    for (icont = 0; icont < tamanho; icont++){
        printf("posição %d: ",icont);
        scanf("%d", &array[icont]);
    }
    
    /******************************************************************************/
    // Ordenando o vetor 
    for (icont = 0; icont < tamanho - 1; icont++){
        for (jcont = 0; jcont < tamanho - 1 - icont; jcont++){
            if (array[jcont] > array[jcont + 1]){
                aux = array[jcont];
                array[jcont] = array[jcont + 1];
                array[jcont + 1] = aux;
            }
        }
    }
    
    /******************************************************************************/
    // Impressão do array ordenado
    printf("\n************ Array ordenado ************\n");
    for (icont = 0; icont < tamanho; icont++){
        printf("posição %d: %d\n", icont, array[icont]);
    }
    
    /******************************************************************************/
    // Encontrar a Moda no array (array ordenado)
    for (icont = 0; icont < tamanho + 1; icont++){
        if (array[icont] == array[icont + 1]){
            moda = array[icont];
        }
    }
    
    printf("\n************ Moda ************\n");
    if (moda == 0){
        printf("Nenhum elemento se repete neste array\n");
    } else {
        printf("A moda desse array é: %d\n", moda);
    }
    
    /******************************************************************************/
    // Encontrar a Mediana no array
    printf("\n************ Mediana ************ \n");
    for (icont = 0; icont < tamanho; icont++){
        // Mediana para array com tamanho impar
        mod = icont/2;
        medianaImpar = array[mod];
        
        //Mediana para array com tamanho par
        temp = icont/2;
        calc = temp + 1;
        medianaPar = (array[temp] + array[calc])/2;
        
    }
  
     if (tamanho % 2 != 0){
        printf("A mediana desse array é: %d \n", medianaImpar);
    } else {
        printf("A mediana desse array é: %d \n", medianaPar);
    } 
    
    /******************************************************************************/
    // Encontrar a Média no array
    printf("\n************ Média ************ \n");
    for (icont = 0; icont < tamanho; icont++){
        soma += array[icont];
        media = soma/tamanho;
    }
    
    printf("A média desse array é: %d", media);
}