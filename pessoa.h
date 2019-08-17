#ifndef PESSOA_H
#define PESSOA_H

struct Pessoa {
    int dia;
    int mes;
    int ano;
    int idade;

    Pessoa(int dia_nasc, int mes_nasc, int ano_nasc);

    void calculaIdade(int dia_atual, int mes_atual, int ano_atual);
};


#endif // PESSOA_H