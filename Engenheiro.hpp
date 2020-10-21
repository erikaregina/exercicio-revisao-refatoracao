#include "Empregado.hpp"

class Engenheiro : public Empregado{

    private:
        int _projetos;

    public:
        Engenheiro(std::string nome, double salarioHora, int projetos):
        Empregado(nome, salarioHora), _projetos(projetos) {};
        
        int getProjetos();
        
        void setProjetos(int numProjetos);

};
