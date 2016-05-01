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
	return output;
}

const Servico & Servico::operator =(const Servico &servico)
{
/*    nome = atributo.nome;
    hp = atributo.hp;
    sp = atributo.sp;*/
}
