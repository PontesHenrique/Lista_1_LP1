#ifndef INVOICE_H
#define INVOICE_H

#include <string>
using std::string;

class Invoice
{
	public:
		
		Invoice(int, string, int, double);//construtor da classe
		
		void setNumeroItem(int);
		void setDescricao(string);
		void setQuantidade(int);
		void setPrecoUnitario(double);
		void setInvoiceAmount(int, double);
		
		int getNumeroItem();
		string getDescricao();
		int getQuantidade();
		double getPrecoUnico();
		double getInvoiceAmount();
	
	private:
		int numeroItem;
		string descricao;
		int quantidade;
		double precoUnidade;
		double total;
};

#endif
