#ifndef UNIVERSIDADE_HPP
#define UNIVERSIDADE_HPP

#include "departamento.hpp"

class Universidade {
public:
    Universidade(const char* nome = "");
    ~Universidade();

    void setNome(const char* nome);
    const char* getNome();
    void setDepartamento(Departamento* depto, int idx);
    void imprimeDeptos();
private:
    char nome_[30];
    Departamento* deptos[50];
};

#endif // UNIVERSIDADE_HPP