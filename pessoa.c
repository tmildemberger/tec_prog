#include "pessoa.h"

void calculaIdade(Pessoa *p, int dia_atual, int mes_atual, int ano_atual) {
    p->idade = ano_atual - p->ano;
    if (mes_atual < p->mes || (mes_atual == p->mes && dia_atual < p->dia)) {
        --p->idade;
    }
}