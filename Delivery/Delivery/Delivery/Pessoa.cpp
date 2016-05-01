#include "Pessoa.h"

Pessoa::Pessoa()
{
	this.nome = "Ana Isabela Ramos";
}

Pessoa::~Pessoa()
{
}

ostream &operator<<(ostream &output, Pessoa &pessoa)
{
	output  << "Nome do Cleinte: " << pessoa.nome;
}

const Pessoa & Pessoa::operator =(const Pessoa &pessoa)
{
    nome = pessoa.nome;
}

