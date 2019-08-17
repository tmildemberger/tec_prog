#include <stdio.h>
#include "pessoa.h"

int main() {
    Pessoa Einstein;
    Pessoa Newton;

    Einstein.dia = 14;
    Einstein.mes = 3;
    Einstein.ano = 1879;

    Newton.dia = 4;
    Newton.mes = 1;
    Newton.ano = 1643;

    Einstein.idade = calculaIdade(Einstein, 17, 1, 2019);
    Newton.idade = calculaIdade(Newton, 17, 8, 2019);

    printf("A pessoa Einstein teria %d anos de idade\n", Einstein.idade);
    printf("A pessoa Newton teria %d anos de idade\n", Newton.idade);

    return 0;
}