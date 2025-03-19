#include <stdio.h>

int main (){

int torre = 0;
int bispo = 0;
int rainha;

//movimentacao da torre

        printf("MOVIMENTACAO DA TORRE:\n");
        
    while(torre < 5){
        printf("Direita\n");
        torre++;
    }

//movimentacao do bispo

        printf("MOVIMENTACAO DO BISPO:\n");

    do{
        printf("Cima, Direita\n");
        bispo++;
    }while (bispo < 5);

//movimentacao da rainha

        printf("MOVIMENTACAO DA RAINHA:\n");
    
    for(rainha = 0; rainha < 8; rainha++){
        printf("Esquerda\n");
    }


return 0;


}