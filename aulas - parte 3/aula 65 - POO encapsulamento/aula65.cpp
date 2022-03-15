#include <iostream>
#include <memory>

/*
Encapsulamento ==> É uma tecnica de proteger os membros de uma classe. Algumas propriedades ou metodos precisam ser protegidas contra alteracoes do usuario e por isso utilizamos o PRIVATE. 

Podemos colocar a propriedade velMax como PRIVATE, e só conseguimos acessar velMax dentro de um metodo da classe, ou seja, nao conseguimos nem imprimir a velMax. Para isso precisamos dos metodos GET e SET.

Após criado os metodos GET e SET, conseguimos acessar o velMax, mas ainda a propriedade está desprotegida, pois conseguimos alterar a velMax atraves do metodo SET.

A primeira possibilidade é NÃO criar o metodo SET para velMax, portanto nao será possivel acessa-la fora da classe.

A segunda possibilidade é proteger melhor a velMax, e para isso devemos coloca-la em PRIVATE
*/


class Carro{
private:
    int velMax;
    void setVelMax(int vm){
        this ->velMax = vm;
    }
public:
    int potencia;
    const char* nome;

    
    int getVelMax(){
        return this ->velMax;
    }

    Carro(const char* n, int p):nome(n), potencia(p){ //Lista de inicializacao
        if(p<100){
            this->setVelMax(120);
        }else if(p<200){
            this->setVelMax(220);
        }else{
            this->setVelMax(350);
        }
    }
};

using namespace std;

int main(int argc, char const *argv[])
{
    unique_ptr <Carro> c1(new Carro{"X1", 85}); //Smart pointers
    cout << c1->nome << " - " << c1->potencia << " - " << c1->getVelMax() << endl;
    
    Carro c2{"X2", 400};
    cout << c2.nome << " - " << c2.potencia << " - " << c2.getVelMax() << endl;
    
    return 0;
}
