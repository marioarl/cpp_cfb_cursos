#include <iostream>
#include <vector>

using namespace std;


int main(int argc, char const *argv[])
{
    int x[10]{10,20,30,40,50,60,70,80,90,100};
    vector<int>n{1,2,3,4,5,6,7,8,9,10};

    const char* nome = "VERAO"; //declaracao de acordo com o c++ moderno --> string nome = "VERAO"


    //Para percorrer um vetor utilizamos o for abaixo:
    for(int i = 0; i < 10; i++){
        cout << x[i] << endl;
    }

    //Com o FOR RANGE DECLARATION com base em intervalo
    for(int i:x){ //Criar uma variavel com o mesmo tipo do vetor
        cout << i << endl;
    }


    //utilizando com o vector
    for(auto i:n){ //Criar uma variavel com o mesmo tipo do vetor
        cout << i << endl;
    }

    //Utilizando uma variavel que nao seja uma colecao, nao irá funcionar, deve ser utilizado o for tradicional
    /*
    for(auto i:nome){
        cout << i << endl;
    }
    */
   for(int i = 0; i <=sizeof(nome); i++){
        cout << nome[i] << endl;
    }

    
    
    


    return 0;
}
