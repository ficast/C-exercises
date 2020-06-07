# Fundamentos de C
Fundamentos de C, elaborado a partir da disciplina Algorítmos e Lógica de Programação II, no Bacharelado em Engenharia de Software da UniCesumar.

## Importando Bibliotecas

As bibliotecas são importadas no início do programa com a seguinte sintaxe:

    #include <studio.h> // entrada/saida de dados
    #include <stdlib.h> // funçções de chamada de sistema
    #include <math.h> // operações matemáticas

## Definindo Constantes

Logo após, são declaradas as constantes globais:

    #define PI 3.1416
    #define MSG_ERRO "Erro!"

## Definição da função principal

Essa é a extrutura principal de um programa em C. As variáveis e demais estruturas serão definidas dentro do escopo de main().

      int main(){
          /* code */
      }

## Declaração de variável

O tipo da variável deve ser definido antes do nome da variável, sendo:

* inteiro: int
* decimal: float
* caractere: char
* string: char[numero] // numero é o tamanho da string
* booleano: bool

Exemplo:

    int idade, ano, ano_atual;
    float salario;
    char nome[20];
    bool brasileiro;

## Atribuição de variável

Utiliza-se o sinal = para atribuir um valor a uma variável:

    ano_atual = 2020;
    ano = 1989;
    idade = ano_atual - ano;

A atribuição pode ser realizada na mesma linha da declaração, por exemplo:

    int idade = 18, ano = 2020;
    float salario = 3500.50;
    char nome[20] = "o pão é meu." 
    bool brasileiro = true;

## Operadores aritiméticos

* soma: +
* multiplicação: *
* divisão: /
* subtração: -
* Módulo(resto de divisão inteira): %
* Prioridade: ( ) 


## Operadores relacionais

* Maior que: >
* Maior ou igual: >=
* Menor que: <
* Menor ou igual: <=
* Igual: ==
* Diferente: !=


## Operadores lógicos

* NOT: !
* AND: &&
* OR: ||



## Funções intrínsecas

* ceil() // arredonda pra cima
* abs() // módulo |-x| == x
* floor() // arredonda pra baixo
* log() // logarítmo natural
* log10() // logarítmo na base 10
* z = modf(x, &y) // x recebe a parte fracional e coloca a inteira no y
* pow(x,y) // potencia x elevado a y
* sqrt() //raiz quadrada
* printf("texto") // imprimir em tela
* scanf("%d", &x) // ler o que foi digitado (tipo de dado, variavel)

## Entrada e saída de dados

* Leitura a partir do teclado
  
      scanf("<tipo_variavel", &<variavel>);

* Escrita de dados na tela

      printf("texto <tipo_variavel", <variavel>);


## Especificadores de formato
* %d ou %i imprimir/ler int
* %f imprimir/ler float
* %e ou %lf imprimir/ler double
* %c imprimir/ler char
* %s imprimir/ler vetor de char (string)

## Tabulação de texto
* \n pula linha
* \0 indica o fim de um texto
* \ indica que o próximo caractere, caso seja especial, deveá ser interpretado literalmente
* '   ' indica um espaço
* \t insere um tab
* \b recua um tab
* \f salta de pagina de 

# Estruturas condicionais

## If else

    if (/* condition */){
        /* code */
    } else {
        /* code */
    }

## Switch

    switch (option){
    case 1: /* code */;
        break;

    case 2: /* code */;
        break;

    case 3: /* code */;
        break;

    case 4: /* code */;
        break;

    default: printf("Opção inválida. \n");
        break;
    }

# Estruturas de repetição

## For
    
    int i;
    for (i = 0; i < count; i++){
        /* code */
    } 

    Obs: Quando não for determinado o incremento, o padrão é +1.

## While

Ao contrário do for, o índice deve ser inicializado antes do while e o incremento de ve ser realizado dentro do escopo.

    int i = 0;
    while (i < 100){
        /* code */
        i = i+1;
    }

