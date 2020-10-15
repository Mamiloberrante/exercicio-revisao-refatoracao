#include "Engenheiro.hpp"
#include "Vendedor.hpp"

int main() {

  Engenheiro eng1("Joao Snow", 35, 9.5, 3);
  eng1.printaDados();
  std::cout << std::endl;
  
  Engenheiro eng2("Daniela Targaryen", 30, 8, 1);;
  eng2.printaDados();
  std::cout << std::endl;
  
  Engenheiro eng3("Bruno Stark",30,8,2);
  eng3.printaDados();
  std::cout << std::endl;
  
  
  Vendedor vend1("Tonho Lannister",20,6,5000);
  vend1.printaDados();
  std::cout << std::endl;
  
  Vendedor vend2("Jose Mormont",25 ,8, 3000);
  vend2.printaDados();
  std::cout << std::endl;  
	
  Vendedor vend3("Sonia Stark",30,8,4000);
  vend3.printaDados();
  
  return 0;	
}