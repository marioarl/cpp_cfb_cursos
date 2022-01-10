#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //OPERADOR TERNARIO ==> (expressao) ? valor1 : valor 2

    int n, n2, nota;
    string res;

    cout << "Digite a primeira nota: ";
    cin >> n;

    cout << "Digite a segunda nota: ";
    cin >> n2;

    nota = n + n2;

    // se nota >=60 APROVADO
    // se nota <60 REPROVADO

    (nota >=60) ? res = "Aprovado!" : res = "Reprovado!";
    /*
    Indicando o Aprovado e Reprovado como valores de retorno
    res = (nota >= 60) ? "Aprovado!" : "Reprovado!"
    */

    cout << "\nSituacao do aluno: " << res << "\n";

    //==============================================================

    int n1, x;

    x = 5;

    cout << "Digite um valor: ";
    cin >> x;

    (n1 >= 10) ? x++ : x--;

    cout << "Novo valor do X: " << x << "\n"; 







    return 0;
}

