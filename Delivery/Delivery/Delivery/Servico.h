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
    bool operator==(const Servico &) const;

	Servico();
	Servico(Servico &);
	~Servico();
	menuDeServicos();

protected:
	

};

#endif // SERVICO_H
