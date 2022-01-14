#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char palavra[30], secreta[30], letra[1];
    int tam, i, chances, acertos;
    bool acerto;

    chances = 6;
    tam = 0;
    i = 0;
    acerto = false;
    acertos = 0;

    cout << "\nDigite a palavra secreta: ";
    cin >> palavra;
    system("cls");

    while(palavra[i] != '\0'){ //Obter o tamanho da palavra OBS: \\0 quer dizer ENTER
        i++;
        tam++;
    }

    for(i = 0; i < 30; i++){ //Colocando * na palavra secreta 
        secreta[i] = '*';
    }

    // Rotina do jogo
    while((chances > 0)&&(acertos < tam)){ 
        cout << "Chances restantes: "<< chances << "\n\n"; //Informacoes do jogo
        cout << "Palavra secreta: "; //informacoes do jogo
        for(i = 0; i < tam; i++){
            cout << secreta[i];
        }

        //Letra digitada pelo usuario
        cout << "\n\nDigite uma letra: ";
        cin >> letra[0];

        //Verificar se a letra existe na palavra
        for(i=0; i < tam; i++){
            if(palavra[i] == letra[0]){
                acerto = true;
                secreta[i] = palavra[i];
                acertos++;
            }
        }
        //Se foi acerto ou nao
        if(!acerto){
            chances--;
        }
        acerto = false;
        system("cls");
    }

    //Foi vitoria?
    if (acertos == tam){
        cout << "Voce acertou a palavra!\n\n";
    }else {
        cout << "Voce nao acertou a palavra!\n\n";
    }

    system("pause");


    return 0;
}
