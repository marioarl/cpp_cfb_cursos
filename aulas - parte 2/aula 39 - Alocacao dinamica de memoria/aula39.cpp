#include <iostream>
#include <stdio.h> //Para a funcao gets

using namespace std;

/*
Alocacao dinamica de memoria - Reservar a quantidade necessaria de memoria RAm para determinado recurso. As vezes reservamos uma quantidade de memoria RAM maior do que vamos precisar e com isso estamos consumindo recursos do equipamentos de forma desnecessaria.
Assim como se reservarmos uma quantidade de memoria muito pequena para o programa, tambem será um problema. 
*/

int main(int argc, char const *argv[])
{
    //Programa sem alocação dinamica

    char vnome[50];

   //cin >> vnome;
    gets(vnome);
    cout << vnome;

    /*
    Quando voce digitar nome e sobrenome, o programa irá cortar o sobrenome, porque o caractere espaço, para a variavel tipo CHAR, é identificado como caractere terminador.
    Para resolver esse problema, precisamos trocar o comando de leitura cin >> vnome; por gets(vnome);

    Neste programa, se voce diminuir a quantidade de caracteres de espaco de memoria para 5 
    char vnome[5]; se voce escrever algum texto que seja maior que 5, o programa irá funcionar corretamente e vai imprimir o texto correto. Mas pode ser um problema, porque o espaço excedente de memoria que será utilizado, poderá dar algum problema no programa, porque este espaço poderia estar reservado para outra parte do programa. 
    
    */

    return 0;
}
