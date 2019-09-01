#include "departamento.hpp"
#include "disciplina.hpp"
#include <cstring>
#include <iostream>

Departamento::Departamento(const char* nome) {
    std::strncpy(nome_, nome, 30);
}

Departamento::~Departamento() {

}

void Departamento::setNome(const char* nome) {
    std::strncpy(nome_, nome, 30);
}

const char* Departamento::getNome() {
    return nome_;
}

void Departamento::setUniversidade(Universidade* uni) {
    univ = uni;
}

void Departamento::incluaDisciplina(Disciplina* disc) {
    disciplinas.push_back(disc);
}

void Departamento::listeDisciplinas() {
    std::cout << "Disciplinas do departamento " << nome_ << '\n';
    for (auto d : disciplinas) {
        std::cout << "disciplina " << d->getNome() << '\n';
    }
}

void Departamento::listeDisciplinasRev() {
    std::cout << "Disciplinas do departamento " << nome_ << '\n';
    for (auto i { disciplinas.rbegin() }; i != disciplinas.rend(); ++i) {
        std::cout << "disciplina " << (*i)->getNome() << '\n';
    }
}