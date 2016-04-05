#include "Delivery.h"

Delivery::Delivery()
{
}

Delivery::~Delivery()
{
}

ostream &operator<<(ostream &output, Delivery &delivery)
{
	output  << "bla bla bla";
}

bool Delivery::operator ==(const Delivery &delivery) const
{
/*    if(comparaArqueiro.nome != nome) return false;
    if(comparaArqueiro.hp != hp) return false;
    if(comparaArqueiro.sp != sp) return false;
    return true;*/
}

const Delivery & Delivery::operator =(const Delivery &delivery)
{
/*    nome = atributo.nome;
    hp = atributo.hp;
    sp = atributo.sp;*/
}