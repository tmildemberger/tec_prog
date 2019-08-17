#include <cstdio>
#include "pessoa.h"

int main() {
    Pessoa Einstein;
    Pessoa Newton;

    Einstein.dia = 14;
    Einstein.mes = 3;
    Einstein.ano = 1879;
    Einstein.idade = -1;

    Newton.dia = 4;
    Newton.mes = 1;
    Newton.ano = 1643;
    Newton.idade = -1;

    calculaIdade(Einstein, 17, 1, 2019);
    calculaIdade(Newton, 17, 8, 2019);

    std::printf("A pessoa Einstein teria %d anos de idade\n", Einstein.idade);
    std::printf("A pessoa Newton teria %d anos de idade\n", Newton.idade);

    return 0;
}