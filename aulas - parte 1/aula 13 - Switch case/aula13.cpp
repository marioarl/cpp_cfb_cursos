#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int val, val2, val3;
    
    cout << "Selecione uma cor: \n";
    cout << "[1] = verde, [2] = Azul, [3] = Vermelhor\n";

    cin >> val;

    switch(val){
        case 1:
            cout << "Cor selecionada Verde";
            break;
        case 2:
            cout << "Cor selecionada Azul";
            break;
        case 3:
            cout << "Cor selecionada Vermelho";
            break;
        default:
            cout << "Valor selecionado invalido";
    }

    cout <<"\nPrograma finalizado\n";


    //Multiplas opcoes no Case
    cout << "Selecione uma cor: \n";
    cout << "[1, 2, 3] = verde, [4, 5, 6] = Azul\n";

    cin >> val2;

    switch(val2){
        case 1:
        case 2:
        case 3:
            cout << "Cor selecionada Verde";
            break;
        case 4:
        case 5:
        case 6:
            cout << "Cor selecionada Azul";
            break;
        default:
            cout << "Valor selecionado invalido";
    }

    cout <<"\nPrograma finalizado\n";


    //Switchs aninhados
    cout << "Selecione uma transporte: \n";
    cout << "[1] = carro, [2] = moto, [3] = aviao, [4] = helicoptero\n";

    switch(val3){
        case 1:
        case 2:
            cout << "\nTransporte terrestre\n";
            switch(val3){
                case 1: 
                    cout << "Carro selecionado";
                    break;
                case 2:
                    cout << "Moto selecionada";
                    break;
            }
            break;
        case 3:
        case 4:
            cout << "\nTransporte aereo\n";
            switch(val3){
                case 3:
                    cout << "Aviao selecionado";
                    break;
                case 4:
                    cout << "Helicoptero selecionado";
                    break;    
            }
            break;
        default:
            cout << "\nTransporte selecionado invalido";
            
    }

    cout << "\nPrograma Finalizado\n";
    return 0;
}
