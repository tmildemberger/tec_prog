#ifndef UNIVERSIDADE_HPP
#define UNIVERSIDADE_HPP

#include "departamento.hpp"

class Universidade {
public:
    Universidade(const char* nome = "");
    ~Universidade();

    void setNome(const char* nome);
    const char* getNome();
    Departamento* getDepto();
private:
    char nome_[30];
    Departamento departamento;
};

#endif // UNIVERSIDADE_HPP