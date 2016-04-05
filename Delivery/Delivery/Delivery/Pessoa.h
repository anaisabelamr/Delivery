#ifndef PESSOA_H
#define PESSOA_H

#include <string.h>
#include <iostream>

using namespace std;
using std::string;
using std::ostream;



class Pessoa
{

	friend ostream &operator<<(ostream &, const Pessoa &);

public:

    const Pessoa &operator=(const Pessoa &);
    bool operator==(const Pessoa &) const;

	Pessoa();
	Pessoa(Pessoa &);
	~Pessoa();
	
protected:

};

#endif // PESSOA_H
