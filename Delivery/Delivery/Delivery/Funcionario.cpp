#include "Funcionario.h"

Funcionario::Funcionario()
{
}

Funcionario::~Funcionario()
{
}

ostream &operator<<(ostream &output, Funcionario &funcionario)
{
	output  << "bla bla bla";
}

bool Funcionario::operator ==(const Funcionario &funcionario) const
{
/*    if(comparaArqueiro.nome != nome) return false;
    if(comparaArqueiro.hp != hp) return false;
    if(comparaArqueiro.sp != sp) return false;
    return true;*/
}

const Funcionario & Funcionario::operator =(const Funcionario &funcionario)
{
/*    nome = atributo.nome;
    hp = atributo.hp;
    sp = atributo.sp;*/
}