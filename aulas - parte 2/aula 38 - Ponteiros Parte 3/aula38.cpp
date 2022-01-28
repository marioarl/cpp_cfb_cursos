#include <iostream>

using namespace std;

void somar(float *var, float valor);
void iniVetor(float *v);

int main(int argc, char const *argv[])
{
    float num = 0;
    float vetor[5];

    somar(&num, 15);
    iniVetor(vetor);//Quando utilizamos Array, nao é necessario utilizar o & para o endereco

    cout << num << "\n\n";

    for(int i = 0; i< 5; i++){
        cout << vetor[i] << "\n";
    }
    
    return 0;
}

//Funcao para somar valores na variavel num
void somar(float *var, float valor){ //Parametro var ==> é a variavel que queremos somar ... valor ==> contem o valor a somar 
    *var += valor;
}

void iniVetor(float *v){
    v[0] = 5; //Nao é necessario colocar o * ponteiro em cada endereco, pois estamos trabalhando com Array
    v[1] = 10;
    v[2] = 15;
    v[3] = 20;
    v[4] = 25;



}
//Como estao em escopos diferentes, a funcao nao consegue enchergar a variavel do programa princial, ou seja, a funcao somar() nao consegue ver o endereco de memoria da variavel num do nosso programa principal, se nao utilizarmos o ponteiro.



