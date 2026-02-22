#include <iostream>
#include <limits> // Para ver os limites.
#include <iomanip> // Para ver o cout com mais precisao.

using namespace std;

int main() {
    int algo; // Sem valor padrão.
    int algoMais = 10; // Com valor padrão.

    // Reservar memoria:
    bool ligado = true;                                        // Variabel binária (verdadeira 1 ou falsa 0).
    char letra = 'L';                                          // Variavel caracter.
    short numeroMenor = numeric_limits<short>::max();          // Variavel inteira                    (10).
    int numero = numeric_limits<int>::max();                   // Variavel inteira                    (10).
    float decimalResumida = numeric_limits<float>::max();      // Variavel decimal aproximada         (10.11f).
    long long numeroGrande = numeric_limits<long long>::max(); // Variavel inteira                    (10LL).
    double decimalPrecisa = numeric_limits<double>::max();     // Variavel decimal com precisão       (10.11).
    long double decimalMuitoPrecisa = 0.0;                     // Variavel decimal com muita precisão (10.11L).
    string texto = "Leandro";                                  // Variavel de texto.

    // Tamanhos:
    cout << endl << "> TAMANHOS: ";
    cout << endl << "\tbool:        " << sizeof(bool) << " byte";
    cout << endl << "\tchar:        " << sizeof(char) << " byte";
    cout << endl << "\tshort:       " << sizeof(short) << " bytes";
    cout << endl << "\tint:         " << sizeof(int) << " bytes";
    cout << endl << "\tlong:        " << sizeof(long) << " bytes";
    cout << endl << "\tfloat:       " << sizeof(float) << " bytes";
    cout << endl << "\tlong long:   " << sizeof(long long) << " bytes";
    cout << endl << "\tdouble:      " << sizeof(double) << " bytes";
    cout << endl << "\tlong double: " << sizeof(long double) << " bytes" << endl;

    // Exemplos:
    cout << fixed << setprecision(30); // Para ver o cout com mais precisao (30 casas).

    cout << endl << "> EXEMPLOS: ";
    cout << endl << "\tligado:                " << ligado;
    cout << endl << "\tletra:                 " << letra;
    cout << endl << "\tnumero menor:          " << numeroMenor;
    cout << endl << "\tnumero:                " << numero;
    cout << endl << "\tnumero grande:         " << numeroGrande;
    cout << endl << "\tdecimal resumida:      " << decimalResumida;
    cout << endl << "\tdecimal precisa:       " << decimalPrecisa;
    cout << endl << "\tdecimal muito precisa: " << decimalMuitoPrecisa;
    cout << endl << "\ttexto:                 " << texto << endl;

    return 0;
}
