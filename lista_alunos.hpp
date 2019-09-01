#ifndef LISTA_ALUNOS_HPP
#define LISTA_ALUNOS_HPP

class Aluno;

class ListaAlunos {
public:
    ListaAlunos();
    ~ListaAlunos();

    void incluaAluno(Aluno* aluno);
    void listeAlunos();
    void listeAlunosRev();
private:
    struct node {
        Aluno* data;
        node* prox;
        node* anta;
    };
    node* inicio;
    node* ultimo;
};

#endif // LISTA_ALUNOS_HPP