#ifndef DEPARTAMENTO_HPP
#define DEPARTAMENTO_HPP

class Departamento {
public:
    Departamento(const char* nome = "");
    ~Departamento();

    void setNome(const char* nome);
    const char* getNome();
private:
    char nome_[30];
};

#endif // DEPARTAMENTO_HPP