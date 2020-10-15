#include "Vendedor.hpp"

Vendedor::Vendedor(std::string Nome, double salario, double horas, double quota){
  setNome(Nome);
  setSalarioHora(salario);
  setHorasTrabalhadas(horas);
  setQuota(quota);
}

double Vendedor::quotaTotalAnual() {
  int meses = 12;
	return getQuota() * meses;
}

void Vendedor::printaDados() {
  std::cout << "Nome: " << getNome() << std::endl;
  std::cout << "Salario Mes: " << pagamentoMes() << std::endl;  
  std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl;  
}

