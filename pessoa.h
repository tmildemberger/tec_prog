#ifndef PESSOA_H
#define PESSOA_H

struct Pessoa {
    int dia;
    int mes;
    int ano;
    int idade;
};

void calculaIdade(Pessoa& p, int dia_atual, int mes_atual, int ano_atual);

#endif // PESSOA_H