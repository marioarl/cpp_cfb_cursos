#include <iostream>
#include "Aviao.h" //Incluindo o cabecalho Aviao.h criado

using namespace std;


int main(int argc, char const *argv[])
{
    Aviao *av1=new Aviao(3); //O parametro 3 é o tipo do aviao
    Aviao *av2=new Aviao(1);
    Aviao *av3=new Aviao(2);

    av1->imprimir();
    av2->imprimir();
    av3->imprimir();
    
    return 0;
}
