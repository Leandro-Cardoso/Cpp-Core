#include <iostream>

using namespace std;

double sum(double a, double b);
void print(string text = "Ola, mundo !!!");

int main() {
    double soma = sum(10, 15);

    cout << "\nSoma: " << soma;

    print();
    print("Leandro Cardoso");

    cout << "\n\n";

    return 0;
}

double sum(double a, double b) {
    return a + b;
}

void print(string text) {
    cout << "\n" << text;
}
