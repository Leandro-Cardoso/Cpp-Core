#include <iostream>
#include <conio.h>

using namespace std;

// A mesma função pode ter mais de uma forma de receber atributo.
int maisUm(int numero);
float maisUm(float numero);
int maisUm(int numero, int numero2);

int main() {
    cout << endl << maisUm(1) << endl;
    cout << maisUm(1.5f) << endl;
    cout << maisUm(2, 2) << endl;
    return 0;
}

int maisUm(int numero) {
    return numero + 1;
}

float maisUm(float numero) {
    return numero + 1;
}

int maisUm(int numero, int numero2) {
    return numero + numero2 + 1;
}
