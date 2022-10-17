#define TAM 5

int TornaVazia(int fila[TAM], int frente, int *tras){
    frente = 0;
    *tras = frente;
}

int  VerifVazia(int fila[TAM], int frente, int *tras){
    if (frente = *tras){
        return true;
        printf("Erro: Fila Vazia!");
    }else{
        return false;
        printf("Fila Não está vazia!!");
    }  
}

int  enfileirar(int x, int fila[TAM], int *tras){
    if (*tras== TAM){
        printf("Erro: Fila Cheia!");
    }else{
        fila[*tras] = x;
        *tras += 1;
    }
}

int  desenfileirar( int fila[TAM], int x, int *tras, int frente){
    if(*tras == 0){
        printf("Erro: Fila Vazia!");
    }else{
        x = fila[frente];
        frente += 1;
        *tras -= 1;
    }
}

int  printfila(int x, int fila[TAM]){
    printf("\n") ;

    for(int i = 0; i < TAM; i++){
        printf("%d - ", fila[i]);
    }
    printf("\n");
}

int  filaCheia(int fila[TAM], int frente, int *tras){
    if(*tras == TAM){
        printf("FILA CHEIA!!");
    }else{
        printf("Fila NÃO está cheia!");
    }
}

int main(){
    int fila[TAM] = {0,0,0,0,0};
    int frente = 0;
    int tras = 0;
    int x = 0;
    

    TornaVazia(fila, frente, &tras);
    VerifVazia(fila, frente, &tras);
    printfila(x, fila);
    enfileirar(10, fila, &tras);
    printfila(x, fila);
    enfileirar(20, fila, &tras);
    printfila(x, fila);
    enfileirar(30, fila, &tras);
    printfila(x, fila);
    enfileirar(40, fila, &tras);
    printfila(x, fila);
    desenfileirar(fila, x, &tras, frente);
    printfila(x, fila);
    desenfileirar(fila, x, &tras, frente);
    printfila(x, fila);
    enfileirar(31, fila, &tras);
    printfila(x, fila);
    enfileirar(41, fila, &tras);
    printfila(x, fila);
    enfileirar(51, fila, &tras);
    printfila(x, fila);
    VerifVazia(fila, frente, &tras);
    filaCheia(fila, frente, &tras);
    printfila(x, fila);


}