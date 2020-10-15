#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include "Empregado.hpp"

class Engenheiro : public Empregado {

  private:
	  int projetos;

  public:

    Engenheiro(std::string Nome, double salario, double horas, int proj);

    int getProjetos(){return this-> projetos;};

    void setProjetos(int numero_projetos){this->projetos = numero_projetos;};

    void printaDados() override;
};

#endif