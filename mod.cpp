#include <iostream>

int mod(int number, int divider);

int main() {
    std::cout << "\nO resto de 17 / 2 é " << mod(17, 2);
    std::cout << "\nO resto de 16 / 2 é " << mod(16, 2) << "\n\n";
    return 0;
}

int mod(int number, int divider) {
    while (number >= divider) {
        number = number - divider;
    }
    return number;
}
