#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Q2

typedef struct {
  char estado[30];
  char cidade[30];
  char barrio[30];
  char rua[30];
  int numCasa;
} Endereco;

typedef struct {
  char nome[30];
  int idade;
  Endereco endereco;
} Pessoa;

void cadastrarPessoa(Pessoa *p_pessoa, int *p_cont_pessoa);
void procurarPessoa(Pessoa *p_pessoa, int *p_cont_pessoa);
void imprimirPessoa(Pessoa *p_pessoa, int i);

int main() {
  int cont_pessoa = 0, *p_cont_pessoa, op;
  p_cont_pessoa = &cont_pessoa;

  Pessoa pessoa[cont_pessoa], *p_pessoa;
  p_pessoa = &pessoa;

  do {
    printf("\t\n\n--------Cadastramento de Pessoas--------\n\n");
    printf("1 - Cadastrar pessoa\n2 - Procurar pessoa\n3 - Mostra todas as pessoas cadastradas\n4 - sair\n");
    scanf("%d", &op);

    switch (op) {
    case 1:
      cadastrarPessoa(p_pessoa, p_cont_pessoa);
      (*p_cont_pessoa)++;
      break;
    case 2:
      procurarPessoa(p_pessoa, p_cont_pessoa);
      break;
    case 3:
        for (int i = 0; i < *p_cont_pessoa; i++)
        {
            imprimirPessoa(p_pessoa, i);
        }
      break;
    case 4:
      printf("\nSaindo......");
      break;
    default:
      printf("\nOpcao Invalida!!");
      break;
    }

  } while (op != 4);

  return 0;
}

void cadastrarPessoa(Pessoa *p_pessoa, int *p_cont_pessoa) {
  printf("Informe o nome: ");
  scanf(" %[^\n]s", p_pessoa[*p_cont_pessoa].nome);
  printf("Informe a idade: ");
  scanf("%d", &p_pessoa[*p_cont_pessoa].idade);
  printf("Informe o estado: ");
  scanf(" %[^\n]s", p_pessoa[*p_cont_pessoa].endereco.estado);
  printf("Informe a cidade: ");
  scanf(" %[^\n]s", p_pessoa[*p_cont_pessoa].endereco.cidade);
  printf("Informe o barrio: ");
  scanf(" %[^\n]s", p_pessoa[*p_cont_pessoa].endereco.barrio);
  printf("Informe a rua: ");
  scanf(" %[^\n]s", p_pessoa[*p_cont_pessoa].endereco.rua);
  printf("Informe o numero da casa: ");
  scanf("%d", &p_pessoa[*p_cont_pessoa].endereco.numCasa);
}
void procurarPessoa(Pessoa *p_pessoa, int *p_cont_pessoa) {

  char nome[30];
  int res;
  printf("\t\n\n-------Buscar pessoa-------\n\n");
  printf("Informe o nome da pessoa a ser buscada: ");
  scanf(" %[^\n]s", nome);

  for (int i = 0; i < *p_cont_pessoa; i++) {
    res = strcmp(nome, p_pessoa[i].nome);
    if (res == 0) {
      imprimirPessoa(p_pessoa, i);
    }
  }
}

void imprimirPessoa(Pessoa *p_pessoa, int i){
  printf("\nNome: %s\n", p_pessoa[i].nome);
  printf("Idade: %d\n", p_pessoa[i].idade);
  printf("Estado: %s\n", p_pessoa[i].endereco.estado);
  printf("Cidade: %s\n", p_pessoa[i].endereco.cidade);
  printf("Barrio: %s\n", p_pessoa[i].endereco.barrio);
  printf("Rua: %s\n", p_pessoa[i].endereco.rua);
  printf("Numero da casa: %d\n", p_pessoa[i].endereco.numCasa);
}