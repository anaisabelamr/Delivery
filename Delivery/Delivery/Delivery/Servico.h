#ifndef SERVICO_H
#define SERVICO_H

#include <string.h>
#include <iostream>

using namespace std;
using std::string;
using std::ostream;

class Servico {
	
	friend ostream &operator<<(ostream &, const Servico &);

public:

    const Servico &operator=(const Servico &);
	
	Servico();
	Servico(Servico &);
	~Servico();
	virtual void menuDeServicos() = 0;
	virtual void tipoEntrega() = 0;

};

#endif // SERVICO_H
