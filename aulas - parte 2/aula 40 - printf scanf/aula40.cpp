#include <iostream>
#include <stdio.h> //Para utilizar os comandos prontf e scanf

using namespace std;

/*
int             %d
Hexadecimal     %x ou %X
unsigned int    %u
char            %c
float           %f
*/

int main(int argc, char const *argv[])
{
    int num1 = 1,num2 = 2,num3 = 3, num4 =4;
    char nome[10] = "Mario";


    printf("\nCanal Fessor\0 Bruno\nCurso de C++"); //O \0 significa que acabou a leitura do printf
    
    printf("\nValor das variaveis num1: %d num2: %d num3: %d\n", num1,num2,num3); //Lendo as variaveis no comando printf

    printf("\nValor da variavel num1: %d\nNome: %s", num1, nome);

    //Ler pelo teclado com scanf
    scanf("%d", &num4);
    printf("\nValor da variavel num4: %d", num4);



    return 0;
}
