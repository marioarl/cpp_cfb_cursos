#include <iostream>
#include <list> //Incluir a biblioteca lista

using namespace std;

int main(int argc, char const *argv[])
{
    int tam;
    list <int> aula; //Forma basica para declarar uma lista. 
    /*
    Declarar a lista com um tamanho definido ==> list <int> aula(50);
    Declarar a lista com um tamanho definido (5) e o tamanho destas 5 posicoes (50) ==> list <int> aula(5,50);
    Declarar varias listas na mesma linha do mesmo tipo ==> list <int> aula, teste, canal; 
    */
    
    tam = 10;
    for(int i = 0; i < tam ;i++ ){
        aula.push_front(i); //Inserir itens na lista na frente
    }

    cout << "Tamanho da lista: " << aula.size() << "\n\n";

    aula.reverse(); //Coloca a lista de tras para frente
    //aula.sort(); //Coloca a lista em ordem
    tam = aula.size();
    for(int i = 0; i < tam ;i++ ){
        cout << aula.front() << "\n"; //retorna o elemento que esta na frente
        aula.pop_front(); //retirar o elemento da frente
    }


    return 0;
}
