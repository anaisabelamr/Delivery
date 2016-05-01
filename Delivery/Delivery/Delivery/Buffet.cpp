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

void Buffet::menuBuffet()
{
	int opcao = 0;
	cout << " ~ ~ ~ ~ ~ BUFFET COMIDA BOA ~ ~ ~ ~ ~\n\nQual combo voce deseja?\n1- Combo Netflix (2 pessoas)\n2- Combo Social com os amigos (4-6 pessoas)\n3- Combo Festa no Ape (10 pessoas)\n";
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