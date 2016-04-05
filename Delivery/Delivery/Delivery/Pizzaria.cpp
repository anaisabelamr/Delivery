#include "Pizzaria.h"

Pizzaria::Pizzaria()
{
}

Pizzaria::~Pizzaria()
{
}

ostream &operator<<(ostream &output, Pizzaria &pizzaria)
{
	output  << "bla bla bla";
}

bool Pizzaria::operator ==(const Pizzaria &pizzaria) const
{
/*    if(comparaArqueiro.nome != nome) return false;
    if(comparaArqueiro.hp != hp) return false;
    if(comparaArqueiro.sp != sp) return false;
    return true;*/
}

const Pizzaria & Pizzaria::operator =(const Pizzaria &pizzaria)
{
/*    nome = atributo.nome;
    hp = atributo.hp;
    sp = atributo.sp;*/
}