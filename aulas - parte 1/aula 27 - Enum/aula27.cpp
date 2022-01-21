#include <iostream>

/*
ENUM 


*/

using namespace std;

int main(int argc, char const *argv[])
{
    enum armas{fuzil=100, revolver=8, rifle=12, escopeta=1}; //Se voce nao especificar nenhum valor para os itens, por padrao, cada item do ENUM possue um valor {0, 1, 2,3} de acordo com o primeiro item, mas se voce colocar um valor no primeiro item, ficara este valor sequencial.

    armas armaSel; //Criando uma variavel de nome armaSel do tipo armas
    
    armaSel = rifle;

    cout << armaSel;
    return 0;
}
