#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include <string>
#include "Pagamento.h"

using namespace std;

class ControleDePagamentos: public Pagamento{
	private:
	Pagamento pagamentos[100];
	
	public:
	void setPagamentos(Pagamento p, int pos);
	double calculaTotalDePagamentos();
	bool existePagamentoParaFuncionario(string nomeFunc);



};




#endif