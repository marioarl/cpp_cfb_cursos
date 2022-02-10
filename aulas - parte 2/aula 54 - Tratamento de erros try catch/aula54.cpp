#include <iostream>
#include <vector>
#include <stdexcept> //Para utilizar o bloco exception

using namespace std;
double divide(double nx, double ny);

int main(int argc, char const *argv[])
{
    double n1,n2;
    vector<int>num(5);

    //Criamos um vector com 5 posicoes e tentaremos incluir valores alem da posicao defenida que é 5

    try {
        //Inserir o codigo que é passivel de erro 
        num.at(6) = 10;
        cout << num[0] << endl;
    }catch(exception& e){ //O bloco catch precisa de um parametro que vai receber a excecao (e nome da variavel, pode ser qualquer nome)
        //tratamento do erro
        cout << "ERRO: " << e.what() << endl; //e.watch() irá retornar o erro na tela
    }

    //Utilizando a funcao divide()
    cin >> n1 >> n2;
    try {
        cout << divide(n1,n2);
    }catch(const char* msg){ 
        cout << "ERRO: " << msg << endl;
    }

    
    return 0;
}

//Há alguns momentos que precisamos gerar um erro. Exemplo, fazer uma funcao que divida 2 numeros
double divide(double nx, double ny){
    if(ny == 0){
        throw "Divisao por ZERO";
    }
    if(nx >=10){
        throw "n1 precisa ser menor que 10";
    }
    return nx/ny;
}
