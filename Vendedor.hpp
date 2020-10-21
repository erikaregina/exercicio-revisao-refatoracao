#include "Empregado.hpp"

class Vendedor : public Empregado{

    private:
        double _quotaMensalVendas;

    public:
        Vendedor(std::string nome, double salarioHora, int quotaMensalVendas):
        Empregado(nome, salarioHora), _quotaMensalVendas(quotaMensalVendas) {};
        
        double getQuotaMensalVendas();
        
        void setQuotaMensalVendas(double quotaMensalVendas);

        double quotaTotalAnual();

};