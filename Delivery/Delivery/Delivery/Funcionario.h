#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "Pessoa.h"

#include <string.h>
#include <iostream>

using namespace std;
using std::string;
using std::ostream;

class Funcionario : public Pessoa
{

	friend ostream &operator<<(ostream &, const Funcionario &);
	
public:

    const Funcionario &operator=(const Funcionario &);
    bool operator==(const Funcionario &) const;

	Funcionario();
	Funcionario(Funcionario &);
	~Funcionario();

protected:

};

#endif // FUNCIONARIO_H
