#include <iostream>
#include <list>

int main() {
    // Metodos da lista:
    // push_front(n), push_back(n), size(), front(), back(), pop_front(), pop_back(), sort(), reverse(), empty(), insert(it.begin(), i) e ereise(it.begin(), i).
    std::list<int> numbers;
    int n = 5;

    for (int i = 0; i < n; i++) {
        numbers.push_front(i); // Adicionar elemento na frente da lista.
        std::cout << "\nElemento da frente: '" << numbers.front(); // Mostrar elemento da frente da lista.
        std::cout << "\nElemento de tras: '" << numbers.back(); // Mostrar elemento da frente da lista.
        std::cout << "\nTamanho da lista: '" << numbers.size() << "\n"; // Mostrar tamanho da lista.
    }

    std::cout << "\nTamanho antes de remover ultimo: " << numbers.size() << " (" << numbers.back() << ")";

    numbers.pop_back(); // Remove o ultimo elemento.

    std::cout << "\nTamanho depois de remover ultimo: " << numbers.size() << " (" << numbers.back() << ")";

    // Iterator:
    std::list<char> caracteres = {'L', 'E', 'A', 'N', 'D', 'R', 'O'};
    std::list<char>::iterator it;
    it = caracteres.begin();

    std::cout << "\n\n";

    return 0;
}
