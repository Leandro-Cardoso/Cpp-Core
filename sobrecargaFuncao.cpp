#include <iostream>
#include <conio.h>

using namespace std;

int maisUm(int numero) {
    return numero + 1;
}

float maisUm(float numero) {
    return numero + 1;
}

int main() {
    cout << endl << maisUm(1) << endl;
    cout << maisUm(1.5f) << endl;
    return 0;
}
