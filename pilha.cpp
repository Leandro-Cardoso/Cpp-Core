#include <iostream>
#include <stack>

int main() {
    // Funcoes da fila (stack):
    // push(elemento), pop(), size(), top() e empty().
    std::stack <char> letras;

    // Verificar se está vazia "empty()":
    if (letras.empty()) {
        std::cout << "\nA pilha esta vazia\n";
    }

    // Adicionando os elementos "push(elemento)":
    letras.push('L');
    letras.push('E');
    letras.push('A');
    letras.push('N');
    letras.push('D');
    letras.push('R');
    letras.push('O');

    std::cout << "\nTamanho da pilha cheia: " << letras.size() << "\n";

    // Removendo os elementos "pop()":
    int n = letras.size(); // Ver tamanho "size()".

    for (int i = 0; i < n; i++) {
        std::cout << "\nTopo da pilha: " << letras.top(); // Ver topo "top()".
        letras.pop();
        std::cout << "\nTamanho da pilha: " << letras.size() << "\n";
    }
    
    std::cout << "\n";

    return 0;
}
