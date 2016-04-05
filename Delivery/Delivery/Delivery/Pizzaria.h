#ifndef PIZZARIA_H
#define PIZZARIA_H

#include "Delivery.h"

#include <string.h>
#include <iostream>

using namespace std;
using std::string;
using std::ostream;

class Pizzaria : public Delivery
{
	friend ostream &operator<<(ostream &, const Pizzaria &);

public:

    const Pizzaria &operator=(const Pizzaria &);
    bool operator==(const Pizzaria &) const;

	Pizzaria();
	Pizzaria(Pizzaria &);
	~Pizzaria();

protected:

};

#endif // PIZZARIA_H
