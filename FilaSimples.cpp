#define TAM 5

void TornaVazia(fila){
    frente = 0;
    tras = frente;
}

void VerifVazia(fila){
    if (frente = tras){
        return true;
        printf("Erro: Fila Vazia!");
    }else{
        return false;
        printf("Fila Não está vazia!!");
    }  
}

void enfileirar(x, fila){
    if (filaCheia){
        printf("Erro: Fila Cheia!");
    }else{
        fila[tras] = x;
        tras += 1;
    }
}

void desenfileirar(x, fila){
    if(VerifVazia){
        printf("Erro: Fila Vazia!");
    }else{
        x = fila[frente];
        frente += 1;
    }
}

void printfila(x, fila){
    printf("\n") ;

    for(int i = 0; i < TAM; i++){
        printf("%d - ", fila[i]);
    }
}

void filaCheia(fila, frente, tras){
    if(tras == TAM - 1){
        printf("FILA CHEIA!!");
    }else{
        printf("Fila NÃO está cheia!");
    }
}

int main(){
    int fila[TAM] = {0,0,0,0,0};
    int frente = 0;
    int tras = 0;

    TornaVazia(fila, frente, tras);
    VerifVazia(fila, frente, tras);
    printfila(x, fila);
    enfileirar(10, fila);
    printfila(x, fila);
    enfileirar(20, fila);
    printfila(x, fila);
    enfileirar(30, fila);
    printfila(x, fila);
    enfileirar(40, fila);
    printfila(x, fila);
    desenfileirar(x, fila);
    printfila(x, fila);
    desenfileirar(x, fila);
    printfila(x, fila);
    enfileirar(31, fila);
    printfila(x, fila);
    enfileirar(41, fila);
    printfila(x, fila);
    enfileirar(51, fila);
    printfila(x, fila);
    VerifVazia(fila, frente, tras);
    filaCheia(fila, frente, tras);
    printfila(x, fila);


}