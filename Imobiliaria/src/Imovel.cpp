#include "Imovel.h"

Imovel::Imovel(int vender,int alugar,int tipo,double value)
{
    setValor(value);
    setIMOVEL_PARA_ALUGAR(alugar);
    setIMOVEL_PARA_VENDER(vender);
    setTipoOferta(tipo);
}

string Imovel::getdescricao(){

}

double Imovel::getValor(){
    return valor;
}

int Imovel::getTipoOferta(){
    return tipoOferta;
}

Endereco Imovel::getEndereco(){
    return ende;
}


void Imovel::setIMOVEL_PARA_ALUGAR(int IMOVEL_PARA_ALUGAR){
    this->IMOVEL_PARA_ALUGAR = IMOVEL_PARA_ALUGAR;
}

void Imovel::setIMOVEL_PARA_ALUGAR(int IMOVEL_PARA_VENDER){
    this->IMOVEL_PARA_VENDER = IMOVEL_PARA_VENDER;
}

void Imovel::setTipoOferta(int tipoOferta){
    this->tipoOferta = tipoOferta;
}

void Imovel::setValor(double valor){
    this->valor = valor;
}
