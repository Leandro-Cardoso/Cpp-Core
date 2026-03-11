#include <iostream>

using namespace std;

// TODO: Por no for:
// O for pode ser passado mais de uma variavel ou incrementado ou decrementado mais de uma variavel.

int main() {
    int vector[5];
    int vector2[5] = {10, 20, 30, 40, 50};

    // Pegar tamanho do array:
    // sizeof() retorna o tamanho em bytes no caso 4 (tamanho do int) * 5 (tamanho do array) = 20. Se dividir por 4 (tamanho do int), vai dar o tamanho exato.
    int n = sizeof(vector) / sizeof(int);
    int n2 = sizeof(vector2) / sizeof(int);

    // Atribuindo valor:
    for (int i = 0; i < n; i++) {
        vector[i] = i + 1;
    }

    // Print:
    for (int i = 0; i < n; i++) {
        cout << endl << vector[i];
    }

    cout << endl;

    for (int i = 0; i < n2; i++) {
        cout << endl << vector2[i];
    }

    cout << endl << endl;

    return 0;
}
