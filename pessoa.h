#ifndef PESSOA_H
#define PESSOA_H

struct Pessoa {
public:
    Pessoa(int dia_nasc, int mes_nasc, int ano_nasc);

    void calculaIdade(int dia_atual, int mes_atual, int ano_atual);
    int informaIdade();

private:
    int dia;
    int mes;
    int ano;
    int idade;
};


#endif // PESSOA_H