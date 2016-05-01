#include "Pizzaria.h"

Pizzaria::Pizzaria()
{
}

Pizzaria::Pizzaria(Pizzaria &pizzaria)
:Delivery(static_cast <Delivery> (pizzaria))
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
void Pizzaria::menuPizzaria()
{
	int opcao = 0;
	cout << " ~ ~ ~ ~ ~ PIZZARIA PIZZA MANIA ~ ~ ~ ~ ~\n\nQual pizza voce deseja?\n1- Bacon\n2- Portuguesa\n3- Quatro queijos\n4- Calabresa\n5- Marguerita\n";
	cin >> opcao;

	switch(opcao)
	{
		case 1:
	//		menuPizzaria();
			break;
		case 2:
		//	menuSushi();
			break;
		case 3:
			//menuBuffet();
			break;
		default:
			system("PAUSE");
			break;
	}

}