#include <iostream>
using namespace std;
class Fecha {
private:
	int Mes;
	int Dia;
	int Anio;

public:
	Fecha(int,int,int);
	int getMes();
	int getAnio();
	int getDia();
	void setMes(int);
	void setAnio(int);
	void setDia(int);

	void MostraFecha();



};


Fecha::Fecha(int mes, int dia, int anio) {

	Dia = dia;
	Anio = anio;

	if ((mes >= 1) & (mes <= 12)){
		Mes = mes;
}
else { Mes = 1;


}




}

int Fecha::getAnio() {

	return Anio;
}

int Fecha::getDia(){
	return Dia;
}


int Fecha::getMes() {

	return Mes;
}

void Fecha::setAnio(int a) {

	Anio = a;
}

void Fecha::setDia(int d) {

	Dia = d;

}

void Fecha::setMes(int m) {

	Mes = m;

}

void Fecha::MostraFecha() {

	cout << "La fecha actual es: " << Dia << "/" << Mes << "/" << Anio << endl;

}
int main() {
	Fecha f = Fecha(10,2,2018);
	f.MostraFecha();
	cout << "Un momento porfavor, se está modificando la fecha.....";

	f.setDia(6);
	f.setMes(6);
	f.setAnio(2020);
	cout << "Fecha Moficada: " << endl;
	f.MostraFecha();



}
