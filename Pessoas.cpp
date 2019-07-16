#include <iostream>
using std::cout;
using std::endl;

#include "Pessoas.h"

//construtor da classe
Pessoas::Pessoas(string nomeRecebido)
{
	setNome(nomeRecebido);
}

//construtor da classe
Pessoas::Pessoas(string nomeRecebido, int idadeRecebida, string telefoneRecebido)
{
	setNome(nomeRecebido);
	setIdade(idadeRecebida);
	setTelefone(telefoneRecebido);
}

void Pessoas::setNome(string nomeRecebido)
{
	if(nomeRecebido == "Luis Henrique Pontes" || nomeRecebido == "Davi Andrade" || nomeRecebido == "Bob Marley")
		nome = nomeRecebido;
		cout << nomeRecebido <<  " -> usuario nao permitido"  << endl;
}

void Pessoas::setIdade(int idadeRecebida)
{
	if(idadeRecebida < 0)
		idade = 1;
	if(idadeRecebida > 0)
	{
		idade = idadeRecebida;
	}
}

void Pessoas::setTelefone(string telefoneRecebido)
{
	if(telefoneRecebido == "")
		telefone = "nao existe";
	if(telefoneRecebido != "")
	{
		telefone = telefoneRecebido;
	}
}

string Pessoas::getNome()
{
	return nome;
}

int Pessoas::getIdade()
{
	return idade;
}

string Pessoas::getTelefone()
{
	return telefone;
}

