#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct Pessoa{
    string nome;
    int idade;
};

class Veiculo{
    //Com essa nova tecnica, não precisamos determinar o construtor
    public:
    int tipo;
    string nome;
};

int main(int argc, char const *argv[])
{
    /*
    Inicializacao uniforme (Especificacao C++ 11)
    Cria uma padronizacao na inicializacao facilitando o programa.
    Classes, por exemplo, nao é necessario definir um construtor para inicializar parametros, conseguimos passar valores para os parametros, diretamente com a tecninca de inicializacao uniforme.
    Exemplo:
    int num = 10; ==> int num{10};
    */

    int vetor[]{1,2,3,4,5,6,7,8,9};
    int num{10};
    string nome{"Bruno"};
    vector<int>valores{1,2,3,4,5};
    map<string,string>capitais{{"MG", "Belo Horizonte"}, {"SP", "Sao Paulo"}};
    
    Pessoa p1{"Bruno", 38};
    Pessoa p2{"Mario", 47};

    Veiculo v1{1,"Audi"};
    Veiculo v2{2, "Rolls Royce"};

    cout << "Vetor posicao 3: " << vetor[3] << endl;

    cout << "Variavel num: " << num << endl;
    cout << "Variavel nome: "<< nome << endl;
    
    cout << "Imprimindo o VECTOR valores" <<endl;
    for(vector<int>::iterator it=valores.begin();it !=valores.end(); it++){
        cout << *it << endl;
    }

    cout << "Imprimindo o MAP capitais" <<endl;
    for(map<string,string>::iterator it=capitais.begin();it!=capitais.end(); it++){
        cout << it-> first << " - "<< it-> second <<endl;
    }
    
    cout << "Struct Pessoa p1 nome: " << p1.nome << " - Idade: " << p1.idade << endl;
    cout << "Struct Pessoa p2 nome: " << p2.nome << " - Idade: " << p2.idade << endl;
    
    cout << "Classe veiculo v1 tipo: " << v1.tipo << " - Nome: " << v1.nome << endl;
    cout << "Classe veiculo v2 tipo: " << v2.tipo << " - Nome: " << v2.nome << endl;
    return 0;
}







