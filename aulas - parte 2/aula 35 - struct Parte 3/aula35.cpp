#include <iostream>

using namespace std;

struct Carro{ 
    string nome;
    string tipo; 
    string cor;
    int pot; 
    int velMax;
    int vel;

    void insere(string stnome, string sttipo, string stcor, int stpot, int stvelMax){
        nome=stnome;
        tipo=sttipo;
        cor=stcor;
        pot=stpot;
        velMax=stvelMax;

    }

    void mostra(){
        cout << "\nNome...............: "<< nome << "\n";
        cout << "Tipo...............: "<< tipo << "\n";
        cout << "Cor................: "<< cor << "\n";
        cout << "Potencia...........: "<< pot << "cv\n";
        cout << "Velocidade.........: "<< vel << "Km/h\n";
        cout << "Velocidade Max.....: "<< velMax << "Km/h\n";

    }

    
    void mudaVel(int mv){
        vel=mv;
        if(vel > velMax){ 
            vel = velMax;
        }
        if(vel < 0){
            vel=0;
        }
    }
};


int main(int argc, char const *argv[])
{
    
    Carro *carros=new Carro[5]; //Criando um array (ponteiro)
    Carro car1, car2, car3, car4, car5;

    //Adicionando as variaveis no array
    carros[0] = car1; carros[1] = car2 ; carros[2] = car3; carros[3] = car4; carros[4] = car5;


    //Adicionando valores nas variaveis de acordo com o indice do vetor
    carros[0].insere("Tornado", "Esportivo", "Vermelho", 450, 350);
    carros[1].insere("Luxor", "Luxo", "Preto", 250, 260);
    carros[2].insere("WeeKend", "Familia", "Azul", 130, 200);
    carros[3].insere("Booster", "SUV", "Prata", 150, 230);
    carros[3].insere("Padrao", "Popular", "Branco", 110, 180);

    for(int i = 0; i<5; i++){
        carros[i].mostra();
    }

    return 0;
}
