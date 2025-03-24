#include <stdio.h>

void TorreRecursivo(int numero){
    if (numero > 0){

        printf("Direita\n");
        TorreRecursivo(numero - 1);

    }
}

void BispoRecursivo(int numero){
        for(int bispo = 0; bispo < numero; bispo++){
            printf("Cima, ");
            printf("Direita\n");
        }
        }

void RainhaRecursivo(int numero){
    if (numero > 0){
         printf("Esquerda\n");
        RainhaRecursivo(numero - 1);
    }
    }

void CavaloRecursivo(int i, int j){

    for(i = 0; i < 2; i++)
    {
        printf("Cima\n");

        for(j = 0; j < i; j++){

        printf("Direita\n");
        }
        
   }
}

int main (){

int torre = 5;
int bispo = 5;
int rainha = 8;
int icavalo = 0, jcavalo = 0;

//movimentacao da torre

        printf("MOVIMENTACAO DA TORRE:\n");
        
    TorreRecursivo(torre);

//movimentacao do bispo

        printf("MOVIMENTACAO DO BISPO:\n");

    BispoRecursivo(bispo);

//movimentacao da rainha

        printf("MOVIMENTACAO DA RAINHA:\n");
    
    RainhaRecursivo(rainha);

//movimentacao do cavalo

        printf("MOVIMENTACAO DO CAVALO:\n");

    CavaloRecursivo(icavalo, jcavalo);



return 0;


}