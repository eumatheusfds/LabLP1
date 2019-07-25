#ifndef INVOICE_H
#define INVOICE_H
#include <string>

using namespace std;

class Invoice{

private:
	int num, qtd;
	std::string desc;
	float preco;	

public:
	Invoice(int num, int qtd, std::string desc, float preco);
	
	int getNum();
	int getQtd();
	std::string getDesc();
	float getPreco();
	void setNum(int num);
	void setQtd(int qtd);
	void setDesc(std::string desc);
	void setPreco(float preco);
	
	float getInvoiceAmount();



};
#endif
