#include "aluno.hpp"

Aluno::Aluno() {
    inicializa_aluno(0, 0, 0, 0);
}

Aluno::Aluno(int dia_nc, int mes_nc, int ano_nc, int ra_aluno, const char* nome) :
Pessoa(dia_nc, mes_nc, ano_nc, nome) {
    ra = ra_aluno;
}

void Aluno::inicializa_aluno(int dia_nc, int mes_nc, int ano_nc, int ra_aluno, const char* nome) {
    inicializa(dia_nc, mes_nc, ano_nc, nome);
    ra = ra_aluno;
}

Aluno::~Aluno() {

}

void Aluno::setRa(int novo_ra) {
    ra = novo_ra;
}

int Aluno::getRa() {
    return ra;
}
