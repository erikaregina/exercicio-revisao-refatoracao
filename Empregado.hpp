#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  private:
    std::string _nome;  
    double _salarioHora;
    int _jornadaPadrao = 8;
    double _valorHoraExtra = 0.5;

  public:

    Empregado(std::string nome, double salarioHora):
      _nome(nome), _salarioHora(salarioHora) {};

    /*
      //Esta funcao calcula o pagamento mensal. Caso as horasTrabalhadas
       sejam superiores a jornada padrao, o empregado recebe um adicional
       por cada hora extra.
    */

    double pagamentoMes(double horasTrabalhadas);

    std::string getNome();
    void setNome(std::string nome);

    double getSalarioHora();
    void setSalarioHora(double salarioHora);
	
};

#endif