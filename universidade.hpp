#ifndef UNIVERSIDADE_HPP
#define UNIVERSIDADE_HPP

class Universidade {
public:
    Universidade(const char* nome = "");
    ~Universidade();

    void setNome(const char* nome);
    const char* getNome();
private:
    char nome_[30];
};

#endif // UNIVERSIDADE_HPP