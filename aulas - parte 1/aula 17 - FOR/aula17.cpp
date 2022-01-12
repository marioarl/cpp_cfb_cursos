#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /*
        for ( ini ; cond ; inc/dec){
            comandos
        }
    */
    int x, y, z;

    for (x=0; x < 10; x++ ){
        cout << x << "\n";
    }

    //**** Mais de 1 VARIAVEL no FOR *******
    for (x = 0, y = 1; x <=10 ; x++, y+=2){ 
        cout << x << " - " << y << "\n";
    }

    //**** Mais de 1 CONDICAO no FOR *******
    for (x = 0, y = 1; x <=10 && z <= 6; x++, y+=2){ //Utilizando o operador && AND
        cout << x << " - " << y << "\n";
    }

    //**** Outra forma de utilizacao do FOR sem bloco de comando, nao é muito utilizado hoje em dia ****

    for(int tmp = 0; tmp < 1000000000; tmp++); //Serve como um temporizador para o programa

    printf("\n\nACABOU!!!");


    return 0;
}
