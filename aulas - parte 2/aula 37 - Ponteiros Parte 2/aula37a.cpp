#include <iostream>

using namespace std;


/*
Manipular Arrays atraves de ponteiros

*/

int main(int argc, char const *argv[])
{
    int *p;
    int vetor[10];

    p = &vetor[0]; // Atribuindo o ponteiro p ao endereco de memoria do 1o. elemento [0] do ARRAY (vetor) ou p=vetor;
    cout << "\n" << p << "\n"; //Saida indice [0] 0x61fee4

    //O proximo indice ficara no endereco de memoria posterior ao indice [0]
    p = &vetor[1];
    cout << "\n" << p << "\n"; //Saida indice [1] 0x61fee8 -- Mas porque nao ficou no proximo endereco de memoria? Porque estamos trabalhando com um array do tipo INT que ocupa 4 bytes
    
    p = &vetor[2]; //Ou pode-se utlizar o incremento do ponteiro *(p +=1); ou *(p++);
    cout << "\n" << p << "\n";//Saida indice [2] 0x61feec (lembrando que estes numeros de memoria sao em HEXADECIMAL)

      return 0;
}
