#include "Servico.h"

Servico::Servico()
{
}

Servico::~Servico()
{
}

ostream &operator<<(ostream &output, Servico &servico)
{
	output  << "bla bla bla";
}

bool Servico::operator ==(const Servico &servico) const
{
/*    if(comparaArqueiro.nome != nome) return false;
    if(comparaArqueiro.hp != hp) return false;
    if(comparaArqueiro.sp != sp) return false;
    return true;*/
}

const Servico & Servico::operator =(const Servico &servico)
{
/*    nome = atributo.nome;
    hp = atributo.hp;
    sp = atributo.sp;*/
}
