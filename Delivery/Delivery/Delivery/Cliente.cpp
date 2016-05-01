#include "Cliente.h"

Cliente::Cliente()
{
}

Cliente::Cliente(Cliente &cliente)
:Pessoa(static_cast <Pessoa> (cliente))
{
	
}

Cliente::~Cliente()
{
}

ostream &operator<<(ostream &output, Cliente &cliente)
{
	output  << "bla bla bla";
}

bool Cliente::operator ==(const Cliente &cliente) const
{
/*    if(comparaArqueiro.nome != nome) return false;
    if(comparaArqueiro.hp != hp) return false;
    if(comparaArqueiro.sp != sp) return false;
    return true;*/
}

const Cliente & Cliente::operator =(const Cliente &cliente)
{
/*    nome = atributo.nome;
    hp = atributo.hp;
    sp = atributo.sp;*/
}