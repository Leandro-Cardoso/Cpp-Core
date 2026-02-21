#include <iostream>
#include <iomanip> // Para ver o cout com mais precisao.

using namespace std;

int main() {
    int algo; // Sem valor padrão.
    int algoMais = 10; // Com valor padrão.

    // Reservar memoria:
    bool ligado = true;                             // Variabel binária (verdadeira 1 ou falsa 0) (1 byte ou 8 bits).
    char letra = 'L';                               // Variavel caracter (1 byte ou 8 bits).
    short numeroMenor = 32000;                      // Variavel inteira (2 bytes ou 16 bits).
    int numero = 2000000000;                        // Variavel inteira (4 bytes ou 32 bits).
    float decimalResumida;                          // Variavel decimal aproximada (4 bytes ou 32 bits).
    long long numeroGrande = 9000000000000000000LL; // Variavel inteira (8 bytes ou 64 bits).
    double decimalPrecisa;                          // Variavel decimal com precisão (8 bytes ou 64 bits).
    long double decimalMuitoPrecisa;                // Variavel decimal com muita precisão (16 bytes ou 128 bits).
    string texto = "Leandro";                       // Variavel de texto.

    // TODO: FAZER REPRESENTACOES DOS DECIMAIS.

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
