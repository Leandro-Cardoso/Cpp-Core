#include <iostream>

using namespace std;

// Macros:
#define PI 3.14
#define PRINT cout << "\tPI: " << PI << " (comando)" << endl;

// Variavel globais:
int ANO = 2026;

int main() {
    // Declaracao multipla de variaveis:
    int a = 10, b = 20, c = 30;
    int d, e, f;
    cout << endl << "Declaracao multipla de variaveis:" << endl;
    cout << "\t" << a << ", " << b << " e " << c << endl;

    // Macros:
    cout << endl << "Macros:" << endl;
    cout << "\tPI: " << PI << endl;
    PRINT

    // Variavel globais:
    cout << endl << "Variavel globais:" << endl;
    cout << "\tANO: " << ANO << endl;

    // Constantes:
    const int GRAVIDADE = 10;
    cout << endl << "Constantes:" << endl;
    cout << "\tGRAVIDADE: " << GRAVIDADE << endl;

    return 0;
}
