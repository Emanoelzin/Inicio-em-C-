#include <iostream>
using namespace std;

int main (){

    int n1,n2;

    n1=3; // Variável Local.
    n2=6; // Variável Local.

    cout << "Sem o Incremento: " << n1 << "\n\n";

        n1= n1 + 6; // Incrementando uma Variável.
    cout << "Com o Incremento de + 6 = " << n1 << "\n\n";

    cout << "Sem o Decremento: " << n2 << "\n\n";

        n2= n2 - 3;
    cout << "Com o Decremento de - 3 = " << n2 << "\n\n";

    return 0;
}