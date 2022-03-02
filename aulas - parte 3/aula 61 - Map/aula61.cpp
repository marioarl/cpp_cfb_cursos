#include <iostream>
#include <map>

using namespace std;

/*
MAP = É um container de associacao chave valor 
map<chave,valor>nome;

MAP associa o 2o. elemento ao 1o. elemento. O 1o. elemento é a chave e o 20. elemento é o valor.

Mateodo ERASE - apagar um determinado elemento pela chave
Metodo FIND - Pesquisar um elemento atraves da chave
*/


int main(int argc, char const *argv[])
{
    map<int,string> prod;

    //Inserir elemento neste container
    prod[0] = "Mouse"; //A chave 0 recebera a string Mouse
    prod[1] = "Teclado";
    prod[2] = "Monitor";
    prod[3] = "Caixa de som";


    //Utilizando o FOR TRADICIONAL para imprimir
    for(int i=0; i < 4; i++){
        cout << prod[i] << endl;
    }

    //Utilizando o FOR com ITERATOR para imprimir somente a chave
    for(auto it=prod.begin(); it!=prod.end(); it++){
        cout << it->first << endl;
    }

    //Utilizando o FOR com ITERATOR para imprimir somente a valor
    for(auto it=prod.begin(); it!=prod.end(); it++){
        cout << it->second << endl;
    }

    //Utilizando o FOR COM BASE EM INTERVALO para imprimir as chaves
    for(auto it:prod){
        cout << it.first << endl;
    }

    //Utilizando o FOR COM BASE EM INTERVALO para imprimir as valor
    for(auto it:prod){
        cout << it.second << endl;
    }



    return 0;
}
