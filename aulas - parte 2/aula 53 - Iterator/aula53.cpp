#include <iostream>
#include <vector> //Biblioteca para trabalhar com ITERATOR

using namespace std;

/*
Basicamente ITERATOR serve para navegar dentro de uma colecao de dados, vai apontar para um determinado item dentro de uma colecao de dados. O container VECTOR, por exemplo, suportam as funcoes begin() que retorna o elemento inicial da colecao e end() que retorna o elemento final da colecao.

*/

int main(int argc, char const *argv[])
{
    vector <string>produtos={"mouse", "teclado", "monitor", "gabinete", "cx.som"};

    //Declarando o ITERATOR
    vector <string>::iterator it; //onde it é o nome do ITERATOR

    //begin() - Aponta para o primeiro produto
    it = produtos.begin();
    cout << *it << endl; //Deverá ser como um ponteiro

    //end() - Aponta para o ultimo produto, O end() aponta a quantidade de elementos, neste caso 5 elementos, mas no vector temos somente até o indice 4, entao deveremos colocar end() -1, para que aponta para o elemento correto
    it = produtos.end() -1;
    cout << *it << endl;

    //Navegar na estrutura vector

    //advance - Avanca um numero X de elementos dentro da colecao, onde os parametros sao: o iterator e o numero de casas que vamos avancar. Entao a partir do begin() estamos avancando 3 casas
    it = produtos.begin();
    cout << *it << endl;
    advance(it,3); //indice 3

    //next - Usa-se direto no cout << , no formato de ponteiro, onde temos que indicar o iterator e o numero de elementos que vamos avancar(para a direita)
    cout << *next(it,3) << endl; //indice 3

    //prev - Usa-se direto no cout << , no formato de ponteiro, onde temos que indicar o iterator e o numero de elementos que vamos retroceder(para a esquerda). Entao a partir do end() retrocedemos 3 casas.
    it = produtos.end(); 
    cout << *next(it,3) << endl; //Neste caso nao seria o indice, mas o elemento


    //IMprimir todos os elementos do Vector produtos
    for(it =produtos.begin(); it!= produtos.end(); it++) //o ITERATOR pode ser declarado dentro do FOR ==> for(vector <string>::iterator it = produtos.begin()....)
        cout << *it << endl;

    return 0;
}


