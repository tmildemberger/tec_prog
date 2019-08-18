#include "departamento.hpp"
#include <cstring>

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