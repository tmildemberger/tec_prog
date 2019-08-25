#include "principal.hpp"
#include <iostream>
#include <vector>
#include <ctime>

Principal::Principal() {
    Galileu.inicializa(15, 2, 1564, "Galileu Galilei");
    Einstein.inicializa(14, 3, 1879, "Albert Einstein");
    Newton.inicializa(4, 1, 1643, "Isaac Newton");

    Jao.inicializa_aluno(20, 8, 2001, 1716555, "Jao da Silva");

    UTFPR.setNome("UTFPR");
    Princeton.setNome("Princeton");
    Cambridge.setNome("Cambridge");

    Galileu.setUnivAssociado(&UTFPR);
    Einstein.setUnivAssociado(&Princeton);
    Newton.setUnivAssociado(&Cambridge);

    DAELN.setNome("DAELN");
    DAINF.setNome("DAINF");
    FisicaPrinceton.setNome("Fisica");
    MatematicaCambridge.setNome("Matematica");

    UTFPR.setDepartamento(&DAELN, 1);
    UTFPR.setDepartamento(&DAINF, 0);
    Princeton.setDepartamento(&FisicaPrinceton, 0);
    Cambridge.setDepartamento(&MatematicaCambridge, 0);
    
    DAELN.setUniversidade(&UTFPR);
    DAINF.setUniversidade(&UTFPR);
    FisicaPrinceton.setUniversidade(&Princeton);
    MatematicaCambridge.setUniversidade(&Cambridge);

    Einstein.setDeptoAssociado(&FisicaPrinceton);
    Newton.setDeptoAssociado(&MatematicaCambridge);
    Galileu.setDeptoAssociado(&DAELN);

    std::time_t agora = std::time(nullptr);
    std::tm* local = std::localtime(&agora);
    dia_atual = local->tm_mday;
    mes_atual = local->tm_mon + 1;
    ano_atual = local->tm_year + 1900;

    // std::cout << "dmy:" << dia_atual << ' ' << mes_atual << ' ' << ano_atual << '\n';
}

void Principal::executar() {
    Galileu.calculaIdadeImprime(dia_atual, mes_atual, ano_atual);
    Einstein.calculaIdadeImprime(dia_atual, mes_atual, ano_atual);
    Newton.calculaIdadeImprime(dia_atual, mes_atual, ano_atual);

    Galileu.ondeTrabalho();
    Einstein.ondeTrabalho();
    Newton.ondeTrabalho();

    Galileu.meuDepartamento();

    std::cout << "Nome e RA do Jao: " << Jao.getNome() << ", " <<
                 Jao.getRa() << '\n';

    std::cout << sizeof (Aluno) << '\n';
    std::cout << sizeof (std::vector<Aluno>) << '\n';
}
