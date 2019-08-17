#include "principal.hpp"
#include <iostream>
#include <ctime>

Principal::Principal() {
    Galileu.inicializa(15, 2, 1564, "Galileu Galilei");
    Einstein.inicializa(14, 3, 1879, "Albert Einstein");
    Newton.inicializa(4, 1, 1643, "Isaac Newton");

    std::time_t agora = std::time(nullptr);
    std::tm* local = std::localtime(&agora);
    dia_atual = local->tm_mday;
    mes_atual = local->tm_mon + 1;
    ano_atual = local->tm_year + 1900;

    // std::cout << "dmy:" << dia_atual << ' ' << mes_atual << ' ' << ano_atual << '\n';
}

void Principal::executar() {
    Galileu.calculaIdade(dia_atual, mes_atual, ano_atual);
    Einstein.calculaIdade(dia_atual, mes_atual, ano_atual);
    Newton.calculaIdade(dia_atual, mes_atual, ano_atual);
}