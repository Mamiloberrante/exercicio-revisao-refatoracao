#include "Engenheiro.hpp"

Engenheiro::Engenheiro(std::string Nome, double salario, double horas, int proj){
  setNome(Nome);
  setSalarioHora(salario);
  setHorasTrabalhadas(horas);
  setProjetos(proj);
 }

void Engenheiro::printaDados(){
 std::cout << "Nome: " << getNome() << std::endl;
 std::cout << "Salario Mes: " << pagamentoMes() << std::endl;  
 std::cout << "Projetos: " << getProjetos() << std::endl;    
}
