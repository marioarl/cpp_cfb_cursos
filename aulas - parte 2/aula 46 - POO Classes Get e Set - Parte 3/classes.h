#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED



class Veiculo{
    public:
        int vel;
        int tipo;
        Veiculo(int tp);
        int getVelMax();
        bool getLigado();
        void setLigado(int l);      

    //As propriedades e metodos privados, só podem ser manipulados pela propria classe
    private:
        void setVelMax(int vm);//Declaramos a setVelMax() como PRIVATE para nao ter acesso no programa.
        std::string nome;
        int velMax;
        bool ligado;
};

bool Veiculo::getLigado(){
    return ligado;
}
void Veiculo::setLigado(int l){
    if (l == 1){
        ligado = true;
    }else if (l == 0){
        ligado = false;
    }
}

int Veiculo::getVelMax(){
    return velMax;
}

void Veiculo::setVelMax(int vm){
    velMax=vm;
}



Veiculo::Veiculo(int tp){
    tipo=tp;
    if (tipo ==1){
        nome="Carro";
        velMax=200; //Nestas atribuicoes podemos usar o metodo setVelMax ou atribuir diretamente velMax, porque mesmo a propriedade sendo PRIVATE, este metodo pertence a classe
    }else if(tipo == 2){
        nome="Aviao";
       velMax=800;
    }else if (tipo == 3){
        nome="Navio";
        velMax=120;
    }
    setLigado(0);//Já define como veiculo desligado
}

#endif //CLASSES_H_INCLUDED