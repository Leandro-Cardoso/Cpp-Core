#include <iostream>

using namespace std;

int main() {
    // Mesma regra da matematica na ordem de resolucao.

    cout << endl << "OPERADORES:" << endl;

    // Soma:
    cout << "\t10 + 5 = " << 10 + 5 << " (soma)" << endl;

    // Subtracao:
    cout << "\t10 - 5 = " << 10 + 5 << " (subtracao)" << endl;

    // Multiplicacao:
    cout << "\t10 * 5 = " << 10 * 5 << " (multiplicacao)" << endl;

    // Divisao:
    cout << "\t10 / 5 = " << 10 / 5 << "  (divisao)" << endl;

    // Resto da divisao:
    cout << "\t10 % 5 = " << 10 % 5 << "  (resto da divisao)" << endl;

    // Incremento:
    int incremento = 1;
    cout << endl << "INCREMENTO DE 1:" << endl;
    cout << "\tAntes        = " << incremento << endl;
    incremento += 1;
    cout << "\tDepois       = " << incremento << endl;
    incremento++;
    cout << "\tDepois do ++ = " << incremento << endl;

    // Decrecimo:
    int decrecimo = 10;
    cout << endl << "DECRECIMO DE 1:" << endl;
    cout << "\tAntes        = " << decrecimo << endl;
    decrecimo -= 1;
    cout << "\tDepois       = " << decrecimo << endl;
    decrecimo--;
    cout << "\tDepois do -- = " << decrecimo << endl;

    /*
    Pode ser usado tambem:
    var *= n;
    var /= n;
    var %= n;
    */

    // Pos e pre incremento:
    int num = 1, num2 = 1;
    cout << endl << "POS E PRE INCREMENTO:" << endl;
    cout << "\tPasso 1: " << ++num << " (PRE) | " << num2++ << " (POS)" << endl;
    cout << "\tPasso 2: " << ++num << " (PRE) | " << num2++ << " (POS)" << endl;
    cout << "\tPasso 3: " << ++num << " (PRE) | " << num2++ << " (POS)" << endl;
    cout << "\tPasso 4: " << ++num << " (PRE) | " << num2++ << " (POS)" << endl;
    cout << "\tPasso 5: " << ++num << " (PRE) | " << num2++ << " (POS)" << endl;

    return 0;
}