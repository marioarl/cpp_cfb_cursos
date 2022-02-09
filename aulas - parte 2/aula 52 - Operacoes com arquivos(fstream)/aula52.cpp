#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
    //Criar o arquivo com fstream

    fstream arquivo;

    //Criar o arquivo em modo de saida
    char opc = 's';
    string nome, linha;

    arquivo.open("cfbcursos.txt", ios::out|ios::app); //Especificando o modo do arquivo, neste caso de saida, está indo do programa para o arquivo e o ios::app é para especificar que serao acrescentados itens no arquivo(append)

    while((opc == 's')or (opc=='S')){
        cout << "Digite um nome: ";
        cin >> nome;
        arquivo << nome << "\n"; 
        cout << "\nDigitar um novo nome?[s/n]";
        cin >> opc;
        system("cls");
    }
    arquivo.close();


    //Ler o arquivo com fstream
    arquivo.open("cfbcursos.txt", ios::in); //Especificando o modo do arquivo como entrada

    cout << "Nomes digitados" << endl;

    if(arquivo.is_open()){
        while(getline(arquivo,linha)){
            cout << linha << endl;
        }
        arquivo.close();
    }else{
        cout << "Nao foi possivel abrir o arquivo" << endl;
    }

    return 0;
}
