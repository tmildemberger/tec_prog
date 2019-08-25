#include "universidade.hpp"
#include <cstring>
#include <iostream>

Universidade::Universidade(const char* nome) {
    std::strncpy(nome_, nome, 30);
    for (int i = 0; i < 50; ++i) {
        deptos[i] = nullptr;
    }
}

Universidade::~Universidade() {

}

void Universidade::setNome(const char* nome) {
    std::strncpy(nome_, nome, 30);
}

const char* Universidade::getNome() {
    return nome_;
}

void Universidade::setDepartamento(Departamento* depto, int idx) {
    deptos[idx] = depto;
}

void Universidade::imprimeDeptos() {
    for (int i = 0; i < 50; ++i) {
        if (deptos[i] != nullptr) {
            std::cout << deptos[i]->getNome() << '\n';
        }
    }
}