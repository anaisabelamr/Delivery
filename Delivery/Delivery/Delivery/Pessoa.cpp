#include "Pessoa.h"

Pessoa::Pessoa()
{
}

Pessoa::~Pessoa()
{
}

ostream &operator<<(ostream &output, Pessoa &pessoa)
{
	output  << "bla bla bla";
}

bool Pessoa::operator ==(const Pessoa &pessoa) const
{
/*    if(comparaArqueiro.nome != nome) return false;
    if(comparaArqueiro.hp != hp) return false;
    if(comparaArqueiro.sp != sp) return false;
    return true;*/
}

const Pessoa & Pessoa::operator =(const Pessoa &pessoa)
{
/*    nome = atributo.nome;
    hp = atributo.hp;
    sp = atributo.sp;*/
}