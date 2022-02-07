#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

//Uma classe herda mais de 1 classe

//1o. Criar a classe
class Base1{ 
public:
    void impBase1();
};

//3o. Declarar o metodo impBase1 da classe Base1
void Base1::impBase1(){
    std::cout << "Imp classe Base1" << std::endl;
}

//2o. Criar outra classe
class Base2{ 
public:
    void impBase2();
};

//4o. Declarar o metodo impBase2 da classe Base2
void Base2::impBase2(){
    std::cout << "Imp classe Base2" << std::endl;
}

//5o. Criar uma classe que vai herdar as duas classes anteriores
class CFB:public Base1,public Base2{//Herda propriedades das classes Base1 e Base2

};

#endif //CLASSES_H_INCLUDED