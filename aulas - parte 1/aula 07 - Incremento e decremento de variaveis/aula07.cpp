#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n1= 10;


    cout << "Variavel n1 sem incremento: "<< n1 <<"\n\n";


    //Utilizando operacoes matematicas em uma variavel

    n1 = n1 + 5; // Forma padrao de incrementar ou decrementar(-) 5 na variavel n1, pode-se tambem utilizar as outras operacoes matematicas * / ou %
    cout << "Variavel n1 após o incremento: " << n1 << "\n\n";

    //Forma simlificada de incremento ou decremento(-) 5 na variavel n1, pode-se tambem utilizar as outras operacoes matematicas * / ou %
    n1 += 5;
    cout << n1 << "\n\n";

    //Forma mais contraida de adicionar ou subtrair (n1--;) 1 em uma variavel
    n1++;

    
    //Pos incremento e Pre incremento
    n1++; //Pós incremento , ou Pós fixado (primeiro a linguagem C usa o valor da variavel e depois faz o incremento)
    ++n1; //Pre incremento, ou Pré fixado (primeiro a linguagem C faz o incremento e depois usa a variavel)



    return 0;
}
