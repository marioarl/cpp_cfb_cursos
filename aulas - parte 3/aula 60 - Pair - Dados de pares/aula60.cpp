#include <iostream>
#include <utility> //Para utilizar o pair
#include <vector>

using namespace std;

/*
pair < tipo, tipo> nome;


*/

int main(int argc, char const *argv[])
{
    pair <int, string> par; //Declarando a variavel pair - Pode-se inicializar a variavel nesta linha par(100, "CFB Cursos") 
    par.first = 100;
    par.second = "CFB Cursos";

    cout << par.first << " - " << par.second << endl; //Imprimindo a variavel par (par.first ==> primeiro valor, par.second ==> segundo valor)


    //Criando em forma de vetor
    const int tam = 3;
    pair <int, string> par2[tam];

    //Inserindo valores na variavel
    par2[0].first=102;
    par2[0].second="CFB Cursos2";

    par2[1].first=200;
    par2[1].second="Mario";

    par2[2].first=300;
    par2[2].second="Curso C++";

    //Imprimindo a variavel
    cout << par2[0].first << " - " << par2[0].second << endl;
    cout << par2[1].first << " - " << par2[1].second << endl;
    cout << par2[2].first << " - " << par2[2].second << endl;


    //Criando um pair mais facil, utilizando o MAKEPAIR
    pair <int, string> par3[tam];

    par3[0] = make_pair(103, "CFB Cursos3");
    par3[1] = make_pair(203, "Mario3");
    par3[2] = make_pair(303, "Curso C++3");

    //Imprimindo os valores
    for(int i = 0; i < tam ; i++){
        cout << par3[i].first << " - " << par3[i].second << endl;
    }


    //Utilizando o pair com mais de 2 dados
    pair<int,pair <string,double>> par4[tam]; //Colocando outro pair dentro do pair

    //Inserindo valores
    par4[0] = make_pair(10, make_pair("Mouse", 10.55));
    par4[1] = make_pair(20, make_pair("Teclado", 50.49));
    par4[2] = make_pair(30, make_pair("Monitor", 399.98));

    //Imprimindo os valores
    for(int i = 0; i < tam ; i++){
        cout << par4[i].first << " - " << par4[i].second.first << " - " << par4[i].second.second <<   endl;
    }


    //Utilizando VECTOR com pair
    vector <pair <int,string>> prod;

    prod.push_back(make_pair(10,"Mouse"));
    prod.push_back(make_pair(20,"Teclado"));
    prod.push_back(make_pair(30,"Monitor"));

    //Imprimindo os valores
    for(int i = 0; i < prod.size() ; i++){
        cout << prod[i].first << " - " << prod[i].second << endl;
    }

    //Imprimindo os valores utilizando FOR com base em intervalo
    for(auto i:prod){
        cout << i.first << " - " << i.second << endl;
    }


    
    return 0;
}
