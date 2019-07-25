#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>

using namespace std;

class Pagamento{
	public:
	double valorPagamento;
	string nomeDoFuncionario;
	
	double getValorPagamento();
	string getNomeDoFuncionario();
	void setValorPagamento(double valorPagamento);
	void setNomeDoFuncionario(string nomeDoFuncionario);


};

#endif