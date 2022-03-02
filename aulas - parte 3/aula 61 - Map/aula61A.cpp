#include <iostream>
#include <map>

using namespace std;


int main(int argc, char const *argv[])
{
    map<int,string> prod;
    map<int,string>::iterator itmap;

    //Inserir elemento com o metodo INSERT
    prod.insert(pair<int, string>(0, "Mouse")); //O INSERT precisa de um PAIR
    prod.insert(pair<int, string>(1, "Teclado"));
    prod.insert(pair<int, string>(2, "Monitor"));
    prod.insert(pair<int, string>(3, "Cx. som"));
    prod.insert(pair<int, string>(4, "Microfone"));
    prod.insert(pair<int, string>(5, "Gabinete"));
    prod.insert(pair<int, string>(6, "Camera"));
    prod.insert(pair<int, string>(7, "Fonte"));


    //Procurar por uma chave dentro do MAP e retorna o elemento atraves do metdodo FIND
    itmap=prod.find(3);
    if(itmap == prod.end()){
        cout << "Produto nao encontrado" << endl;
    }else {
        cout << "Produto em estoque" << endl;
        cout << "Codigo:"<< itmap->first << " - Produto: " << itmap->second << endl;
    }

    //Apagando um elemento de acordo com a chave com o metodo ERASE
    prod.erase(7);

    //Apagar uma faixa de produtos , do 2 até antes do elemento 6
    prod.erase(prod.find(2), prod.find(6));

    //Apagar todos os elementos do MAP
    prod.clear();

    for(auto it:prod){
        cout << it.first << " - " << it.second << endl;
    }

    

    return 0;
}
