#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Escreva um programa que declare um inteiro, um real e um char, e ponteiros para in-
teiro, real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de  ́

cada variavel usando os ponteiros. Imprima os valores das vari  ́ aveis antes e ap  ́ os a  ́
modificac ̧ao.  ̃
*/


int main()
{
    int num1 = 10, *p_num;
    p_num = &num1;
    
    printf("\nValor num1: %d", num1);
    *p_num = 50;
    printf("\nO valor modificadom por ponteiro: %d", *p_num);
    
    char nome[] = {"Eduardo"}, *p_nome;
    p_nome = &nome;

    printf("\nValor de nome: %s", nome);
    p_nome = "Souza";
    printf("\nNovo valor de nome: %s", p_nome);

    float media = 5.5, *p_media;
    p_media = &media;
    printf("\nValor de  media: %f", media);
    *p_media = 10.8;
    printf("\nNovo valor de media: %f", *p_media);
    
}