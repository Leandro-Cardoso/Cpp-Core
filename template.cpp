#include <iostream>
#include <conio.h>

using namespace std;

template <class TIPOGENERICO> // TIPO GENERICO DE DADOS.
TIPOGENERICO maisUm(TIPOGENERICO numero) {
    return numero + 1;
}

int main() {
    cout << endl << maisUm(1) << typeid(maisUm(1)).name() << endl;
    cout << maisUm(1.5f) << typeid(maisUm(1.5f)).name() << endl;
    cout << maisUm(1.55435435473543876846) << typeid(maisUm(1.55435435473543876846)).name() << endl;
    return 0;
}
