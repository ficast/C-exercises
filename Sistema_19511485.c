// /* Atividade Prática
// José, professor universitário de Arquitetura e Urbanismo, possui em seu escritório caixas e mais caixas de livros e revistas, que aos poucos estão sendo catalogados por sua secretária Vanessa.
// Vanessa está catalogando em uma planilha eletrônica os principais dados de Livros e Revistas, tais como (título da obra, edição, nome do autor, editora, isbn, quantidade de exemplares, caixa onde a obra está armazenada e ano).
// A proposta da atividade mapa, é o desenvolvimento de um sistema de pequeno porte para o controlar onde estão armazenadas as obras do arquiteto. Para a construção deste sistema, você deverá utilizar a linguagem C, armazenando os dados em arquivo texto.
// O sistema a ser construído necessitará atender aos requisitos funcionais abaixo:

// 1 - Possuir a sua identificação (RA-Nome-Curso)
// 2 - Possuir um menu de opção.
// 2.1 - Incluir o registro das obras.
// 2.2 - Listar todos os livros.
// 2.3 - Listar todas as revistas.
// 2.4- Listar as obras por caixa.

// O arquivo com os dados das obras, já devem vir previamente cadastradas com no mínimo: 5 livros e 5 revistas, ambas espalhadas em 3 caixas. */

#include <stdio.h>
#include <stdlib.h>
#define TAM 4

int printMenu()
{
  printf("------------------------------------------------------ \n");
  printf(">>>> FILIPE DE CASTRO OLIVEIRA <<<< \n");
  printf(">>>> RA: 1951148-5 <<<< \n");
  printf(">>>> ENGENHARIA DE SOFTWARE <<<< \n");
  printf("------------------------------------------------------ \n");
  printf("1 - Cadastrar obras \n");
  printf("2 - Listar todos os livros \n");
  printf("3 - Listar todas as revistas \n");
  printf("4 - Listar as obras por caixa \n");
  printf("5 - Sair \n");
  printf("Escolha a opção: \n");
  return 0;
}

struct book
{
  int item;
  char *title[50];
  char *writer[50];
  char *press[50];
  int year;
  int quantity;
  int box;
  int type;
};

int main()
{

  int option = 0, i = 1, j = 0, box;
  struct book listOfBooks[5];

  listOfBooks[0].item = 1;
  listOfBooks[0].title[50] = "Lord of The Rings";
  listOfBooks[0].writer[50] = "J.R.R.Tolkien";
  listOfBooks[0].press[50] = "Martins Fontes";
  listOfBooks[0].year = 2002;
  listOfBooks[0].quantity = 2;
  listOfBooks[0].box = 2;
  listOfBooks[0].type = 1;

  while (option != 5)
  {
    printMenu();
    scanf("%d", &option);
    fflush(stdin);

    switch (option)
    {
    case 1:
      system("clear");
      listOfBooks[i].item = i + 1;
      printf("Digite o título do livro:\n");
      scanf("%s", &listOfBooks[i].title);
      fflush(stdin);
      printf("Digite o nome do autor:\n");
      scanf("%s", &listOfBooks[i].writer);
      fflush(stdin);
      printf("Digite o nome da editora:\n");
      scanf("%s", &listOfBooks[i].press);
      fflush(stdin);
      printf("Digite o ano:\n");
      scanf("%d", &listOfBooks[i].year);
      printf("Digite a quantidad:\n");
      scanf("%d", &listOfBooks[i].quantity);
      fflush(stdin);
      printf("Digite a caixa:\n");
      scanf("%d", &listOfBooks[i].box);
      fflush(stdin);
      printf("Digite 1 - Livro ou 2 - Revista:\n");
      scanf("%d", &listOfBooks[i].type);
      fflush(stdin);
      i++;
      break;

    case 2:
      system("clear");
      for (j = 0; j < i; j++)
      {
        printf("%d", i);

        if (listOfBooks[j].type == 1)
        {
          printf("*******************************************************\n");
          printf("Título: %s\n", listOfBooks[j].title);
          printf("Autor: %s\n", listOfBooks[j].writer);
          printf("Editora: %s\n", listOfBooks[j].press);
          printf("Ano: %d\n\n", listOfBooks[j].year);
        }
      }
      break;

    case 3:
      system("clear");
      for (j = 0; j < i; j++)
      {
        if (listOfBooks[j].type == 2)
        {
          printf("*******************************************************\n");
          printf("Título: %s\n", listOfBooks[j].title);
          printf("Autor: %s\n", listOfBooks[j].writer);
          printf("Editora: %s\n", listOfBooks[j].press);
          printf("Ano: %d\n\n", listOfBooks[j].year);
        }
      }
      break;

    case 4:
      system("clear");
      printf("Digite o número da caixa");
      scanf("%d", &box);
      for (j = 0; j < i; j++)
      {
        if (listOfBooks[j].box == box)
        {
          printf("*******************************************************\n");
          printf("Título: %s\n", listOfBooks[j].title);
          printf("Autor: %s\n", listOfBooks[j].writer);
          printf("Editora: %s\n", listOfBooks[j].press);
          printf("Ano: %d\n\n", listOfBooks[j].year);
        }
      }
      break;

    default:
      break;
    }
  }
}
