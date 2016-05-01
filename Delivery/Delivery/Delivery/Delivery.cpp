#include "Delivery.h"

#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <time.h>

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


void Delivery::menuDeServicos()
{
	enum Servico
	{Pizzaria, SushiBar, Buffet};
	
	Servico tipoServico;
	cout << tipoServico;
	
	/*int opcao = 0;
	cout << " ~ ~ ~ ~ MENU ~ ~ ~ ~\n\nEscolha o tipo de servico que deseja:\n1- Pizzaria\n2- Sushi Bar\n3- Servico de Buffet\n\nPara sair do menu aperte a tecla 0 (zero)\n\n";
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
	}*/
}

int Delivery::gerarNumeroPedido()
{
	int numeroPedido;
	srand (time(NULL));

  numeroPedido = rand() % 1000 + 1;
  return numeroPedido;
}