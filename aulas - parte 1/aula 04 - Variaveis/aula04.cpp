#include <iostream>


using namespace std;
int main(int argc, char const *argv[])
{
    //TIPO NOME = VALOR;
    /*TIPO: bool=> Boleano True ou False, 
            char=> caractere ou uma cadeia de caracteres
            int=> Numeros inteiros(sem casas decimais) positivos ou negativos
            double=> Numeros com mais de 15 casas decimais
            float=> Numeros com menos de 6 casas decimais
    */

    int vidas = 0; //10, 25...
    char letra = 'B'; //'B' (aspas simples)
    char nome[20]  = "Mario"; // criando uma variavel tipo char com 20 caracteres(vetor)
    double decimal = 5.2; //2.4999999
    float decimal2 = 5.2; //2.5
    bool vivo = true; //true , false

    cout << "Digite o numero de vidas: ";
    cin >> vidas; //Captura input do teclado e armazenou na variavel vidas
    
    cout << "Digite uma letra: ";
    cin >> letra;

    cout << "Dinheiro: ";
    cin >> decimal;

    cout << "Digite seu nome: ";
    cin >> nome;

    cout << vidas << "\n";
    cout << letra << "\n";
    cout << decimal << "\n";
    cout << vivo << "\n";
    cout << nome << "\n";
    
    


    return 0;
}
