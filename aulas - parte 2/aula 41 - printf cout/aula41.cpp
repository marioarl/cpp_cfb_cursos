#include <iostream>
#include <stdio.h>
#include <math.h>//Para utilizar os comandos de Math M_PI
#include <iomanip> //para utilizar os comandos setbase() e cout.precision


using namespace std;

int main(int argc, char const *argv[])
{
    float pi = M_PI;
    int num = 5, num2 = 15;

    
    //printf
    printf("\nValor de pi: %.2f", pi);
    printf("\nValor de num: %07d", num); //Comletar com 0 na esquerda, onde: 0 é o valor a ser impresso antes do numero e 7 é a quantidade de casas, contando com o valor

    //cout
    cout << "\nValor de num2 em decimal: " << num2 << endl; //endl pula uma linha ou pode ser "\n"
    cout << "\nValor de num2 em hexadecimal: " << hex << num << endl; //Convrter de decimal para hexadecimal
    cout << "\nValor de num2 em octal: " << oct << num << endl; //Convrter de decimal para Octal

    //Utilizando a biblioteca <iomanip> para converter bases
    cout << "\nValor de num2 em hexadecimal: " << setbase(16) << num << endl; //Convrter de decimal para hexadecimal
    cout << "\nValor de num2 em octal: " << setbase(8) << num << endl; //Convrter de decimal para Octal

    //Configurando a precisao do cout
    cout.precision(8); //Quantidade de casas contando com o numero depois do ponto
    cout << "Valor de PI: " << pi << "\n";

    //Imprimir com notacao cientifica
    cout << "Valor de PI: " << std::scientific << pi << "\n";

    //largura do campo num
    cout << "\nValor da variavel num:" << setw(10) << num << endl;

    cout << "\nValor da variavel num:" << setw(10) << setfill('.') << num << endl; //Preencher com um caractere antes do numero
    
    return 0;
}
