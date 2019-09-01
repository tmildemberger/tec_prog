#ifndef PRINCIPAL_HPP
#define PRINCIPAL_HPP

#include "universidade.hpp"
#include "departamento.hpp"
#include "professor.hpp"
#include "aluno.hpp"
#include "disciplina.hpp"

class Principal {
public:
    Principal();
    void executar();

    void inicializa();
    void inicializaUniversidades();
    void inicializaDepartamentos();
    void inicializaProfessores();
    void inicializaAlunos();
    void inicializaDisciplinas();

    void calcIdadeProfs();
    void univOndeProfsTrabalham();
    void depOndeProfsTrabalham();
    void listeDiscDeptos();
    void listeAlunosDisc();
private:
    Professor Galileu;
    Professor Einstein;
    Professor Newton;

    Aluno Jao;
    Aluno Jurek;
    Aluno Juao;

    Aluno AAAA;
    Aluno BBBB;
    Aluno CCCC;
    Aluno DDDD;

    Universidade UTFPR;
    Universidade Princeton;
    Universidade Cambridge;

    Departamento DAELN;
    Departamento DAINF;
    Departamento FisicaPrinceton;
    Departamento MatematicaCambridge;
    
    Disciplina FundProg;
    Disciplina TecProg;
    Disciplina Logica;
    Disciplina Dados;

    int dia_atual;
    int mes_atual;
    int ano_atual;
};

#endif // PRINCIPAL_HPP
