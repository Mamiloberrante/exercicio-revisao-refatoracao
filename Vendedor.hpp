#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Empregado.hpp"

class Vendedor : public Empregado {

  private:
    double quotaMensalVendas;

  public:

    Vendedor(std::string Nome, double salario, double horas, double quota);
	  double quotaTotalAnual();

    void printaDados() override;

    double getQuota(){return quotaMensalVendas;};
    void setQuota(double quota){this->quotaMensalVendas = quota;};
};

#endif

