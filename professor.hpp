#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include "pessoa.hpp"

class Professor : public Pessoa {
public:
    Professor();
    Professor(int dia_nasc, int mes_nasc, int ano_nasc, const char* nome = "");
    ~Professor();
    
    void setUnivAssociado(Universidade* univ);
    void setDeptoAssociado(Departamento* depto);
    void ondeTrabalho();
    void meuDepartamento();
private:
    Universidade* univ_associada;
    Departamento* depto_associado;
};

#endif // PROFESSOR_HPP