#include <iostream>
#include <stdlib.h> //Utilizar o comando SYSTEM

using namespace std;

//SYSTEM() utiliza os comandos do OS da maquina

int main(int argc, char const *argv[])
{
    cout << "AQUI ESTA A MENSAGEM E VAI DESAPARECER!!!";
    //Pausar
    system("pause");

    //Executa o comando cls , limpar a tela
    system("cls");

    //Executa o comando DIR (diretorio)
    system("dir"); //O parametro é um comando do sistema operacional

    //Trocar as cores do prompt de comando - ver lista no prompt do DOS com o comando color/? onde:
    // o primeiro parametro será a cor do fundo e o segundo parametro será a cor da fonte 
    system("color 47");

    

    return 0;
}
