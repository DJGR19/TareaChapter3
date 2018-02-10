#include <iostream>
using namespace std;
class Factura {
private:
	string Ps;
	string DPieza;
	int CA;
	int PA;
public:
	Factura(string,string,int,int);
	string getPs();
	string getDPieza();
	int getCA();
	int getPA();

	void setPs(string);
	void setDPieza(string);
	void setCA(int);
	void setPA(int);
	void Imprimir();
	void Obtener_Monto_Factura();

};

Factura::Factura(string piezas, string descripcion, int cantidad, int precio) {

	Ps = piezas;
	DPieza = descripcion;
	CA = cantidad;
	PA = precio;


}

string Factura::getPs() {

	return Ps;
}

string Factura::getDPieza() {

	return DPieza;
}

int Factura::getCA() {

	return CA;

}
int Factura::getPA() {

	return PA;
}


void Factura::setPs(string p) {
	Ps = p;

}

void Factura::setDPieza(string d) {

	DPieza = d;

}
void Factura::setCA(int c) {
	CA = c;

}

void Factura::setPA(int pr) {

	PA = pr;
}


void Factura::Obtener_Monto_Factura() {

	int total;
	total = CA * PA;

	cout << "Total a pagar es de: LPS. " << total << endl;
}



int main() {
	Factura f = Factura("Baño", "Articulos de aseo personal", 5, 30);

	f.Obtener_Monto_Factura();





}
