#include <iostream>
#include <memory> //Para utilizar o SMART POINTER

using namespace std;

/*
SMART POINTER VANTAGENS:

1) Nao precisa lembra de liberar memoria, que foi alocada para uso do objeto
2) Nao precisa utilizar os comandos DELETE ou FREE em todos os objetos que foram declarados
3) Elimina o risco de "DANGLING POINTERS", que é quando o ponteiro apontam para objetos já deleltados 
*/

class Carro{
public:
    int vel =0;
    int getVel(){
        return vel;
    }
    void setVel(int v){
        this->vel=v;
    }
};

class NCarro{
public:
    int nvel =0;
    int getnVel(){
        return nvel;
    }
    void setnVel(int nv){
        this->nvel=nv;
    }
};


int main(int argc, char const *argv[])
{
    //int *pnum = new int();

    unique_ptr<int>pnum(new int); //Ponteiro unico

    *pnum = 10;

    cout << *pnum << " - " << &pnum << endl;

    //Se quisermos utilizar o ponteiro compartilhado
    shared_ptr<int>pnum2(new int);
    shared_ptr<int>pnum3=pnum2;
    *pnum2 = 50;

    cout << *pnum2 << " - " << &pnum2 << endl;

    //Com string

    /* Sem utilizar o SMART POINTER
    string * str=new string("CFB Cursos");
    cout << *str << " - tamanho:" << str->size() << endl;

    delete str;    
    */

   unique_ptr<string>str(new string("CFB Cursos"));
   cout << *str << " - tamanho:" << str->size() << endl;



   //Com classes

   /* Sem utilizar o Smart POINTER
   Carro *c1=new Carro();
   cout << "Velocidade: " << c1->getVel() << endl;
   delete c1;
   */

  unique_ptr<Carro>c1(new Carro);
  cout << "Velocidade: " << c1->getVel() << endl;



  //Utilizando SHARED_PTR em Classes
  shared_ptr<NCarro>n1(new NCarro);
  shared_ptr<NCarro>n2=n1;
  n1->setnVel(10);
  n2->setnVel(5); //Se alterar o parametro em n1,altera tambem de n2
  cout << "Velocidade n1: " << n1->getnVel() << endl;
  cout << "Velocidade n2: " << n2->getnVel() << endl;



        


    return 0;
}
