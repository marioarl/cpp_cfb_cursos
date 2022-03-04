#include <iostream>
#include <vector>
#include <algorithm> //Para utilizar o FOR_EACH

using namespace std;

/*
FOR_EACH é como uma função que recebe 3 parametros:
1) Posicao inicial do container
2) Posicao final do container
3) Função que vai operar esses elementos, criando uma funcao lambda

*/


int main(int argc, char const *argv[])
{
    vector<int>n{0,1,2,3,4,5,6,7,8,9};


    //Formas tradicionais de percorrer o VECTOR utilizando o FOR
    
    //Utilizando o FOR com iterator
    vector<int>::iterator it;
    for(it=n.begin(); it != n.end(); it++){
        cout << *it << endl;
    }

    //Utilizando o FOR com base em intervalo
    for(auto it2:n){
        cout << it2 << endl;
    }

    //Utilizando o FOR_EACH para percorrer o vector 
    for_each(n.begin(), n.end(), [](int num){ //Passando os 3 parametros, onde o 3o. parametro é a funcao LAMBDA
        cout << num << endl;
    });


    return 0;
}
