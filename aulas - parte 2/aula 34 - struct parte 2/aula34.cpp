#include <iostream>

using namespace std;

struct Carro{ 
    string nome;
    string tipo; 
    string cor;
    int pot; 
    int velMax;
    int vel;

    //Criando uma funcao para atribuir valores na variaveis
    void insere(string stnome, string sttipo, string stcor, int stpot, int stvelMax){
        nome=stnome;
        tipo=sttipo;
        cor=stcor;
        pot=stpot;
        velMax=stvelMax;

    }

    //Criando uma funcao para imprimir os valores
    void mostra(){
        cout << "\nNome...............: "<< nome << "\n";
        cout << "Tipo...............: "<< tipo << "\n";
        cout << "Cor................: "<< cor << "\n";
        cout << "Potencia...........: "<< pot << "cv\n";
        cout << "Velocidade.........: "<< vel << "Km/h\n";
        cout << "Velocidade Max.....: "<< velMax << "Km/h\n";

    }

    //Criando funcao para alterar a velocidade
    void mudaVel(int mv){
        vel=mv;
        if(vel > velMax){ //Verificando se a vel informada e MAIOR que a velocida MAX
            vel = velMax;
        }
        if(vel < 0){//Verificnado se a vel informada é MENOR do que ZERO
            vel=0;
        }
    }
};


int main(int argc, char const *argv[])
{
    Carro car1, car2, car3, car4;


    //Inserindo valores nas variaveis car1, car2, car3 e car4 com a funcao INSERE criada na STRUCT
    car1.insere("Tornado", "Esportivo", "Vermelho", 450, 350);
    car2.insere("Luxor", "Luxo", "Preto", 250, 260);
    car3.insere("WeeKend", "Familia", "Azul", 130, 200);
    car4.insere("Booster", "SUV", "Prata", 150, 230);

    //Imprimindo os valores das variaveis car1, car2, car3 e car4 com a funcao MOSTRA criadas na STRUCT
    car1.mostra();
    car2.mostra();
    car3.mostra();
    car4.mostra();

    car1.mudaVel(100); //Alterando a velocidade com a funcao MUDAVEL
    return 0;
}
