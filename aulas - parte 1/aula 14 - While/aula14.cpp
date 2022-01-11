#include <iostream>

using namespace std;

//COMANDO DE LAÇO WHILE

int main(int argc, char const *argv[])
{
    int n;

    n=0;
    while(n<10){
        cout << n <<"\n";
        n++;//Verificar sempre se há uma condicao dentro do WHILE, pois sem isso irá gerar um LOOP infinito
    }

    cout << "\nRotina Finalizada\n";

    //************************************************

    int cont;
    
    cont=0;
    while(cont < 20){
        cout << "Canal Fessor Bruno\n";
        cont++;
    }

    cout << "\nRotina Finalizada\n";


    //************************************************
    int cont2;
    
    cont2=0;
    while(cont2++< 20){ //Tambem é permitido colocar SOMENTE a condicao de incremento ++ ou -- dentro da expressao 
        cout << "Canal Fessor Bruno - " << cont2 << "\n";
    }
    cout << "\nRotina Finalizada\n";


    //************************************************
    int cont3;
    
    cont3=0;
    while(cont3++< 20){ 
        cout << "Canal Fessor Bruno - " << cont3 << "\n";
        if(cont == 10) //Pode colocar um IF dentro do WHILE
            break; //E utilizar o comando BREAK
    }
    cout << "\nRotina Finalizada\n";



    return 0;
}
