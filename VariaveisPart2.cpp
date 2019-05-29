#include <iostream>
using namespace std;

    int n1,n2; //Variáveis Globais podem ser acessadas por qualquer local do nosso codigo.

int main () {

    int n3,n4; //Variáveis Locais só podem ser acessadas dentro da função.

    //Operadores matemáticos : (* = Multiplicação), (/ = Divisão), (% = Resto da Divisão), (+ = Adição), (- = Subtração) 

    int mult, divi, restD, adi, sub, resultadoF;

    n1=3; //Variáveis Globais.
    n2=6; //Variáveis Globais.

    n3=9; //Variáveis Locais.
    n4=18; // Variáveis Locais.

        mult= n1*n2*n3*n4;
    cout << "A MULTIPLICAÇÃO das Variaves Globais e Locais é: " << mult << "\n\n";

        divi= n1/n2/n3/n4;
    cout << "A DIVISÃO das Variaves Globais e Locais é: " << divi << "\n\n";

        restD= n1%n2%n3%n4;
    cout << "O RESTO DA DIVISÃO das Variaves Globais e Locais é: " << restD << "\n\n";

        adi= n1+n2+n3+n4;
    cout << "A ADIÇÃO das Variaves Globais e Locais é: "  << adi << "\n\n";  

        sub=n1-n2-n3-n4;
    cout << "A SUBTRAÇÃO das Variaves Globais e Locais é: "  << sub << "\n\n";

    return 0;
}