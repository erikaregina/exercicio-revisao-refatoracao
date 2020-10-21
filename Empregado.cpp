#include "Empregado.hpp"

double Empregado::pagamentoMes(double horasTrabalhadas) {

    double totalHoras = horasTrabalhadas;

    if (horasTrabalhadas > _jornadaPadrao)
    {
        double horasExtras = horasTrabalhadas - _jornadaPadrao;
        totalHoras += horasExtras * _valorHoraExtra;
    }
    return totalHoras * _salarioHora;
}

std::string Empregado::getNome(){
  return _nome;
}

void Empregado::setNome(std::string nome){
  _nome = nome;
}

double Empregado::getSalarioHora(){
  return _salarioHora;
}

void Empregado::setSalarioHora(double salarioHora){
  _salarioHora = salarioHora;
}