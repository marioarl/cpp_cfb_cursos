#include <iostream>

using namespace std;
void soma(int n1, int n2);
void soma();

int main(int argc, char const *argv[])
{
    soma(20,30);
    soma();



    return 0;
}

void soma(int n1, int n2){ //Podemos ter 2 ou mais funcoes com nomes iguais, desde que tenham argumentos de entrada diferentes
    int re;
    re = n1 + n2;
    cout << "\nSoma de (arg)" << n1 << " com " << n2 << " = " << re << "\n";


}




void soma(){
    int n1, n2, re;
    n1 = 10;
    n2 = 20;
    re = n1 + n2;
    cout << "\nSoma de " << n1 << " com " << n2 << " = " << re << "\n";
}
