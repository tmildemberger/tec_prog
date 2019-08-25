#ifndef PRINCIPAL_HPP
#define PRINCIPAL_HPP

#include "professor.hpp"
#include "aluno.hpp"

class Principal {
public:
    Principal();
    void executar();
private:
    Professor Galileu;
    Professor Einstein;
    Professor Newton;

    Aluno Jao;

    Universidade UTFPR;
    Universidade Princeton;
    Universidade Cambridge;

    Departamento DAELN;
    Departamento DAINF;
    Departamento FisicaPrinceton;
    Departamento MatematicaCambridge;

    int dia_atual;
    int mes_atual;
    int ano_atual;
};

#endif // PRINCIPAL_HPP
