#include <iostream>

// Evitar usar o namespace em projetos grandes:
// using namespace std;

int main() {
    // Melhor pratica é usar std:: por exemplo:
    std::cout << std::endl << "Teste..." << std::endl;

    // Melhor pratica para projetos simples:
    using std::cout;
    using std::endl;
    cout << "Teste 2..." << endl;

    return 0;
}
