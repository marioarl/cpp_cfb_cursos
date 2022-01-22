#include <iostream>
#include <list> 

using namespace std;

/*
CONTINUACAO 

Inserir itens em qualquer lugar diferente dos comandos front e back com o comando INSERT
*/


int main(int argc, char const *argv[])
{
    int tam;
    list <int> aula;
    list <int>:: iterator it;

    
    tam = 10;
    for(int i = 0; i < tam ;i++ ){
        aula.push_front(i);
    }

    //Controlar a posicao atraves do iterator para usar o comando INSERT

    it = aula.begin();
    advance(it,5); //Colocar o elemento na posicao 5

    aula.insert(it, 0); //Inserindo o numero 5 na posicao 0


    cout << "Tamanho da lista: " << aula.size() << "\n\n";

    tam = aula.size();
    for(int i = 0; i < tam ;i++ ){
        cout << aula.front() << "\n";
        aula.pop_front();
    }



    return 0;
}

