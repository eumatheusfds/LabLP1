#include "Data.h"

Data::Data(int dia, int mes, int ano){
	if (dia < 1 || dia > 31){
		this->dia = 1;
	}else{
		this->dia = dia;
	}

	if (mes<1 || mes > 12){
		this->mes=1;
	}else{
		this->mes=mes;
	}
	
	this->ano=ano;
}

int Data::getDia(){
	return dia;
}

int Data::getMes(){
	return mes;
}

int Data::getAno(){
	return ano;
}

void Data::setDia(int dia){
	this-> dia=dia;
}

void Data::setMes(int mes){
	this->mes=mes;
}

void Data::setAno(int ano){
	this->ano=ano;
}

void Data::avancarDia(){
	if (dia==31){
		dia=1;
		if (mes==12){
			mes=1;
			ano++;
		}else{
				mes++;
			}
	}else{
		dia++;
	}
	
	
}
