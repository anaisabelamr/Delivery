#ifndef SUSHI_H
#define SUSHI_H

#include "Delivery.h"

#include <string.h>
#include <iostream>

using namespace std;
using std::string;
using std::ostream;

class Sushi : public Delivery
{
	friend ostream &operator<<(ostream &, const Sushi &);
public:

    const Sushi &operator=(const Sushi &);
    bool operator==(const Sushi &) const;

	Sushi();
	Sushi(Sushi &);
	~Sushi();
	
protected:

};

#endif // SUSHI_H
