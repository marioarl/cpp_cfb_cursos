#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /*
    OPERADOR AND ==> representado em Linguagem C &&
    Para o operador && retornar verdadeiro, todos os testes devem retornar verdadeiro
    X1      X2      X1 && X2
    0       0           0
    0       1           0
    1       0           0
    1       1           1 ==> Somente irá retornar verdadeiro se as operacoes forem verdadeiras

    OPERADOR OR ==> reresentado em linguagem C ||
    Para o operador || retornar verdadeiro, pelo menos uma das operacoes tem que ser verdadeira
    X1      X2      X1 || X2
    0       0           0
    0       1           1
    1       0           1
    1       1           1

    OPERADOR NOT ==> representado em linguagem C !
    Vai inverter um valor em um teste
    
    */

    int num = 8, num2 = 5, num3 = 12, num4 = 1;
    
    //OPERADOR && (AND)
    if(num >4 && num <7){
        cout << "\n\nValor aceito\n";

    } else{
        cout << "\n\nNao aceito\n";
    }

    //OPERADOR || (OR)
    if(num2 <3 || num2 >8){
        cout << "\n\nValor aceito\n";

    } else{
        cout << "\n\nNao aceito\n";
    }

    //OPERADOR || (OR) e && (AND)
    /*
    Valores de :
    3 a 6
    10 a 14
    16 a 19
    */
    if((num3 >=3 && num3 <=6) || (num3 > 9 && num3 < 15) || (num3 >=16 && num3 <=19)){
        cout << "\n\nValor aceito\n";

    } else{
        cout << "\n\nNao aceito\n";
    }


    //OPERADOR NOT !
    //if(num == 1) é a mesma coisa que: if(num)
    //if(num == 0) é a mesma coisa que: if(!num)

    if(!num4){
        cout << "\n\nVou ao clube\n";

    } else{
        cout << "\n\nVou ao cinema\n";
    }






    return 0;
}
