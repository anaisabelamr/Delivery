#ifndef BUFFET_H
#define BUFFET_H

#include "Delivery.h"

#include <string.h>
#include <iostream>

using namespace std;
using std::string;
using std::ostream;

class Buffet : public Delivery
{

	friend ostream &operator<<(ostream &, const Buffet &);
	
public:

    const Buffet &operator=(const Buffet &);
    bool operator==(const Buffet &) const;

	Buffet();
	Buffet(Buffet &);
	~Buffet();
	void menuBuffet();
	
protected:

};

#endif // BUFFET_H
