#include <iostream>
#include <vector> //Incluir a biblioteca para utilizar Vector

using namespace std;



int main(int argc, char const *argv[])
{
    vector<int> num1; //Declarando um Vector, nao precisa especificar o tamanho
    int tam1, tam2, i;

    //Insere um elemento no final de um Vector
    num1.push_back(1);
    num1.push_back(2);
    num1.push_back(3);
    num1.push_back(4);
    
    //Inserir no inicio do vector num1
    num1.insert(num1.begin(), 888);

    //Inserir na terceira posicao do vector num1
    num1.insert(num1.begin() + 2, 999);

    //Inserir no final do vector num1
    num1.insert(num1.end(), 111);

    //Inserir na penultima posicao do vector num1
    num1.insert(num1.end() - 1, 222);

    //Remover a penultima posicao do vector num1
    num1.erase(num1.end() - 2);



    //Obter o tamanho do Vector e armazenando na variavel tam
    tam1=num1.size();

    cout << "Tamanho do vector: " << tam1 << "endl";

    //Imprimir os elementos do vector num1
    for(i = 0; i < tam1; i++){
        cout << num1[i] << " ";
    }

    vector<int> num2;
    num2.push_back(5);
    num2.push_back(6);
    num2.push_back(7);
    num2.push_back(8);

    tam2=num2.size();

    cout << endl;

    //Imprimir os elementos do vector num2
    for(i = 0; i < tam2; i++){
        cout << num2[i] << " ";
    }

    //Trocar os valores de num1 em num2 e de num2 em num1
    //num1.swap(num2);

    //Indica o 1o. valor do vector
    cout << "Primeiro valor de num1: " << num1.front() << endl;

    //Indica o ultimo valor do vector
    cout << "Ultimo valor de num1: " << num1.back() << endl;

    //Indicar um elemento do meio do vector
    cout << "Valor do meio.......: " << num1.at(tam1/2);

    //Retira os elementos do vector
    while(!num1.empty()){ //Enquanto nao estiver vazio
        num1.pop_back();
    }

    //Limpa os elementos de num2
    num2.clear();

    cout << "Novo tamanho de num1: " << num1.size();
    cout << "Novo tamanho de num2: " << num2.size();
    return 0;
}
