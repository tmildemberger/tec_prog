#include "pessoa.hpp"
#include <cstring>
#include <iostream>

Pessoa::Pessoa(int dia_nasc, int mes_nasc, int ano_nasc, const char* nome) :
    dia(dia_nasc), mes(mes_nasc), ano(ano_nasc), idade(-1) {
    std::strncpy(nome_, nome, 30);
}

void Pessoa::calculaIdade(int dia_atual, int mes_atual, int ano_atual) {
    idade = ano_atual - ano;
    if (mes_atual < mes || (mes_atual == mes && dia_atual < dia)) {
        --idade;
    }
    std ::cout << "A idade da pessoa " << nome_ << " seria " << idade << '\n';
}

int Pessoa::informaIdade() {
    return idade;
}