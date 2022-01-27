#include <iostream>

using namespace std;


/*
Manipular Arrays atraves de ponteiros

*/

int main(int argc, char const *argv[])
{
    int *p;
    int vetor[10];

    p = &vetor[0]; 
 
    //Atribuindo valor aos ponteiros
    *p=10;
    cout << "\n" << vetor[0] << "\n";

    *(p++); //Atribuindo valor no proximo indice [1] do ARRAY
    *p=20;
    cout << "\n" << vetor[1] << "\n";

    *(p++); //Atribuindo valor no proximo indice[2] do ARRAY
    *p=30;
    cout << "\n" << vetor[2] << "\n";

    return 0;
}
