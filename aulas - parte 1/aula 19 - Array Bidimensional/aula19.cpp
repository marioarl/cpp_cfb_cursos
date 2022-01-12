#include <iostream>

using namespace std;

//**** ARRAYS BIDIMENSIONAIS - MATRIZES ****
/*
    Um array bidimensional podemos considerar que é um VETOR DE VETORES. Dentro de cada posicao do primeiro indice, temos um novo ARRAY.
                L  C
    int matriz [3][4];  ==> onde L é LINHA e C é COLUNA
                
                
                COLUNAS(C)
          0     1     2     3
          _________________________
  L  0   |     |     |     |     |
  I      |_____|_____|_____|_____|
  N  1   |     |     |     |     |
  H      |_____|_____|_____|_____|
  A  2   |     |     |     |     |
  S      |_____|_____|_____|_____|
  (L)
*/

int main(int argc, char const *argv[])
{
    int matriz[3][4];
    int l,c; //Indices do comando FOR l = linha c=coluna

    matriz[0][0] = 0; //Adicionando valores na LINHA 1
    matriz[0][1] = 0; 
    matriz[0][2] = 0;
    matriz[0][3] = 0;

    matriz[1][0] = 1; //Adicionando valores na LINHA 2
    matriz[1][1] = 1;
    matriz[1][2] = 1;
    matriz[1][3] = 1;

    matriz[2][0] = 2; //Adicionando valores na LINHA 3
    matriz[2][1] = 2;
    matriz[2][2] = 2;
    matriz[2][3] = 2;

    for (l=0; l <3; l++){
        for (c=0; c < 4; c++){
             cout << matriz[l][c] << " ";
        }
        cout << "\n";
    }

    //*** UTILIZANDO O COMANDO FOR PARA ADICIONAR VALORES NA MATRIZ ***

    int matriz2[3][4];
    int l1,c1;

    for (l1=0; l1 <3; l1++){ // Adicionando valores na MATRIZ
        for (c1=0; c1 < 4; c1++){
            matriz2[l1][c1] = l1;
        }
    }

    for (l1=0; l1 <3; l1++){ //Imprimindo os valores da MATRIZ
        for (c1=0; c1 < 4; c1++){
             cout << matriz2[l1][c1] << " ";
        }
        cout << "\n";
    }

    //*** ADICIONANDO VALORES PELO TECLADO ***

    int matriz3[3][4];
    int l2,c2;

    for (l2=0; l2 <3; l2++){ // Adicionando valores na MATRIZ pelo teclado
        for (c2=0; c2 < 4; c2++){
            printf("\nDigite um valor para posicao [%d][%d]: ", l2,c2);
            cin >> matriz3[l2][c2];
        }
    }

    for (l2=0; l2 <3; l2++){ //Imprimindo os valores da MATRIZ
        for (c2=0; c2 < 4; c2++){
             cout << matriz3[l2][c2] << " ";
        }
        cout << "\n";
    }



    return 0;
}
