#include <iostream>
#include "Pessoa.h"
#include <string>
using namespace std;

int main(){
	Pessoa pessoa1=Pessoa("Nego",20,"84 9 96567890");
	Pessoa pessoa2=Pessoa("Keke");
	Pessoa pessoa3=Pessoa("");

	pessoa2.setIdade(21);
	pessoa2.setTelefone("84 9 96178987");
	
	pessoa3.setNome("Juju");
	pessoa3.setIdade(29);
	pessoa3.setTelefone("84 9 96456789");

	cout << pessoa1.getNome() << endl << pessoa1.getIdade() << " " << pessoa1.getTelefone() << endl << endl;
	cout << pessoa2.getNome() << endl << pessoa2.getIdade() << " " << pessoa2.getTelefone() << endl << endl;
	cout << pessoa3.getNome() << endl << pessoa3.getIdade() << " " << pessoa3.getTelefone() << endl << endl;





	return 0;
}