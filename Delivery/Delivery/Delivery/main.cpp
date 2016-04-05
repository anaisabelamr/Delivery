#include <stdlib.h>
#include <windows.h>
#include <vector>
#include <iostream>
#include <string.h>

#include "Servico.h"
#include "Delivery.h"
#include "Pizzaria.h"
#include "Sushi.h"
#include "Buffet.h"
#include "Pessoa.h"
#include "Cliente.h"
#include "Funcionario.h"

using namespace std;

int main()
{

    vector < Delivery *> delivery;
    
    int menuOpcao;
    
    cout << "   DELIVERY MANIA          \n       MENU       \n\n[1] Pizzaria\n[2] Sushi Bar\n[3] Servico de Buffet\nEscolha: ";
    cin >> menuOpcao;
    
	return 0;
}