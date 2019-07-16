#ifndef DATA_H
#define DATAE_H

#include <string>
using std::string;

class Data
{
	public:
		Data();//construtor da classe
		Data(int, int, int);//construtor da classe
		
		void setVerificaData(int, int, int);//metodo que valida a data
		void isBissexto(int);
		void setDia(int);
		void setMes(int);
		void setAno(int);
		
		int getDia();
		int getMes();
		int getAno();
		int getIsBissexto();

	private:
		int dia;
		int mes;
		int ano;
		int bisexto;
};

#endif
