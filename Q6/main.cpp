#include <iostream>
#include <string.h>
#include "Pagamento.h"
#include "ControleDePagamentos.h"

int main(){
	ControleDePagamentos pagamentos;

	pagamentos.setPagamentos({13.00,"Joao"},0);
	pagamentos.setPagamentos({18.00,"Ingrid"},1);

	cout << pagamentos.calculaTotalDePagamentos() << endl;