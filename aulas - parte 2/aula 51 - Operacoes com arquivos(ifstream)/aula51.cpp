#include <iostream>
#include <fstream> 

using namespace std;

int main(int argc, char const *argv[])
{
    //LER UM CONTEUDO DO ARQUIVO

    /*
    ofstream arquivoS;
    
    arquivoS.open("cfbcursos.txt", ios::app); 

    arquivoS << "CFB Cursos\n"; 
    arquivoS << "Curso de C++\n";
    arquivoS << "cfbcursos.com.br\n";
    arquivoS << "youtube.com/cfbcursos\n";

    arquivoS.close();
    */

    ifstream arquivoE;

    //Ler o arquivo
    string linha; //Armazenar a linha lida do aqruivo na variavel linha
    arquivoE.open("cfbcursos.txt");

    //Verificar se o arquivo foi aberto
    if(arquivoE.is_open()){
        while(getline(arquivoE, linha)){ //getline parametros : o arquivo que será lido , a variavel que sera armazenada a linha lida
            cout << linha << endl;
        }
        arquivoE.close(); //NAO ESQUECER DE FECHAR O ARQUIVO
    }else{
        cout << "Nao foi possivel abrir o arquivo" << endl; //Se o arquivo nao existir 
    }

    return 0;
}
