#include "pessoa.h"

Pessoa::Pessoa(int dia_nasc, int mes_nasc, int ano_nasc) :
    dia(dia_nasc), mes(mes_nasc), ano(ano_nasc), idade(-1) {

}

void Pessoa::calculaIdade(int dia_atual, int mes_atual, int ano_atual) {
    idade = ano_atual - ano;
    if (mes_atual < mes || (mes_atual == mes && dia_atual < dia)) {
        --idade;
    }
}