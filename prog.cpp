#include "pessoa.hpp"
#include <iostream>

int main() {
    Pessoa Galileu (15, 2, 1564, "Galileu Galilei");
    Pessoa Einstein (14, 3, 1879, "Albert Einstein");
    Pessoa Newton (4, 1, 1643, "Isaac Newton");

    int dia, mes, ano;
    std::cout << "Informe o dia, mes e ano atuais:\n";
    std::cin >> dia >> mes >> ano;

    Galileu.calculaIdade(dia, mes, ano);
    Einstein.calculaIdade(dia, mes, ano);
    Newton.calculaIdade(dia, mes, ano);

    return 0;
}