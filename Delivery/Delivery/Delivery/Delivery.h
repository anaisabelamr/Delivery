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
    bool operator==(const Delivery &) const;

	Delivery();
	Delivery(Delivery &);
	~Delivery();
	void menuDeServicos();
	void tipoEntrega();
	int gerarNumeroPedido();

protected:
	double precoFinal;
	double precoFinalDesconto;



};

#endif // DELIVERY_H
