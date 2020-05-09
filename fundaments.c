// Constantes

#define PI 3.1416
#define MSG_ERRO "Erro!"

// Declaração de variável

int idade, ano, ano_atual;
float salario;
char nome[20];
bool brasileiro;

// Atribuição de variável

ano_atual = 2020;
ano = 1989;
idade = ano_atual - ano;

/* 
Operadores aritiméticos

soma: +
multiplicação: *
divisão: /
subtração: -
Módulo(resto de divisão inteira): %

Prioridade: ( ) 
*/

/* 
Operadores relacionais

Maior que: >
Maior ou igual: >=
Menor que: <
Menor ou igual: <=
Igual: ==
Diferente: !=
*/

/*
Operadores lógicos

NOT: !
AND: &&
OR: ||
*/

// Bibliotecas
#include <studio.h> // entrada/saida de dados
#include <stdlib.h> // funçções de chamada de sistema
#include <math.h> // operações matemáticas


// Funções intrínsecas

ceil() //arredonda pra cima
abs() //módulo |-x| == x
floor() //arredonda pra baixo
log() //logarítmo natural
log10() //logarítmo na base 10
z = modf(x, &y) // x recebe a parte fracional e coloca a inteira no y
pow(x,y) // potencia x elevado a y
sqrt() //raiz quadrada
printf("texto") // imprimir em tela
scanf("%d", &x) // ler o que foi digitado (tipo de dado, variavel)

int main(){
  float A = 4, Resultado;
  Resultado = sqrt(A);
}


//Entrada e saída de dados

//Leitura a partir do teclado
scanf("<tipo_variavel"), &<variavel>);

//Escrita de dados na tela
printf("texto <tipo_variavel", <variavel>);

/*
Especificadores de formato
%d imprimir/ler int
%f imprimir/ler float
%e ou %lf imprimir/ler double
%c imprimir/ler char
%s imprimir/ler vetor de char (string)
*/

/*
Tabulação de texto
\n pula linha
\0 indica o fim de um texto
\ indica que o próximo caractere, caso seja especial, deveá ser interpretado literalmente
'   ' indica um espaço
\t insere um tab
\b recua um tab
\f salta de pagina de formulário