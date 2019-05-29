#include <iostream>
using namespace std;

#define Notas "Notas do Aluno - Aprovado ou Reprovado:\n\n\n";

int main () {
    int port, mat, geo, ing, media;

        cout << Notas;
        cout << "Entre com a nota de português: ";
    cin >> port;
        cout << "Entre com a nota de Matemática: ";
    cin >> mat;
        cout << "Entre com a nota de geografia: ";
    cin >> geo;
        cout << "Entre com a nota de Inglês: ";
    cin >> ing;

if ('Teste de Notas')
    {
        port, mat, geo, ing >= 7;
        cout << "Aluno Aprovado !\n\n\n";
    }
    
else
    {
        port, mat, geo, ing < 7;
        cout << "Aluno Reprovado !\n\n\n";
    }
    
    return 0;
}