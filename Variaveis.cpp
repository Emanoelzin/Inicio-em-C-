#include <iostream>
using namespace std;

int main (){
//Tipo e o nome da variavel;
//Alem de cria o tipo e o nome tbm pode por o valor que a variavel vai ter
//TIPO NOME = VALOR;

    //int vidas=0; // Vai inicar com o Valor 0
    int Idade=0; //vai receber numeros do tipo 10, 25, 48 ,.. numeros inteiros
    char letra='E'; // recebe caracteris 'string do tipo char' = a 1 byte
    char letras[20];// Vai poder colocar até 20 caracteris
    double decimal= 2.5; //Vai receber numeros reais = 2.5555455 , 5.55555555 ..
    float dec= 5.5; // É identico ou double só que é menos preciso = 2.5 , 5.5
    bool vivo; // Recebe Verdadeiro ou Falso = True / False 1 T 0 F
    string name= "Emanoel"; // Vai receber textos maiores entre "Aspas"

        cout << "Qual é a sua idade: ";
    cin >> Idade;

        cout << "Digite seu nome: ";
    cin >> letras;

        cout << "Entre com o numero em Decimal: ";
    cin >> decimal;

        cout << "Entre novamente com o numero em Decimal: ";
    cin >> dec;

        cout << "Verdadeiro ou Falso: ";
    cin >> vivo;

        cout << "Digite uma frase: ";
    cin >> name;
 
    return 0;
}
