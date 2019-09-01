#ifndef ALUNO_HPP
#define ALUNO_HPP

#include "pessoa.hpp"

class Aluno : public Pessoa {
public:
    Aluno();
    Aluno(int dia_nc, int mes_nc, int ano_nc, int ra_aluno, const char* nome="");
    void inicializa_aluno(int dia_nc, int mes_nc, int ano_nc, int ra_aluno, const char* nome="");
    ~Aluno();

    void setRa(int novo_ra);
    int getRa();
private:
    int ra;
};

#endif // ALUNO_HPP
