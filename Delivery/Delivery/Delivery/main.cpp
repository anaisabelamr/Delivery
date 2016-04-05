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

    vector < Delivery *> deliveryVector;
    
    int pedidos = 0;
    int menuOpcao;
    
    cout << "   DELIVERY MANIA          \n       MENU       \n\n[1] Pizzaria\n[2] Sushi Bar\n[3] Servico de Buffet\nEscolha: ";
    cin >> menuOpcao;
        switch(menuOpcao)
        {
            case 1:
                deliveryVector.push_back(new Pizzaria());
                pedidos++;
                break;
            case 2:
                deliveryVector.push_back(new Sushi());
                pedidos++;
                break;
            case 3:
                deliveryVector.push_back(new Buffet());
                break;
        }
        
        for(int i=0;i<deliveryVector.size();i++)
        {
            Pizzaria *ponteiroPizza = dynamic_cast < Pizzaria *> (deliveryVector[i]);
                if(ponteiroPizza != 0){
                    //ponteiroPizza -> menu();
                }
            Sushi * ponteiroSushi = dynamic_cast < Sushi *> (deliveryVector[i]);
                if (ponteiroSushi != 0){                
                    //ponteiroSushi -> menu();
                }
            Buffet * ponteiroBuffet = dynamic_cast < Buffet *> (deliveryVector[i]);
                if (ponteiroBuffet != 0){
                    //ponteiroBuffet ->
                }
        }
        
	return 0;
}