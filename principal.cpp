#include "principal.hpp"
#include <iostream>
#include <vector>
#include <ctime>

Principal::Principal() {
    std::time_t agora = std::time(nullptr);
    std::tm* local = std::localtime(&agora);
    dia_atual = local->tm_mday;
    mes_atual = local->tm_mon + 1;
    ano_atual = local->tm_year + 1900;

    inicializa();
    // std::cout << "dmy:" << dia_atual << ' ' << mes_atual << ' ' << ano_atual << '\n';
}

void Principal::inicializa() {
    inicializaUniversidades();
    inicializaDepartamentos();
    inicializaProfessores();
    inicializaAlunos();
    inicializaDisciplinas();
}

void Principal::inicializaUniversidades() {
    UTFPR.setNome("UTFPR");
    Princeton.setNome("Princeton");
    Cambridge.setNome("Cambridge");

    UTFPR.setDepartamento(&DAELN, 1);
    UTFPR.setDepartamento(&DAINF, 0);
    Princeton.setDepartamento(&FisicaPrinceton, 0);
    Cambridge.setDepartamento(&MatematicaCambridge, 0);
}

void Principal::inicializaDepartamentos() {
    DAELN.setNome("DAELN");
    DAINF.setNome("DAINF");
    FisicaPrinceton.setNome("Fisica");
    MatematicaCambridge.setNome("Matematica");

    DAELN.setUniversidade(&UTFPR);
    DAINF.setUniversidade(&UTFPR);
    FisicaPrinceton.setUniversidade(&Princeton);
    MatematicaCambridge.setUniversidade(&Cambridge);
}

void Principal::inicializaProfessores() {
    Galileu.inicializa(15, 2, 1564, "Galileu Galilei");
    Einstein.inicializa(14, 3, 1879, "Albert Einstein");
    Newton.inicializa(4, 1, 1643, "Isaac Newton");

    Jao.inicializa_aluno(20, 8, 2001, 1716555, "Jao da Silva");
    
    Galileu.setUnivAssociado(&UTFPR);
    Einstein.setUnivAssociado(&Princeton);
    Newton.setUnivAssociado(&Cambridge);

    Einstein.setDeptoAssociado(&FisicaPrinceton);
    Newton.setDeptoAssociado(&MatematicaCambridge);
    Galileu.setDeptoAssociado(&DAELN);
}

void Principal::inicializaAlunos() {
    Jao.setNome("JAO");
    Jurek.setNome("Jurek");
    Juao.setNome("Juao");
    AAAA.setNome("AAAA");
    BBBB.setNome("BBBB");
    CCCC.setNome("CCCC");
    DDDD.setNome("DDDD");
}

void Principal::inicializaDisciplinas() {
    FundProg.setNome("Fundamentos de Programacao");
    TecProg.setNome("Tecnicas de Programacao");
    Logica.setNome("Intro. Logica p Computacao");
    Dados.setNome("Estruturas de Dados");

    FundProg.setDepartamento(&DAINF);
    TecProg.setDepartamento(&DAINF);
    Logica.setDepartamento(&DAINF);
    Dados.setDepartamento(&DAINF);

    Dados.incluaAluno(&Jao);
    Dados.incluaAluno(&Jurek);
    Dados.incluaAluno(&Juao);
    Dados.incluaAluno(&AAAA);
    Dados.incluaAluno(&BBBB);

    TecProg.incluaAluno(&AAAA);
    TecProg.incluaAluno(&BBBB);
    TecProg.incluaAluno(&CCCC);
    TecProg.incluaAluno(&Jao);
    TecProg.incluaAluno(&DDDD);
    TecProg.incluaAluno(&Juao);
}

void Principal::calcIdadeProfs() {
    Galileu.calculaIdadeImprime(dia_atual, mes_atual, ano_atual);
    Einstein.calculaIdadeImprime(dia_atual, mes_atual, ano_atual);
    Newton.calculaIdadeImprime(dia_atual, mes_atual, ano_atual);
}

void Principal::univOndeProfsTrabalham() {
    Galileu.ondeTrabalho();
    Einstein.ondeTrabalho();
    Newton.ondeTrabalho();
}

void Principal::depOndeProfsTrabalham() {
    Galileu.meuDepartamento();
    Einstein.meuDepartamento();
    Newton.meuDepartamento();
}

void Principal::listeDiscDeptos() {

}

void Principal::listeAlunosDisc() {
    Dados.listeAlunos();
    Dados.listeAlunosRev();

    TecProg.listeAlunos();
    TecProg.listeAlunosRev();
}

void Principal::executar() {
    calcIdadeProfs();
    univOndeProfsTrabalham();
    depOndeProfsTrabalham();
    listeDiscDeptos();
    listeAlunosDisc();
    /*
    std::cout << "Nome e RA do Jao: " << Jao.getNome() << ", " <<
                 Jao.getRa() << '\n';

    std::cout << sizeof (Aluno) << '\n';
    std::cout << sizeof (std::vector<Aluno>) << '\n';
    */
}
