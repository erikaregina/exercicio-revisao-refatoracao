#include "Vendedor.hpp"

double Vendedor::getQuotaMensalVendas(){
  return _quotaMensalVendas;
}

void Vendedor::setQuotaMensalVendas(double quotaMensalVendas){
  _quotaMensalVendas = quotaMensalVendas;
}

double Vendedor::quotaTotalAnual() {
	return _quotaMensalVendas * 12;
}


