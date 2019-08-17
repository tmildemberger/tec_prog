#include <cstdio>
#include "pessoa.h"

int main() {
    Pessoa Einstein (14, 3, 1879);
    Pessoa Newton (4, 1, 1643);

    Einstein.calculaIdade(17, 1, 2019);
    Newton.calculaIdade(17, 8, 2019);

    std::printf("A pessoa Einstein teria %d anos de idade\n", Einstein.idade);
    std::printf("A pessoa Newton teria %d anos de idade\n", Newton.idade);

    return 0;
}