#include <iostream>

using namespace std;

//Em um projeto apenas 1 arquivo deverá ter o main()

extern int num; //Utilizando a variavel que está em main.cpp com o extern

int valor = 10; //Declarando uma variavel para utilizar no main.cpp

void impNum(){
    cout << num << endl;
}