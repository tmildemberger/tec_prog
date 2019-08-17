#ifndef PRINCIPAL_HPP
#define PRINCIPAL_HPP

#include "pessoa.hpp"

class Principal {
public:
    Principal();
    void executar();
private:
    Pessoa Galileu;
    Pessoa Einstein;
    Pessoa Newton;

    int dia_atual;
    int mes_atual;
    int ano_atual;
};

#endif // PRINCIPAL_HPP