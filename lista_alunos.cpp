#include "lista_alunos.hpp"
#include "aluno.hpp"
#include <iostream>

ListaAlunos::ListaAlunos()
: inicio { nullptr }, ultimo { nullptr } {
    
}

ListaAlunos::~ListaAlunos() {

}

void ListaAlunos::incluaAluno(Aluno* aluno) {
    if (inicio == nullptr) {
        inicio = ultimo = new node { aluno, nullptr, nullptr };
    } else {
        ultimo->prox = new node { aluno, nullptr, nullptr };
        ultimo->prox->anta = ultimo;
        ultimo = ultimo->prox;
    }
}

void ListaAlunos::listeAlunos() {
    node* ite { inicio };
    while (ite) {
        std::cout << "aluno " << ite->data->getNome() << '\n';
        ite = ite->prox;
    }
}

void ListaAlunos::listeAlunosRev() {
    node* ite { ultimo };
    while (ite) {
        std::cout << "aluno " << ite->data->getNome() << '\n';
        ite = ite->anta;
    }
}