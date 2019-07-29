#include "Apartamento.h"

Apartamento::Apartamento(int a, int n, string s, double d, double k)
{
    setnumQuartos(a);
    setvagasGaragem(n);
    setposicao(s);
    setArea(d);
    setvalorCondominio(k);
}

void Apartamento::setArea(double area){
    this->area = area;
}

void Apartamento::setvalorCondominio(double valorCondominio){
    this->valorCondominio = valorCondominio;
}


void Apartamento::setnumQuartos(int numQuartos){
    this->numQuartos = numQuartos;
}

void Apartamento::setvagasGaragem(int vagasGaragem){
    this->vagasGaragem = vagasGaragem;
}

void Apartamento::setposicao(string posicao){
    this->posicao = posicao;
}



string Apartamento::getposicao(){
    return posicao;
}

double Apartamento::getArea(){
    return area;
}

double Apartamento::getvalorCondominio(){
    return valorCondominio;
}

int Apartamento::getnumQuartos(){
    return numQuartos;
}

int Apartamento::getvagasGaragem(){
    return vagasGaragem;
}


