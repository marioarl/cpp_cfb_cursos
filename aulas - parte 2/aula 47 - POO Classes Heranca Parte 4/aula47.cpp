#include <iostream>
#include "classes.h"

using namespace std;



int main(int argc, char const *argv[])
{
    Moto *v1=new Moto();
    Carro *v2=new Carro();
    Tanque *v3=new Tanque();


    v1->imp();
    v2->imp();
    v3->imp();
    return 0;
}
