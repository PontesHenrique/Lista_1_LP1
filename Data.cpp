#include <iostream>
using std::cout;
using std::endl;

#include "Data.h"

//construtor da classe
Data::Data()
{
	
}

//construtor da classe
Data::Data(int diaRecebido, int mesRecebido, int anoRecebido)
{
	setVerificaData(diaRecebido, mesRecebido, anoRecebido);
	setDia(diaRecebido);
	setMes(mesRecebido);
	setAno(anoRecebido);
	isBissexto(anoRecebido);
}

void Data::setVerificaData(int diaRecebido, int mesRecebido, int anoRecebido)
{
	if((diaRecebido <= 0 || diaRecebido > 31) || (mesRecebido <= 0 || mesRecebido > 12) || (anoRecebido <= 0))
	{
		cout << "\nData Invalida" << endl;
		if(diaRecebido <= 0 || diaRecebido > 31){
			cout << "O dia nao e valido" << endl;
		}
		if(mesRecebido <= 0 || mesRecebido > 12){
			cout << "O mes nao e valido" << endl;
		}
		if(anoRecebido <= 0){
			cout << "O ano nao e valido" << endl;
		}
	}else{
		cout << "Data Valida" << endl;
	}
	
}//fim de Data::setVerificaData

void Data::isBissexto(int anoRecebido)
{
	if((anoRecebido % 4 == 0 && (anoRecebido % 400 == 0 || anoRecebido % 100 != 0)))
	{
		bisexto = 1;
		cout << "Ano Bissexto" << endl;
	}else{
		bisexto = 0;
		cout << "Ano nao Bissexto" << endl;
	}
}

void Data::setDia(int diaRecebido)
{
	if(diaRecebido <= 0 || diaRecebido > 31)
	{
		dia = 01;
	}else{
		dia = diaRecebido;
	}
}

void Data::setMes(int mesRecebido)
{
	if(mesRecebido <= 0 || mesRecebido > 12)
	{
		mes = 01;
	}else{
		mes = mesRecebido;
	}
}

void Data::setAno(int anoRecebido)
{
	if(anoRecebido <= 0)
	{
		ano = 0001;
	}else{
		ano = anoRecebido;
	}
}

int Data::getDia()
{
	return dia;
}
int Data::getMes()
{
	return mes;
}
int Data::getAno()
{
	return ano;
}
int Data::getIsBissexto()
{
	return bisexto;
}
