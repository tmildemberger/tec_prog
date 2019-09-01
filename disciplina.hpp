#ifndef DISCIPLINA_HPP
#define DISCIPLINA_HPP

#include "departamento.hpp"
#include "lista_alunos.hpp"

class Aluno;

class Disciplina {
public:
    Disciplina(int n_alunos=45, const char* nome="");
    ~Disciplina();

    void setNome(const char* nome);
    const char* getNome();

    void setArea(const char* area);
    const char* getArea();

    void setDepartamento(Departamento* depto);
    Departamento* getDepartamento();

    void incluaAluno(Aluno* aluno);
    void listeAlunos();
    void listeAlunosRev();
private:
    char nome_[150];
    char area_conhecimento[150];
    int max_alunos;
    int numero_alunos;
    Departamento* depto_associado;

    ListaAlunos alunos;
};

#endif // DISCIPLINA_HPP