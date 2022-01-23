#include <iostream>

using namespace std;

/*
STRUCT - É uma variavel especial que contem diversas outras variaveis normalmente de tipos diferentes.
As variaveis internas contidas pela STRUCT sao denominadas membrod do STRUCT.

*/


//Criando uma estrutura
struct Carro{ 
    //Variaveis como se fossem propriedades para o struct carro
    string nome;
    string tipo; 
    string cor;
    int pot; 
    int velMax;
};


int main(int argc, char const *argv[])
{
    //Criando variaveis do tipo Carro
    Carro car1;
    Carro car2;

    //Configurando as propriedades da struct Carro na variavel car1
    car1.nome="Tornado"; 
    car1.tipo="Esportivo";
    car1.cor="Vermelho";
    car1.pot=450;
    car1.velMax=350;

    //Configurando as propriedades da struct Carro na variavel car2
    car2.nome="Luxor2";
    car2.tipo="Luxo"; 
    car2.cor="Preto";
    car2.pot=250;
    car2.velMax=260;


    cout << "Nome...............: "<< car1.nome << "\n";
    cout << "Tipo...............: "<< car1.tipo << "\n";
    cout << "Cor................: "<< car1.cor << "\n";
    cout << "Potencia...........: "<< car1.pot << "cv\n";
    cout << "Velocidade Max.....: "<< car1.velMax << "Km/h\n";

    cout << "Nome...............: "<< car2.nome << "\n";
    cout << "Tipo...............: "<< car2.tipo << "\n";
    cout << "Cor................: "<< car2.cor << "\n";
    cout << "Potencia...........: "<< car2.pot << "cv\n";
    cout << "Velocidade Max.....: "<< car2.velMax << "Km/h\n";

    return 0;
}
