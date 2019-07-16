#include <iostream>
using std::cout;
using std::endl;

#include "Pessoas.h"
#include "Invoice.h"
#include "Data.h"
#include "Horario.h"

int main(int argc, char** argv) {
	
	Pessoas pessoas1("Luis Henrique Pontes", 45, "3256-9874");

	cout<< "O nome e: "
		<<pessoas1.getNome()
		<<"\nA idade e: "
		<<pessoas1.getIdade()
		<<"\nO telefone e: "
		<<pessoas1.getTelefone() << endl;
		
	/*Pessoas pessoas2("Davi Andrade", 15, "");
	
	cout<< "O nome e: "
		<<pessoas2.getNome()
		<<"\nA idade e: "
		<<pessoas2.getIdade()
		<<"\nO telefone e: "
		<<pessoas2.getTelefone() << endl;
		
		printf("\n");
		
	Pessoas pessoas3("Bob Marley", 14, "1236-4569");
	
	cout<< "O nome e: "
		<<pessoas3.getNome()
		<<"\nA idade e: "
		<<pessoas3.getIdade()
		<<"\nO telefone e: "
		<<pessoas3.getTelefone() << endl;
	*/
		
printf("\n========================================================================================================================");

	Invoice invoice(10, "computador i5", 5, 512);
	
	cout<< "O numero e: "
		<<invoice.getNumeroItem()
		<<"\nA descricao e: "
		<<invoice.getDescricao()
		<<"\nA quantidade e: "
		<<invoice.getQuantidade() 
		<<"\nO preco unitario e: "
		<<invoice.getPrecoUnico() 
		<<"\nO preco total. e: "
		<<invoice.getInvoiceAmount() << endl;
		
		Invoice invoice1 = Invoice();
		Invoice invoice2 = Invoice(10, "computador i5", 5, 512);
		Invoice *invoice3 = new Invoice(10, "computador i5", 5, 512);
		Invoice *invoice4 = new Invoice(10, "computador i5", 5, 512);
	
	/*Invoice invoice1(1, "impressora HP", 3, 350.00);
	
	cout<< "\nO numero e: "
		<<invoice1.getNumeroItem()
		<<"\nA descricao e: "
		<<invoice1.getDescricao()
		<<"\nA quantidade e: "
		<<invoice1.getQuantidade() 
		<<"\nO preco uni. e: "
		<<invoice1.getPrecoUnico() 
		<<"\nO preco total. e: "
		<<invoice1.getInvoiceAmount() << endl;
	*/

printf("\n========================================================================================================================");	

		int dia, mes, ano;
		
/*	printf("\nDia: ");
	scanf("%d", &dia);
	printf("Mes: ");
	scanf("%d", &mes);
	printf("Ano: ");
	scanf("%d", &ano);

	Data data(dia, mes, ano);
	
	printf("%02d/%02d/%04d\n", data.getDia(), data.getMes(), data.getAno());
	
	Data data1(-1, -1, -1);
	
	printf("%02d/%02d/%04d\n\n", data1.getDia(), data1.getMes(), data1.getAno());
	
	Data data3(-1, -1, 2019);
	
	printf("%02d/%02d/%04d\n\n", data3.getDia(), data3.getMes(), data3.getAno());
	
	Data data2(-1, 07, 2019);
	
	printf("%02d/%02d/%04d\n\n", data2.getDia(), data2.getMes(), data2.getAno()); 
*/

	Data data(15, 07, 1988);
	
	printf("%02d/%02d/%04d\n", data.getDia(), data.getMes(), data.getAno());
	
printf("\n========================================================================================================================");

	Horario horario(22, 59, 59);
	
	Horario horario1(-1, -1, -1);
	
printf("\n========================================================================================================================");
	

	return 0;
}
