#ifndef DEPARTAMENTO_HPP
#define DEPARTAMENTO_HPP

class Universidade;

class Departamento {
public:
    Departamento(const char* nome = "");
    ~Departamento();

    void setNome(const char* nome);
    const char* getNome();
    void setUniversidade(Universidade* uni);
private:
    char nome_[30];
    Universidade* univ;
};

#endif // DEPARTAMENTO_HPP