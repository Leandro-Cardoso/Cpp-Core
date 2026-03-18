#include <iostream>

int main() {

    // É uma lista de inteiros comecando em 0 por padrao.
    enum maos {pedra, papel, tesoura};
    maos mao;

    mao = tesoura;

    std::cout << "\nMao: " << mao << "\n";

    // Definindo numero de inicio, o restante que nao for definido segue a sequencia.
    enum meses {janeiro=1, fevereiro, março, abril, maio, junho, julho, agosto, setembro, outubro, novembro, dezembro};

    meses mes = outubro;

    std::cout << "\nMes: " << mes << "\n\n";

    return 0;
}
