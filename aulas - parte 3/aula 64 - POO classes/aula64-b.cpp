#include <iostream>
#include <memory> //Utilizar os smart pointers

/*utilizando com a lista de inicializacao com smart point.

A lista de inicializacao evita que tenhamos que declarar o new




*/ 
class Carro{
public:
    int velMax;
    int potencia;
    const char* nome;

    Carro(const char* n, int p):nome(n), potencia(p){ //Lista de inicializacao
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
    //Quando utilizamos NEW é necessario colocar a -> para chamar as propriedades, quando nao se utiliza o NEW para chamar as propriedades utiliza-se o . (ponto)
    unique_ptr <Carro> c1(new Carro{"X1", 85}); //Smart pointers
    cout << c1->nome << " - " << c1->potencia << " - " << c1->velMax << endl;
    
    Carro c2{"X2", 400};
    cout << c2.nome << " - " << c2.potencia << " - " << c2.velMax << endl;

    return 0;
}
