#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Declarar um VETOR ==> TIPO NOME [TAMANHO]; 

    int vetor[5]; //Cria uma variavel com 5 posicoes. Cada posicao pode receber um valor
    int i;

    vetor[0] = 10; // Indicando o nome do ARRAY[POSICAO] = VALOR;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;

    cout << vetor[0] << "\n";

    //Se colocarmos uma posicao de vetor que nao está dentro do tamanho que declaramos, a Linguagem C mostrará um valor de "LIXO", pegou o valor da proxima memoria, sendo nao válido para nosso programa.
    cout << vetor[5] << "\n"; 

    //*** UTILIZANDO O COMANDO FOR PARA LER ARRAYS ***
    for(i=0 ; i<5; i++){
        cout << vetor[i] << "\n";
    }

    //*** UTILIZANDO O SIZEOF NO COMANDO FOR ***
    for(i=0 ; i<sizeof(vetor) / 4; i++){ //Mas CUIDADO, ele vai informar a quantidade em BYTES, por isso teremos que dividir o sizeof por 4 () (4 porque 1 BYTE = 4 BITS)
        cout << vetor[i] << "\n";
    }

    //*** UTILIZANDO OUTRA VARIAVEL PARA CONTROLAR O TAMANHO DO VETOR
    int tam = 8; // Criamos uma variavel para controle do tamanho do VETOR e se necesario alteramos somente esta variavel
    int vetor2[tam];
    int i2;
    

    vetor2[0] = 100;
    vetor2[1] = 200;
    vetor2[2] = 300;
    vetor2[3] = 400;
    vetor2[4] = 500;
    vetor2[5] = 600;
    vetor2[6] = 700;
    vetor2[7] = 800;
    
    for(i2=0 ; i2<tam; i2++){
        cout << vetor[i2] << "\n";
    }


    //*** CRIANDO O ARRAY E DECLARANDO A QUANTIDADE DAS POSICOES NA MESMA LINHA DE COMANDO ***
    int vetor3[5] = {10,20,30,40,50}; //Declarando os valores das posicoes entre {}. Mas CUIDADO, quando declaramos a quantidade das posicoesm não é possivel utilizar outra variavel para controle do tamanho do ARRAY, temos que colocar o valor real do tamanho.
    int i3;

    for(i3=0 ; i3<sizeof(vetor3) / 4; i3++){
        cout << vetor[i3] << "\n";
    }


    return 0;
}
