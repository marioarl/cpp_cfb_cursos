#include <iostream>

using namespace std;

//Criando uma constante global
#define pi 3.1415

#define canal cout << "Canal Fessor Bruno"; //Associar comando atraves do define

int main(int argc, char const *argv[])
{
    int vidas = 3, tiros = 500, life = 100; //Declaracoes multiplas de variaveis com inicializacao
    
    cout << pi <<"\n\n"; //Imprimindo a constante pi

    canal //chamando o define canal onde está associando o comando cout. Nao colocar no final ";" para chamar o define.



    return 0;
}
