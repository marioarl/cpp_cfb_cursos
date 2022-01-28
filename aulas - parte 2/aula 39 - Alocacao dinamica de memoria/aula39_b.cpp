#include <iostream>
#include <stdio.h>
#include <stdlib.h> //Para utilizar a funcao malloc - locacao dinamica de memoria

using namespace std;


int main(int argc, char const *argv[])
{
    //Programa com alocação dinamica

    char *vnome; //Transformar a variavel em um ponteiro
    
    vnome = (char *)malloc(sizeof(char));
    /*
    1) Parametro malloc- tamanho dos blocos que ele vai reservar na memoria.
    2) A funcao malloc tem um retorno VOID, e temos que converter para um ponteiro do tipo CHAR.
    3) Para indicar o tamanho do bloco, usaremos a funcao SIZEOF, que a funcao MALLOC irá fazer a reserva dinamica dessa memoria.
    4) A diferença deste programa e o da aula39.cpp, é que este está reservando exatamente a quantidade digitada e o outro programa estava alocando 50 caracteres na memoria. 
    */

    gets(vnome);
    cout << vnome;

    

    return 0;
}
