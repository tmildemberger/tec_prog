#include "professor.hpp"
#include <iostream>

Professor::Professor() {
    
}

Professor::Professor(int dia_nasc, int mes_nasc, int ano_nasc, const char* nome) :
Pessoa(dia_nasc, mes_nasc, ano_nasc, nome) {
    
}

Professor::~Professor() {
    
}

void Professor::setUnivAssociado(Universidade* univ) {
    univ_associada = univ;
}

void Professor::setDeptoAssociado(Departamento* depto) {
    depto_associado = depto;
}

void Professor::ondeTrabalho() {
    std::cout << nome_ << " trabalha para a " << univ_associada->getNome() << '\n';
}

void Professor::meuDepartamento() {
    std::cout << nome_ << " trabalha no departamento " << depto_associado->getNome() << '\n';
}
