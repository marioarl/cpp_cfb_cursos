#include <iostream>

using namespace std;

void imp(string txt="TEXTO"); //Estamos passando um valor DEFAULT para a funcao e mesmo que nao seja informada quando chamar a funcao, este valor será impresso



int main(int argc, char const *argv[])
{
    imp("Youtube");
    imp(); //Mesmo nao informando o argumento, será impresso TEXTO que foi atribuido na funcao como padrao
    
    return 0;
}

//funcoes criadas
void imp(string txt){
    cout << "\n" << txt << "\n";

}

