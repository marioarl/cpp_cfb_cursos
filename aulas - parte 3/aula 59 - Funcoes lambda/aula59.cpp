#include <iostream>
#include <vector>

using namespace std;

/*
Nao precisa definir nome para a funcao lambda
Estrutura funcao lambda

[captura de variaves]
(parametros) -> tipo de retorno
{
    corpo da funcao
}
*/

int main(int argc, char const *argv[])
{
    //Funcao lambda, obrigatoriamante começou com colchetes é uma funcao lambda
    auto maior = [](int n1,int n2) ->int { 
        return (n1>n2) ?n1:n2;
    }; 
    cout << maior(2,6) << endl;

    //Lista de valores na funcao lambda
    auto maior2 = [](vector<int>n) ->int { 
        auto m=0;
        for(int x:n){
            m=(m>x) ? m:x;
        }
        return m;
    }; 
    cout << maior2({9,8,45,23,12,456,34}) << endl;

    //Captura de variaveis - soma de variaveis
    int x1,x2,x3,x4;
    x1=10;
    x2=5;
    x3=2;
    x4=12;
    auto soma=[x1,x2,x3,x4]()->int{
        return x1+x2+x3+x4;
    };
    cout << soma() << endl;    

    //Forma mais facil de fazer esta funcao, quando quisermos utilizar todas as variaveis do escopo com o sinal de =
    int y1,y2,y3,y4;
    y1=10;
    y2=5;
    y3=2;
    y4=12;
    auto soma2=[=]()->int{ //Sinal de igual dentro da captura de variaveis
        return y1+y2+y3+y4;
    };
    cout << soma2() << endl;   





    return 0;
}
