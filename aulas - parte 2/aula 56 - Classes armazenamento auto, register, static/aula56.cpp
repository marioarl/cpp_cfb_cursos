#include <iostream>
#include <vector>

using namespace std;

//Criando funcoes()
int soma(int n1, int n2){
    return n1 + n2;
}

//Se colocarmos o retorno (->) como int, mesmo que seja chamada a funcao soma2(10.3, 5.2) o resultado será inteiro(int)
auto soma2(double n1, double n2)-> double{ 
    return n1 + n2;
}

string canal(){
    return "CFB Cursos";
}


//STATIC
void somador(){
    static auto i=0;
    i++;
    cout << i << endl;
}

int main(int argc, char const *argv[])
{
    //AUTO
    auto num = 10;//É uma forma de declarar uma variavel que pode ser de qualquer tipo. O tipo tem que ser determinado na inicializacao da variavel, entao auto nao torna a variavel dinamica. Nao pode deixar de inicializar a variavel depois.

    auto nome = "Mario";
    auto valor = 10.5; 

    auto res = soma(10,5);
    cout << res << endl;

    auto res2 = soma2(10.3,5.2);
    cout << res << endl;

    auto res1 = canal();
    cout << res1 << endl;

    //Com vetores
    vector<int>v{10,20,30,40,50,60,70};

    for(auto it=v.begin(); it != v.end(); it++){ //Sem o auto: vector<int>::iterator it=v.begin(); it != v.end(); it++)
        cout << *it << endl;
    }

    /*
    REGISTER - Quando declaramos uma variavel com register estamos pedindo para que o sistema armazene essa variavel em um registrador e nao na memoria RAM, mas é o sistema que decide. A maioria das vezes ele nao armazena. A variavel tem que ser de tamanho maximo de um registrador, tem que ser uma variavel pequena e damos preferecia a variaveis que precisam de um acesso muito rapido, ou variaveis que sao utilizadas repetidas vezes. O REGISTRADOR do computador está no PROCESSADOR, por isso é mais rapido do que acessar a memoria RAM.
    */

    register int cont;

    for(cont = 0; cont <10; cont++){
        cout << cont << endl;
    }


    /*
    STATIC - É um modificador de acesso (ver criacao da funcao somador() antes do main())
    Se nao utilizarmos a classe de armazenamento static, se chamarmos a funcao somador() 5x a saida será:
    1
    1
    1
    1
    1
    Isto ocorre porque na funcao somador() o i foi declarado com 0 (i = 0) e por isso todas as vezes que chamamos a funcao, o i sempre será igual a 0 e será incrementado 1 como esta na funcao.
    COm a utilizacao da classe de armazenamento static, o comportamento da funcao será outra, e a saida será:
    1
    2
    3
    4
    5
    Isto ocorre porque quando utilizamos static o computador usa 1 posicao da memoria e todas as vezes que será utilizada a variavel, será o mesmo endereco de memoria.
    */
   somador();
   somador();
   somador();
   somador();
   somador();
   

















    return 0;
}
