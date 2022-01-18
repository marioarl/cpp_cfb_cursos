#include <iostream>

using namespace std;

/*
Faça um programa que leia uma sequancia Fibonacci, a qual o usuario escolha a quantidade de valores
*/
int fibonacci (int n);


int main(int argc, char const *argv[])
{
    int val;
    cout << "\n========== SEQUENCIA FIBONACCI ==========\n";
    cout << "\nDigite a quantidade de valores da sequencia: ";
    cin >> val;

    for(int i=0; i < val; i++){
        cout << fibonacci(i+1) << " ";
    }
    
    return 0;
}

int fibonacci (int n){
    if(n ==1 || n ==2){
        return 1;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}


