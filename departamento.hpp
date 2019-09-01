#ifndef DEPARTAMENTO_HPP
#define DEPARTAMENTO_HPP
#include <list>

class Universidade;
class Disciplina;

class Departamento {
public:
    Departamento(const char* nome = "");
    ~Departamento();

    void setNome(const char* nome);
    const char* getNome();
    void setUniversidade(Universidade* uni);
    
    void incluaDisciplina(Disciplina* disc);
    void listeDisciplinas();
    void listeDisciplinasRev();
private:
    char nome_[30];
    Universidade* univ;
    std::list<Disciplina*> disciplinas;
};

#endif // DEPARTAMENTO_HPP