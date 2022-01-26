#include <iostream>

using namespace std;

/*
O valor que o Ponteiro vai armazenar é o endereço de uma outra variavel. O ponteiro nao armazena um valor comum como uma variavel, ele armazena o endereço de outra variavel, para uma variavel que ele esta apontando.

ENDERECO        TIPO        VALOR       NOME
1000            int           4          num
1001
1002
1003

int *pn; ==> O operador * vai dizer que a variavel pn é um PONTEIRO

O ponteiro tem que ser do mesmo tipo da variavel que ele aponta


pn = &num; ==> Relacionando a variavel num ao ponteiro PN


*/


int main(int argc, char const *argv[])
{
    string veiculo = "Carro";

    string *pv; //Criando um ponteiro.
    pv = &veiculo; //pv recebe o endereco da variavel veiculo

    cout << pv; //Irá imprimir o endereco de memoria RAM do ponteiro pv
    cout << &veiculo; //Irá imprimir o endereco de memoria RAM da variavel veiculo, que deverá ser o mesmo do ponteiro pv

    //Manipular o valor da variavel veiculo atraves do ponteiro
    *pv = "Moto";

    cout << veiculo; 
    
    return 0;
}
