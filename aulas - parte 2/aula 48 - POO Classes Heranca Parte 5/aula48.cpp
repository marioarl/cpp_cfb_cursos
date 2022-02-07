#include <iostream>
#include "classes.h" //6o.  Incluir a classe.h

using namespace std;

int main(int argc, char const *argv[])
{
    //7o. Instanciar os objetos
    Base1 *obj1 = new Base1();
    Base2 *obj2 = new Base2();

    //9o. Instanciando os objetos da classe que herda a Base1 e Base2
    CFB *obj3 = new CFB();

    //8o. Chamando os metodos de impressao
    obj1 ->impBase1();
    obj2 ->impBase2();

    //10o. Chamando os metodos de impressao da classe CFB
    obj3 ->impBase1();
    obj3 ->impBase2();


    return 0;
}
