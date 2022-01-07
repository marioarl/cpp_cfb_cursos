#include <iostream>

using namespace std;
//Se declarar uma variavel fora de uma funcao, ela poderá ser utilizada no programa inteiro (Escopo global)

int n1,n2;//VARIAVEIS GLOBAIS

int main(int argc, char const *argv[])
{
    //Se declarar uma variavel dentro de uma funcao, ela só será valida dentro da funcao (Escopo local)

    int n3,n4;//VARIAVEIS LOCAIS

    /*Operadores matematicos: + - / * % (operador mod % que dá o resto da divisao)

    */
   int res1, res2;
   n1 = 11;
   n2 = 3;
   n3 = 5;
   n4 = 2;

   res1 = n1/n2;
   res2 = n1%n2;
   cout << "O resultado da divisao é:" << res1 <<"\n\n";
   cout << "Sobra da divisao: " << res2 <<"\n\n";

    return 0;
}
