#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  private:
    std::string nome;
    double salarioHora;  
    double horasTrabalhadas;

  public: 

    Empregado(){};
    virtual void printaDados(){};

    std::string getNome(){return nome;};
    double getSalarioHora(){return salarioHora;};
    double getHorasTrabalhadas(){return horasTrabalhadas;}

    void setNome(std::string Nome) {this->nome = Nome;};
    void setSalarioHora(double Salario){this->salarioHora = Salario;};
    void setHorasTrabalhadas(double trabalhado){this->horasTrabalhadas = trabalhado;};


    double pagamentoMes(){

      double t = horasTrabalhadas;
	
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
      }
	  return t * salarioHora;
    }
	
};

#endif