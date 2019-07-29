#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include <string>
using namespace std;

class Apartamento : public Imovel
{
    public:
        Apartamento(int,int,string,double,double);


        void setposicao(string);
        void setnumQuartos(int);
        void setvagasGaragem(int);
        void setArea(double);
        void setvalorCondominio(double);

        double getArea();
        double getvalorCondominio();
        int getvagasGaragem();
        int getnumQuartos();
        string getposicao();


    private:
        int numQuartos;
        int vagasGaragem;
        string posicao;
        double valorCondominio;
        double area;




};

#endif // APARTAMENTO_H
