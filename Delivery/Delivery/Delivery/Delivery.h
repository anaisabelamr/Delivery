#ifndef DELIVERY_H
#define DELIVERY_H

#include "Servico.h"

#include <string.h>
#include <iostream>


using namespace std;
using std::string;
using std::ostream;

class Delivery : public Servico
{
	
	friend ostream &operator<<(ostream &, const Delivery &);
	
public:

    const Delivery &operator=(const Delivery &);
	const Delivery &operator+(const Delivery &);
	
	Delivery();
	Delivery(Delivery &);
	~Delivery();
	void menuDeServicos();
	void tipoEntrega();
	int gerarNumeroPedido();
	double getPrecoFinal();

protected:
	double precoFinal;
};

#endif // DELIVERY_H
