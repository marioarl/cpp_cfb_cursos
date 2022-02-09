#include <iostream>
#include <fstream> //Importando a biblioteca fstream

using namespace std;

int main(int argc, char const *argv[])
{
    /*
    Definir o arquivo
    3 tipos

    ofstream ==> Define como tipo de SAIDA, a informacao vai sair do PROGRAMA e entrar no ARQUIVO
    ifstream ==> Define como tipo de ENTRADA, a informacao vai sair do ARQUIVO e entra no PROGRAMA
    fstream  ==> Define como tipo ENTRADA ou SAIDA.  
    */
    
    ofstream arquivo; //variavel do arquivo
    
    //Criar o arquivo externo
    arquivo.open("cfbcursos.txt", ios::app); //(Nome do arquivo.txt) --> o ios::app posiciona o cursor no final do arquivo e insere o conteudo na sequencia, sem esse parametro, cada vez que for executado o comando de armazenar, irá sobrescrever a informacao

    //Armazenando informacoes no arquivo cfbcursos.txt
    arquivo << "CFB Cursos\n"; //Importante colocar o comando \n para pular linha
    arquivo << "Curso de C++\n";
    arquivo << "cfbcursos.com.br\n";
    arquivo << "youtube.com/cfbcursos\n";

    //E quando acabar de utilizar o arquivo devemos fecha-lo
    arquivo.close();



    return 0;
}