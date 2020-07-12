#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NIVEL_MINIMO_CAIXA 10
#define NIVEL_MAXIMO_CAIXA 980

int main(void)
{

    int nivelMedicao;
    char mensagem[20];

    printf("Informe o nível da medicao: ");
    scanf("%d", &nivelMedicao);

    if (nivelMedicao <= NIVEL_MINIMO_CAIXA)
    {
        mensagem[20] = "Nível baixo, ligar bomba\0";
    }
    else if (nivelMedicao >= NIVEL_MAXIMO_CAIXA)
    {
        mensagem[20] = "Nível alto, desligar bomba\0";
    }
    printf(&mensagem);

    return 0;
}