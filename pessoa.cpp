#include "pessoa.hpp"
#include <cstring>
#include <iostream>

Pessoa::Pessoa() {
    inicializa(0, 0, 0);
}

Pessoa::Pessoa(int dia_nasc, int mes_nasc, int ano_nasc, const char* nome) {
    inicializa(dia_nasc, mes_nasc, ano_nasc, nome);
}

void Pessoa::inicializa(int dia_nasc, int mes_nasc, int ano_nasc, const char* nome) {
    dia = dia_nasc;
    mes = mes_nasc;
    ano = ano_nasc;
    idade = -1;
    std::strncpy(nome_, nome, 30);
    univ_associada = nullptr;
}

Pessoa::~Pessoa() {
    
}

void Pessoa::calculaIdade(int dia_atual, int mes_atual, int ano_atual) {
    idade = ano_atual - ano;
    if (mes_atual < mes || (mes_atual == mes && dia_atual < dia)) {
        --idade;
    }
}

void Pessoa::calculaIdadeImprime(int dia_atual, int mes_atual, int ano_atual) {
    calculaIdade(dia_atual, mes_atual, ano_atual);
    imprimeIdade();
}

void Pessoa::imprimeIdade() {
    std::cout << "A idade da pessoa " << nome_ << " seria " << idade << '\n';
}

int Pessoa::informaIdade() {
    return idade;
}

void Pessoa::setUnivAssociada(Universidade* univ) {
    univ_associada = univ;
}

void Pessoa::setDeptoAssociada(Departamento* depto) {
    depto_associado = depto;
}

void Pessoa::ondeTrabalho() {
    std::cout << nome_ << " trabalha para a " << univ_associada->getNome() << '\n';
}

void Pessoa::meuDepartamento() {
    std::cout << nome_ << " trabalha no departamento " << depto_associado->getNome() << '\n';
}