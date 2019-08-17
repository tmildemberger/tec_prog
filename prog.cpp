#include <cstdio>
#include "pessoa.hpp"

int main() {
    Pessoa Galileu (15, 2, 1564, "Galileu Galilei");
    Pessoa Einstein (14, 3, 1879, "Albert Einstein");
    Pessoa Newton (4, 1, 1643, "Isaac Newton");

    Galileu.calculaIdade(17, 8, 2019);
    Einstein.calculaIdade(17, 8, 2019);
    Newton.calculaIdade(17, 8, 2019);

    return 0;
}