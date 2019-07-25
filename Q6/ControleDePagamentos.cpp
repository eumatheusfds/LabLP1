#include <string.h>
#include "Pagamento.h"
#include "ControleDePagamentos.h"

using namespace std;

void ControleDePagamentos::setPagamentos(Pagamento p, int pos){
	pagamentos[pos].valorPagamento=p.valorPagamento;
	pagamentos[pos].nomeDoFuncionario=p.nomeDoFuncionario;
}

double ControleDePagamentos::calculaTotalDePagamentos(){
	int i;
	double total=0;

	for (i=0;i<2;i++){
		total = total + pagamentos[i].valorPagamento;
	}
	
	return total;
}

bool ControleDePagamentos::existePagamentoParaFuncionario(string nomeFunc){
	int i;
	
	for (i=0;i<2;i++){
		if (pagamentos[i].nomeDoFuncionario.compare(nomeFunc)==0){
			return true;
		}
	}
	return false;
}