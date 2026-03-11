#include <iostream>

using namespace std;

int main() {
    int matriz[3][3];
    int matriz2[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    // Pegar tamanho do array e da matriz:
    int sizeArray = sizeof(matriz[0]) / sizeof(int);
    int sizeMatriz = sizeof(matriz) / sizeof(matriz[0]);
    
    int sizeArray2 = sizeof(matriz2[0]) / sizeof(int);
    int sizeMatriz2 = sizeof(matriz2) / sizeof(matriz2[0]);

    // Atribuindo valor:
    for (int y = 0; y < sizeMatriz; y++) {
        for (int x = 0; x < sizeArray; x++) {
            matriz[y][x] = sizeArray * y + x + 1;
        }
    }

    // Print:
    for (int y = 0; y < sizeMatriz; y++) {
        cout << endl;
        for (int x = 0; x < sizeArray; x++) {
            cout << matriz[y][x] << " ";
        }
    }

    cout << endl;

    for (int y = 0; y < sizeMatriz2; y++) {
        cout << endl;
        for (int x = 0; x < sizeArray2; x++) {
            cout << matriz2[y][x] << " ";
        }
    }
    
    cout << endl << endl;

    return 0;
}
