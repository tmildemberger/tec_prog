#include "disciplina.hpp"
#include <cstring>
#include <iostream>

Disciplina::Disciplina(int n_alunos, const char* nome) {
    max_alunos = n_alunos;
    numero_alunos = 0;
    std::strncpy(nome_, nome, 150);
}

Disciplina::~Disciplina() {

}

void Disciplina::setNome(const char* nome) {
    std::strncpy(nome_, nome, 150);
}

const char* Disciplina::getNome() {
    return nome_;
}

void Disciplina::setArea(const char* area) {
    std::strncpy(area_conhecimento, area, 150);
}

const char* Disciplina::getArea() {
    return area_conhecimento;
}

void Disciplina::setDepartamento(Departamento* depto) {
    depto_associado = depto;
    depto->incluaDisciplina(this);
}

Departamento* Disciplina::getDepartamento() {
    return depto_associado;
}

void Disciplina::incluaAluno(Aluno* aluno) {
    if (!aluno) {
        std::cout << "Aluno invalido\n";
    } else if (numero_alunos == max_alunos) {
        std::cout << "Aluno nao incluido por falta de espaco\n";
    } else {
        alunos.incluaAluno(aluno);
    }
}

void Disciplina::listeAlunos() {
    std::cout << "Alunos da disciplina " << nome_ << '\n';
    alunos.listeAlunos();
}

void Disciplina::listeAlunosRev() {
    std::cout << "Alunos da disciplina " << nome_ << '\n';
    alunos.listeAlunosRev();
}