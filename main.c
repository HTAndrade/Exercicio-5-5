#include<stdio.h>
#include<math.h>

/*
5 - Escreva um programa que le um valor em reais e calcula qual o menor numero 
    possivel de notas de $100, $50, $20, $10, $5, $2 e $1 em que o valor lido pode 
    ser decomposto. Escrever o valor lido e a relacao de notas necessarias.
*/

int main()
{
    int valorreais, nota200, nota100, nota50, nota20, nota10, nota5, nota2, nota1, aux;
    printf("Digite o valor em Reais: ");
    scanf("%d",&valorreais);
    
    nota200 = valorreais / 200;
    aux = valorreais % 200;
    nota100 = aux / 100;
    aux = aux % 100;
    nota50 = aux / 50;
    aux = aux % 50;
    nota20 = aux / 20;
    aux = aux % 20;
    nota10 = aux / 10;
    aux = aux % 10;
    nota5 = aux / 5;
    aux = aux % 5;
    nota2 = aux / 2;
    aux = aux % 2;
    nota1 = aux % 10; 
    
    printf("NOTAS DE 200 = %d\n",nota200);
    printf("NOTAS DE 100 = %d\n",nota100);
    printf("NOTAS DE 50 = %d\n",nota50);
    printf("NOTAS DE 20 = %d\n",nota20);
    printf("NOTAS DE 10 = %d\n",nota10);
    printf("NOTAS DE 5 = %d\n",nota5);
    printf("NOTAS DE 2 = %d\n",nota2);
    printf("NOTAS DE 1 = %d\n",nota1);

    printf("Quantidade de notas = %d", nota200 + nota100 + nota50 + nota20 + nota10 + nota5 + nota2 + nota1);
    
    return 0;
}