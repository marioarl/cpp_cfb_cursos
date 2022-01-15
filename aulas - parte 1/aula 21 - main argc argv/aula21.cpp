#include <iostream>
#include <string.h> //Adicionando a biblioteca ara utilizar a funcao strcmp que compara duas string
#include <stdlib.h> //Para o system 'pause' funcionar

using namespace std;

/*
Passagens de parametros da funcao main
Podemos passar valores na chamada do programa. QUando chamamos o programa no prompt do DOS, podemos enviar um valor e pode ser tratado dentro do programa atraves de 2 parametros basicos argc e argv.

argc ==> quantidade de parametros
argv ==> matriz que armazena argumentos digitados no prompt do DOS

Mesmo que nao seja informado nenhum parametro, por padrao é passado o nome do programa

*/


int main(int argc, char const *argv[])
{
    //Como tratar os parametros, fazendo o programa tomar uma decisao de acordo com o parametro informado
    if(argc > 1){ //Se for maior que 1, isto quer dizer que somente existe o nome do programa
        if(!strcmp(argv[1], "sol")){//Se as strings forem iguais o programa retorna 0(zero) se forem diferentes retona > 0(quando a 1a. string for maior que a 2a.) ou < 0(quando a 2a. string for maior que a 1a.)
            cout << "Vou ao clube.\n\n";
        }else if(!strcmp(argv[1], "nublado")){
            cout << "Vou ao cinema.\n\n";
        }else {
            cout << "Vou ficar em casa.\n\n";
        }
    } 
    
    system("pause");
    return 0;
}