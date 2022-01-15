#include <iostream>

using namespace std;

//Para o programa conhecer a funcao devemos prototipar

void texto(), soma(int n1, int n2);
int soma2(int n1, int n2);
void tr(string tra[4]);

int main(int argc, char const *argv[]) //esta linha já é uma funcao
{
    texto(); //chamar a funcao no main()

    //Colocando a funcao dentro do FOR
    for (int i = 0; i < 10; i++){
        texto();
    }

    //Funcao soma
    soma(15,5);

    //Funcao soma2
    int res;
    res = soma2(175,25);
    cout << "Valor de res: " << res << "\n";  //Armazenando o retorno dentro de uma variavel
    cout << "Valor de funcao: " << soma2(175,25) << "\n"; //Ou podemos chamar a funcao dentro do cout

    //Funcao com VETOR
    string transp[4] = {"carro", "moto", "barco", "aviao"};

    tr(transp); //passando o VETOR criado para a funcao

    
    return 0;
}


/*
            Construir as funcoes depois da funcao main

Funcao para escrever um texto na tela
1 - indicar o tipo de retorno da funcao ==> void (nao vai retornar nada, nao tem um valor de retorno)
2 - nome da funcao ==> texto() { bloco da funcao}
*/

void texto(){
    cout << "Canal Fessor Bruno\n";
}

//Somar 2 valores

void soma(int n1, int n2){ //Criar 2 argumentos para a funcao
    cout << "Soma dos valores: " << n1 + n2 <<"\n";
}

//Funcao que retorna um valor inteiro

int soma2(int n1, int n2){
    return n1 + n2; //Quando o tipo de retorno for diferente de VOID, é necessario colocar o return
}

//Funcao com VETOR

void tr(string tra[4]){
    for(int i =0; i < 4; i++){
        cout << tra[i] << "\n";
    }

}

