#include <iostream>

using namespace std;

//EXTERN - Permite acessar uma variavel que está em um arquivo externo dentro de um projeto.

void impNum();//Prototipando uma funcao que esta no arquivo auxiliar.cpp

int num{10}; //Variavel declarada igual 10

extern int valor;

int main(int argc, char const *argv[])
{
    impNum();
    cout << valor << endl;
    return 0;
    
    return 0;
}
