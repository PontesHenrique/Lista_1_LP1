#include <iostream>
using std::cout;
using std::endl;

#include "Invoice.h"

//construtor da classe
Invoice::Invoice(int numeroItemRecebido, string descricaoRecebida, int quantidadeRecebida, double precoUnidadeRecebido)
{
	setNumeroItem(numeroItemRecebido);
	setDescricao(descricaoRecebida);
	setQuantidade(quantidadeRecebida);
	setPrecoUnitario(precoUnidadeRecebido);
	setInvoiceAmount(quantidadeRecebida, precoUnidadeRecebido);
}

void Invoice::setNumeroItem(int numeroItemRecebido)
{
	if(numeroItemRecebido < 0)
	{
		numeroItem = 0;
	}
	if(numeroItemRecebido > 0)
	{
		numeroItem = numeroItemRecebido;
	}
}

void Invoice::setDescricao(string descricaoRecebida)
{
	if(descricaoRecebida == "")
	{
		descricao = "Sem descricao";
	}
	if(descricaoRecebida != "")
	{
		descricao = descricaoRecebida;
	}
}

void Invoice::setQuantidade(int quantidadeRecebida)
{
	if(quantidadeRecebida < 0)
	{
		quantidade = 0;
	}
	if(quantidadeRecebida > 0)
	{
		quantidade = quantidadeRecebida;
	}
}

void Invoice::setPrecoUnitario(double precoUnidadeRecebido)
{
	if(precoUnidadeRecebido < 0)
	{
		precoUnidade = 0.0;
	}
	if(precoUnidadeRecebido > 0)
	{
		precoUnidade = precoUnidadeRecebido;
	}
}

void Invoice::setInvoiceAmount(int quantidadeRecebida, double precoUnidadeRecebido)
{
	total = quantidadeRecebida*precoUnidadeRecebido;
}

int Invoice::getNumeroItem()
{
	return numeroItem;
}
string Invoice::getDescricao()
{
	return descricao;
}
int Invoice::getQuantidade()
{
	return quantidade;
}
double Invoice::getPrecoUnico()
{
	return precoUnidade;
}
double Invoice::getInvoiceAmount()
{
	return total;
}





