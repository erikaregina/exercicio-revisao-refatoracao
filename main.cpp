#include "Empregado.hpp"
#include "Engenheiro.hpp"
#include "Vendedor.hpp"

void imprimirEngenheiro(Engenheiro eng, double horasTrabalhadas){
  std::cout << "Nome: " << eng.getNome() << std::endl;
  std::cout << "Salario Mes: " << eng.pagamentoMes(horasTrabalhadas) << std::endl;
  std::cout << "Projetos: " << eng.getProjetos() << std::endl;
  std::cout << std::endl;
}

void imprimirVendedor(Vendedor vend, double horasTrabalhadas){
  std::cout << "Nome: " << vend.getNome() << std::endl;
  std::cout << "Salario Mes: " << vend.pagamentoMes(horasTrabalhadas) << std::endl;
  std::cout << "Quota vendas: " << vend.quotaTotalAnual() << std::endl;
  std::cout << std::endl;
}

int main() {

  Engenheiro eng1("Joao Snow", 35, 3);
  imprimirEngenheiro(eng1, 9.5);

  Engenheiro eng2("Daniela Targaryen", 30, 1);
  imprimirEngenheiro(eng2, 8);

  Engenheiro eng3("Bruno Stark", 30, 2);
  imprimirEngenheiro(eng3, 8);
  
  
  Vendedor vend1("Tonho Lannister", 20, 5000);
  imprimirVendedor(vend1, 6);

  Vendedor vend2("Jose Mormont", 25, 3000);
  imprimirVendedor(vend2, 8);

  Vendedor vend3("Sonia Stark", 30, 4000);
  imprimirVendedor(vend3, 8);

  return 0;	
}