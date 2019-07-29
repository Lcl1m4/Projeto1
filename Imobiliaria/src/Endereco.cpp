#include "Endereco.h"

Endereco::Endereco(string ro,string ci,string log,string pec,int value)
{
    setBairro(ro);
    setCidade(ci);
    setLogradouro(log);
    setCep(pec);
    setNumero(value);
}

void Endereco::setBairro(string bairro){
    this->bairro = bairro;
}

void Endereco::setCep(string cep){
    this->cep = cep;
}

void Endereco::setLogradouro(string logradouro){
    this->logradouro = logradouro;
}

void Endereco::setCidade(string cidade){
    this->cidade = cidade;
}

void Endereco::setNumero(int numero){
    this->numero = numero;
}


string Endereco::getBairro(){
    return bairro;
}

string Endereco::getCEP(){
    return cep;
}

string Endereco::getCidade(){
    return cidade;
}

string Endereco::getLogradouro(){
    return logradouro;
}

int Endereco::getNumero(){
    return numero;
}
