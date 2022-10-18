#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#define TAM 5

void TornaVazia(int fila[TAM], int frente, int *tras){
    frente = 0;
    *tras = frente;
}

void  VerifVazia(int fila[TAM], int frente, int *tras){
    if (frente == *tras){
        printf("Erro: Fila Vazia!\n");
    }else{
        printf("Fila NAO esta vazia!!\n");
    }  
}

void  enfileirar(int x, int fila[TAM], int *tras){
    if (*tras== TAM){
        printf("Erro: Fila Cheia!\n");
    }else{
        fila[*tras] = x;
        *tras = *tras + 1;
    }
}

void  desenfileirar( int fila[TAM], int *tras, int *frente){
    if(tras == 0){
        printf("Erro: Fila Vazia!\n");
    }else{
    	fila[*frente] = 0;
    	*frente += 1;
    	*tras -= 1;
    }
}

void  printfila(int x, int fila[TAM]){
    printf("\n") ;

    for(int i = 0; i < TAM; i++){
        printf("%d - ", fila[i]);
    }
    printf("\n");
}

void  filaCheia(int fila[TAM], int frente, int *tras){
    if(*tras == TAM){
        printf("Fila CHEIA!!\n");
    }else{
        printf("Fila NAO esta cheia!\n");
    }
}

int main(){
    int fila[TAM] = {0,0,0,0,0};
    int frente = 0;
    int tras = -1;
    int x = 0;
    

    TornaVazia(fila, frente, &tras);
    printfila(x, fila);
    VerifVazia(fila, frente, &tras);
    enfileirar(10, fila, &tras);
    printfila(x, fila);
    enfileirar(20, fila, &tras);
    printfila(x, fila);
    enfileirar(30, fila, &tras);
    printfila(x, fila);
    desenfileirar(fila, &tras, &frente);
    printfila(x, fila);
    desenfileirar(fila, &tras, &frente);
    printfila(x, fila);
    desenfileirar(fila, &tras, &frente);
    printfila(x, fila);
    enfileirar(31, fila, &tras);
    printfila(x, fila);
    enfileirar(41, fila, &tras);
    printfila(x, fila);
    enfileirar(51, fila, &tras);
    printfila(x, fila);
    filaCheia(fila, frente, &tras);
    enfileirar(61, fila, &tras);
    printfila(x, fila);
    enfileirar(71, fila, &tras);
    printfila(x, fila);
    filaCheia(fila, frente, &tras);


}