#ifndef IMOVEL_H
#define IMOVEL_H
#include <string>
#include "Endereco.h"
using namespace std;
class Imovel
{
    public:
        Imovel(int,int,int,double);
        double getValor();
        int getTipoOferta();
        string getdescricao();
        Endereco ende;
        void setValor(double);
        void setTipoOferta(int);
        void setIMOVEL_PARA_VENDER(int);
        void setIMOVEL_PARA_ALUGAR(int);
        Endereco getEndereco();

    protected:
        int IMOVEL_PARA_VENDER;
        int IMOVEL_PARA_ALUGAR;
        double valor;
        int tipoOferta;


    private:
};

#endif // IMOVEL_H
