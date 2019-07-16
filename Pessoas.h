#include <string>
using std::string;

class Pessoas
{
	public:
		Pessoas(string);//construtor da classe
		void setNome(string);
		string getNome();
		
		Pessoas(string, int, string);//construtor da classe
		void setIdade(int);
		int getIdade();	
		void setTelefone(string);
		string getTelefone();
	
	private:
		string nome;
		int idade;
		string telefone;		
};

