#include <iostream>

using namespace std;


/*
Faça um programa que calcule o fatorial de um numero escolhido pelo usuario.
*/

int fatorial(int n);

int main(int argc, char const *argv[])
{   
    int val;

    cout << "\n======== FATORIAL DE UM NUMERO ==========\n";

    cout << "\nDigite um numero: ";
    cin >> val;

    cout << "Fatorial de "<< val << " : "<< fatorial(val);
    
    return 0;
}

int fatorial(int n){
    if(n == 0){
        return 1;
    }
    return n * fatorial(n-1);
}