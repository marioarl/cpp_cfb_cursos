#include <iostream>

using namespace std;

class Aviao{ //Criar uma classe chamada Aviao

//Definindo os elementos publicos
public: 
    int vel = 0;
    int velMax;
    string tipo;
    void ini(int tp); //Prototipando o metodo ini()

//Definindo os elementos privados
private: 

};

//Criando o metodo ini() para definir as propriedades do tipo do aviao
void Aviao::ini(int tp){ //1 = Jato   2= Monomotor  3=Planador
    if(tp == 1){
        this->velMax = 800;
        this->tipo = "Jato";
    }else if (tp == 2){
        this->velMax = 350;
        this->tipo = "Monomotor";
    } else if (tp ==3){
        this->velMax = 180;
        this->tipo = "Planador";
    }
}

int main(int argc, char const *argv[])
{
    Aviao *av1=new Aviao(); //Instanciando um novo objeto av1 do tipo AVIAO, deve ser declarado como ponteiro
    Aviao *av2=new Aviao();
    av1->ini(1);
    av1->ini(2);
    cout << av1->velMax << endl; //Imprimindo a propriedade velMax do objeto av1 como ini(1)
    cout << av2->velMax;
    return 0;
}
