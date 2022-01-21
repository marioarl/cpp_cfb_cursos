#include <iostream>
#include <stack>

using namespace std;

/*
RESUMO DOS METODOS
push()  ==> Incluir itens na pilha
pop()   ==> Excluir elementos da pilha 
top()   ==> Informa qual elemento está no topo
size()  ==> Tamanho da pilha
empty() ==> Retorna verdadeiro ou falso caso a pilha esteja cheia(0) ou vazia(1)          

*/

int main(int argc, char const *argv[])
{
    stack <string> cartas;

    //Metodo empty
    if(cartas.empty()){
        cout << "Pilha vazia\n\n";
    }else {
        cout << "Pilha com cartas\n\n";
    }

    //Sem utilizar o metodo empty (size)
    if(cartas.size() == 0){
        cout << "Pilha vazia\n\n";
    }else {
        cout << "Pilha com cartas\n\n";
    }


    cartas.push("Rei de Copas"); 
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");


    //Criar uma rotina para excluir todos os elementos da pilha

    while (!cartas.empty())
    {
        cartas.pop();
    }
    
    cout <<"Tamanho da pilha: " << cartas.size() <<"\n";

    cout << "Carta do topo: " << cartas.top() << "\n"; 

    cartas.pop(); 
    cout <<"Nova carta do topo: " << cartas.top() <<"\n"; 

    
    
    return 0;
}
