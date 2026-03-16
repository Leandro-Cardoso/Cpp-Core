#include <iostream>

void counter(int number, int count = 0);

int main() {
    std::cout << "\n";

    counter(10);

    std::cout << "\n";

    return 0;
}

void counter(int number, int count) {
    std::cout << count << "\n";
    if (number > count) {
        counter(number, ++count);
    }
}
