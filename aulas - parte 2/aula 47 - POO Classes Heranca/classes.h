#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

/*
Herança é quando uma classe herda propriedades de outra.


*/

class Veiculo{
    public:
        int vel;
        int blind;
        int rodas;
        void setTipo(int tp);
        void setvelMax(int vm);
        void setArma(bool ar);
        void imp();
    private:
        int tipo;
        int velMax;
        bool arma;
};

void Veiculo::imp(){
    std::cout << "Tipo veiculo:.....: " << tipo << std::endl;
    std::cout << "Velocidade Maxima.: " << velMax << std::endl;
    std::cout << "Qtde rodas........: " << rodas << std::endl;
    std::cout << "Blindagem.........: " << blind << std::endl;
    std::cout << "Armamento.........: " << arma << std::endl;
    std::cout << "-----------------------------------" << std::endl;
}

void Veiculo::setTipo(int tp){
    tipo=tp;
}
void Veiculo::setvelMax(int vm){
    velMax=vm;
}
void Veiculo::setArma(bool ar){
    arma=ar;
}

//Classe moto que vai herdar a classe Veiculo
class Moto:public Veiculo{
public:
    Moto();
};

Moto::Moto(){
    vel = 0;
    blind = 0;
    rodas = 2;  
    setTipo(1);
    setvelMax(120);
    setArma(false);
}

//Classe Carro que vai herdar a classe Veiculo
class Carro:public Veiculo{
public:
    Carro();

};

Carro::Carro(){
    vel = 0;
    blind = 0;
    rodas = 4;  
    setTipo(2);
    setvelMax(180);
    setArma(false);
}

//Classe Tanque que vai herdar a classe Veiculo
class Tanque:public Veiculo{
public:
    Tanque();

};

Tanque::Tanque(){
    vel = 0;
    blind = 1;
    rodas = 8;  
    setTipo(4);
    setvelMax(200);
    setArma(true);
}



#endif //CLASSES_H_INCLUDED