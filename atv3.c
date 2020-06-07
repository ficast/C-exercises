#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NIVEL_MINIMO_CAIXA 10
#define NIVEL_MAXIMO_CAIXA 980
    
int main(void){

    int nivelMedicao;
   
    printf("Informe o nível da medicao: ");
    scanf("%d", &nivelMedicao);
    
    if (nivelMedicao <= NIVEL_MINIMO_CAIXA){
        printf("ligar \n");
    } else if (nivelMedicao >= NIVEL_MAXIMO_CAIXA){
        printf("desligar \n");
    } else{
        printf("manter \n");
    }

    getch();
    return 0;

}