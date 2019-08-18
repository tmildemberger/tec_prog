#include "universidade.hpp"
#include <cstring>

Universidade::Universidade(const char* nome) {
    std::strncpy(nome_, nome, 30);
}

Universidade::~Universidade() {

}

void Universidade::setNome(const char* nome) {
    std::strncpy(nome_, nome, 30);
}

const char* Universidade::getNome() {
    return nome_;
}

Departamento* Universidade::getDepto() {
    return &departamento;
}