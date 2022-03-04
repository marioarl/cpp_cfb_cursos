#include <iostream>

class Carro{
public:
    int velMax;
    int potencia;
    const char* nome;

    //Construir os metodos dentro da classe sem utilizar a forma de construcao fora da classe
    Carro(const char* n, int p){
        this-> nome = n;
        this-> potencia = p;
        if(p<100){
            this->velMax=120;
        }else if(p<200){
            this->velMax=220;
        }else{
            this->velMax=350;
        }
    }
};

using namespace std;



int main(int argc, char const *argv[])
{
    Carro *c1=new Carro("X1", 300);
    cout << c1->nome << " - " << c1->potencia << " - " << c1->velMax << endl;
    delete c1;
    
    return 0;
}
