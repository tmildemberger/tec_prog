#ifndef PESSOA_HPP
#define PESSOA_HPP

#include "universidade.hpp"
#include "departamento.hpp"

class Pessoa {
public:
    Pessoa();
    Pessoa(int dia_nasc, int mes_nasc, int ano_nasc, const char* nome = "");
    void inicializa(int dia_nasc, int mes_nasc, int ano_nasc, const char* nome = "");
    ~Pessoa();

    void calculaIdade(int dia_atual, int mes_atual, int ano_atual);
    void calculaIdadeImprime(int dia_atual, int mes_atual, int ano_atual);
    void imprimeIdade();
    int informaIdade();

    const char* getNome();
protected:
    int dia;
    int mes;
    int ano;
    int idade;
    char nome_[30];
};


#endif // PESSOA_HPP
