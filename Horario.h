#ifndef HORARIO_H
#define HORARIO_H

class Horario
{
	public:
		
		Horario();//construtor da classe
		Horario(int, int, int);//construtor da classe
		
		void verificaHora(int, int, int);
		void avancaHorario(int, int, int);
		void setHora(int);
		void setminuto(int);
		void setSegundo(int);
		
		int getHora();
		int getMinuto();
		int getSegundo();

	private:
		
		int hora;
		int minuto;
		int segundo;
		
		
};

#endif
