// A revendedora de carros novos SDI, utiliza em sua regra de negócio de vendas ao consumidor final, o seguinte cálculo: o custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica).

// Diante do contexto acima, construa uma função em linguagem C que receba por parâmetros o valor de fábrica do carro, a percentagem do distribuidor e os impostos. Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, você deverá realizar a leitura do custo de fábrica de um carro, chamar a função construída passando todos os parâmetros, e imprimir o custo ao consumidor retornado pela função.

#include <stdio.h>
#include <stdlib.h>

float myFunction(float val, float imp, float por){
  float porcentagem = por, impostos = imp, valor = val, total;
  total = valor + (valor * impostos) + (valor * porcentagem);
  
  return total;
}

int main(){

  float result;
  result = myFunction(400.45, 0.28, 0.45);

  printf("Valor total: R$ %.2f", result);
  printf("\n");
  
  return 0;
}