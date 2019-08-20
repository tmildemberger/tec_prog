#ifndef PRINCIPAL_HPP
#define PRINCIPAL_HPP

#include "pessoa.hpp"
#include "aluno.hpp"

class Principal {
public:
    Principal();
    void executar();
private:
    Pessoa Galileu;
    Pessoa Einstein;
    Pessoa Newton;

    Aluno Jao;

    Universidade UTFPR;
    Universidade Princeton;
    Universidade Cambridge;

    int dia_atual;
    int mes_atual;
    int ano_atual;
};

#endif // PRINCIPAL_HPP
