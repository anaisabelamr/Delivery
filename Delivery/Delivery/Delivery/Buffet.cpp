#include "Buffet.h"

Buffet::Buffet()
{
}

Buffet::~Buffet()
{
}

ostream &operator<<(ostream &output, Buffet &buffet)
{
	output  << "bla bla bla";
}

bool Buffet::operator ==(const Buffet &buffet) const
{
/*    if(comparaArqueiro.nome != nome) return false;
    if(comparaArqueiro.hp != hp) return false;
    if(comparaArqueiro.sp != sp) return false;
    return true;*/
}

const Buffet & Buffet::operator =(const Buffet &buffet)
{
/*    nome = atributo.nome;
    hp = atributo.hp;
    sp = atributo.sp;*/
}