#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int cont;
    
    cont=10;
    do { //DO WHILE primeiro será executado o bloco de comando.....
        cout << "Canal Fessor Bruno - " << cont << "\n";
        cont++;
    }while(cont < 20); //.....e no final testa se a condicao é satisfeita ou nao.

    cout << "\nRotina Finalizada\n";

    return 0;
}
