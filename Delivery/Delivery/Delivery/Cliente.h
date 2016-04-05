#ifndef CLIENTE_H
#define CLIENTE_H

#include "Pessoa.h"
#include <string.h>
#include <iostream>


using namespace std;
using std::string;
using std::ostream;

class Cliente : public Pessoa
{

	friend ostream &operator<<(ostream &, const Cliente &);
	
public:

    const Cliente &operator=(const Cliente &);
    bool operator==(const Cliente &) const;

	Cliente();
	Cliente(Cliente &);
	~Cliente();
	
protected:

};

#endif // CLIENTE_H
