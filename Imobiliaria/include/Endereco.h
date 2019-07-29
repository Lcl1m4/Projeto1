#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>
using namespace std;
class Endereco
{
    public:
        Endereco(string,string,string,string,int);
        void setBairro(string);
        void setLogradouro(string);
        void setCep(string);
        void setCidade(string);
        void setNumero(int);


        string getBairro();
        string getCidade();
        string getLogradouro();
        string getCEP();
        int getNumero();
    protected:
        string bairro;
        string cidade;
        string cep;
        string logradouro;
        int numero;
    private:
};

#endif // ENDERECO_H
