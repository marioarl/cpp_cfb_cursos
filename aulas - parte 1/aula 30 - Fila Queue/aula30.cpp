#include <iostream>
#include <queue> //Inserindo a biblioteca FILA

using namespace std;

/*
QUEUE (FILA)- O 1o. elemento a ser inserido é o PRIMEIRO elemento a ser removido ou trabalhado.
Diferente do STACK(PILHA)onde o 1o. elemento a ser inserido é o ULTIMO elemento a ser removido ou trabalhado.


ENTRADA **
         *       
         *  
         V
    __      __
      |  7  |
      |  6  |
      |  5  |
      |  4  |
      |  3  |
      |  2  |
    __|  1  |__
         
         *
         *
         *******> SAIDA 

Metodos principais de QUEUE
empty
size
front
back
push
pop

*/

int main(int argc, char const *argv[])
{
    queue <string> cartas; //Criando a fila  

    //Inserir elementos dentro da QUEUE
    cartas.push("Rei de Copas"); 
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout <<"Tamanho da fila: " << cartas.size() <<"\n"; 

    cout <<"Primeira carta: " << cartas.front() <<"\n"; //Primeiro elemento do QUEUE
    cout <<"Ultima carta: " << cartas.back() <<"\n\n"; //Ultimo elemento do QUEUE

    while (!cartas.empty()) //Retirando todas as cartas do QUEUE
    {
        cout << "Primeira carta: " << cartas.front() << "\n";
        cartas.pop();
    }

    cout << "Tamanho da fila: " << cartas.size() << "\n";
    




    return 0;
}