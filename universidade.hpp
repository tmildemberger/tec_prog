#ifndef UNIVERSIDADE_HPP
#define UNIVERSIDADE_HPP

#include "departamento.hpp"

class Universidade {
public:
    Universidade(const char* nome = "");
    ~Universidade();

    void setNome(const char* nome);
    const char* getNome();
    void setDepartamento(Departamento* depto);
private:
    char nome_[30];
    Departamento* depto_;
};

#endif // UNIVERSIDADE_HPP