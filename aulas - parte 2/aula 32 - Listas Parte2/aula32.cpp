#include <iostream>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{
    list <int> aula, teste;
    int tam;
    list <int>::iterator it;

    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);

   


    tam = 10;
    for(int i =0; i <tam; i++){
        aula.push_front(i);
    }

    //Definindo a posicao do iterator
    it = aula.begin();
    advance(it, 3);
    aula.insert(it, 0); //Inserindo o valor 0 na posicao 3

    aula.erase(--it); //Vamos apagar o numero zero(0) na posicao 3 utilizando o comando INSERT anterior. E se faz necessario decrementar o iterator

    //aula.clear(); //Retira todos os elementos de uma vez só da lista


    aula.merge(teste);  //Adicionando os elementos da lista teste com a lista aula, onde a lista teste ficara vazia


    cout << "Tamanho da lista: " << aula.size() << "\n\n";

    tam=aula.size(); //Retirar elementos de uma lista uma por uma.
    for(int i = 0; i < tam; i++){
        cout << aula.front() << "\n";
        aula.pop_front();
    }

    return 0;
}
