#include "Sushi.h"

Sushi::Sushi()
{
}

Sushi::~Sushi()
{
}

ostream &operator<<(ostream &output, Sushi &sushi)
{
	output  << "bla bla bla";
}

bool Sushi::operator ==(const Sushi &sushi) const
{
/*    if(comparaArqueiro.nome != nome) return false;
    if(comparaArqueiro.hp != hp) return false;
    if(comparaArqueiro.sp != sp) return false;
    return true;*/
}

const Sushi & Sushi::operator =(const Sushi &sushi)
{
/*    nome = atributo.nome;
    hp = atributo.hp;
    sp = atributo.sp;*/
}