#include <iostream>
#include <cstdlib> //Para utilizar as funcoes do DOS

using namespace std;

int main(int argc, char const *argv[])
{
    int n1, n2, res;
    char opc;

    inicio: //Para criar o GOTO precisamos do LABEL, que é o ponto de parada. Para criar o LABEL é necessario colocar : no final do LABEL

    system("cls"); //Limpar a tela, só funciona no WINDOWS

    cout <<"Digite o valor da nota 1: ";
    cin >> n1;

    cout <<"Digite o valor da nota 2: ";
    cin >> n2;

    res = n1 + n2;

    /*
    NOTA >= 60 ===>APROVADO
    NOTA >=40 e <60 ====> RECUPERACAO
    NOTA <40 =====> REPROVADO

    */
    if (res >=60){
        cout << "\nAluno APROVADO\n";

    }else if(res >=40){
        cout << "\nAluno em RECUPERACAO\n";
    }else {
        cout << "\nAluno REPROVADO\n";
    }
    return 0;

    cout << "\n\nDigitar outras notas?[s/n]: ";
    cin >> opc;

    if (opc == 's' or opc == 'S'){
        goto inicio;
    }
}
