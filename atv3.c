#include<stdio.h>
#include<string.h>
#define NIVEL_MINIMO_CAIXA 10
#define NIVEL_MAXIMO_CAIXA 980
    
int main(void)
{
    float nivelMinimoCaixa, nivelMaximoCaixa, nivelMedicao;
    printf("Informe o nível da medicao: ");
    scanf("%f", &nivelMedicao);
    char mensagem[30];
    
    if (NIVEL_MINIMO_CAIXA >= nivelMedicao){
        mensagem = "Ligar Bomba";
    }else if (nivelMedicao >= NIVEL_MAXIMO_CAIXA){
        mensagem = "Desligar Bomba";
    }else{
        mensagem = "Manter Bomba ligada";
    }    
    printf("%s", mensagem);
}