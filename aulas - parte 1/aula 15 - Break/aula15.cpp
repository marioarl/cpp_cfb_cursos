#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int cont;

    cont = 0;

    while(cont < 1000){
        cout << cont << "\n";
        cont++;

        if(cont == 500){
            break; //Interrompe o LOOP em 500
        }
    }
    return 0;
}
