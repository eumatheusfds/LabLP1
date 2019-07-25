#include "Invoice.h"
#include <string>
using namespace std;

Invoice::Invoice(int num, int qtd, string desc, float preco){
	this->num=num;
	if (qtd<0){
		this->qtd=0;
	}else{
		this->qtd=qtd;
	}
	this->desc=desc;
	if(preco<0){
		this->preco=0;
	}else{
		this->preco=preco;
	}
}

int Invoice::getNum(){
	return num;
}

int Invoice::getQtd(){
	return qtd;
}

string Invoice::getDesc(){
	return desc;
}

float Invoice::getPreco(){
	return preco;
}

void Invoice::setNum(int num){
	this->num=num;
}

void Invoice::setQtd(int qtd){
	if (qtd<0){
		this->qtd=0;
	}else{
		this->qtd=qtd;
	}
}

void Invoice::setDesc(string desc){
	this->desc=desc;
}

void Invoice::setPreco(float preco){
	if(preco<0){
		this->preco=0;
	}else{
		this->preco=preco;
	}
}

float Invoice::getInvoiceAmount(){
	return qtd*preco;
}
