#include <iostream>
using namespace std;

#define Nome "INFOME SEU NOME CORRETAMENTE: \n";
#define Idade "INFORME SUA IDADE CORRETAMENTE: \n";
#define Sexo "SE SEU SEXO FOR FEMININO = f SE FOR MASCULINO = m : \n";


int main() {

    char nome [150];
    char sexo [50];
    int idade;

        cout << Nome;
        cout << "Digite seu nome: ";
    cin >> nome;

         cout << Idade;
        cout << "digite sua idade: ";
    cin >> idade;

        cout << Sexo;
        cout << "Digite seu sexo: ";
    cin >> sexo;

        if (sexo, "F" && idade <25)
        {
            
            cout << "Situação: ACEITA. ";
            cout << nome, " << Nome da pessoa:";
        }
        else
        {
            cout << "Situação: NÃO ACEITA. ";
            cout << nome;
        }
        
    return 0;
}