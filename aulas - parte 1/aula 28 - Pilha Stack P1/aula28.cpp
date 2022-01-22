#include <iostream>
#include <stack> //Biblioteca para usar o STACK

using namespace std;

/*
STACK - É uma estrutura de armazenamento de dados, como se fosse um vetor, só que tem controles especificos.

O 1o. elemento a ser inserido, é o ultimo elemento a ser removido ou trabalhado

ENTRADA **   ***>SAIDA
         *   *    
         *   *
         V   *
      __      __
        |  7  |
        |  6  |
        |  5  |
        |  4  |
        |  3  |
        |  2  |
        |__1__|

*/

int main(int argc, char const *argv[])
{
    //Criar a pilha
    stack <string> cartas; // Modelo STACK seguido entre <> do tipo e o nome do STACK


    //Incluir itens na pilha 
    cartas.push("Rei de Copas"); 
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout <<"Tamanho da pilha: " << cartas.size() <<"\n"; //Saida : Tamanho 4

    cout << "Carta do topo: " << cartas.top() << "\n"; //Informa qual o elemento que está no topo

    //Retirar elementos da pilha
    cartas.pop(); //Retira o elemento do topo - Rei de Paus
    cout <<"Nova carta do topo: " << cartas.top() <<"\n"; 




    return 0;
}
