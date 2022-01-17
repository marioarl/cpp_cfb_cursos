#include <iostream>

using namespace std;

void contador(int num);
void contador2(int num2, int cont = 0);

int main(int argc, char const *argv[])
{
    contador(11);
    printf("\n\n");
    contador2(11);

    return 0;
}


//Funcao para escrever numeros na tela sem recursividade
void contador(int num){
        for(int i=0; i <= num; i++){
            cout << i <<"\n";
    }
}


//Funcao para escrever numeros na tela COM resursividade
void contador2(int num2, int cont){
        cout << cont << "\n";
        if(num2 > cont){
            contador2(num2, ++cont);//Recursividade
        }
}


