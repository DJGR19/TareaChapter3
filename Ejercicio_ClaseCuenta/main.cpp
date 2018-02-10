#include <iostream>
using namespace std;
class Cuenta {
private:
	int SC;

public:
	Cuenta(int);
 void Abonar(int);
	void Retirar(int);
	void Obtener_Saldo_Actual();

};

Cuenta::Cuenta(int saldo_cuenta) {
	if (saldo_cuenta >= 0) {
		SC = saldo_cuenta;


	}else {
		SC = 0;
		cout << "Saldo inicial no válido"<<endl;
	}


}

void Cuenta::Abonar(int monto) {
	SC = SC + monto;
	cout << "Se ha abonado la cantidad de LPS. " << monto << endl;
}

void Cuenta::Retirar(int monto) {
	if (SC >= monto){
		SC = SC - monto;
	cout << "Se ha retirado la cantidad de LPS. " << monto << endl;
}
else {
		SC = SC;
		cout << "El monto a retirar excede el Saldo en cuenta" << endl;
	}
}

void Cuenta::Obtener_Saldo_Actual() {

	cout << "Su saldo actual es de:" << SC << endl;
}


int main() {
	Cuenta cu=Cuenta(0);
	cu.Obtener_Saldo_Actual();
	cu.Abonar(20);
	cu.Retirar(15);
	cu.Obtener_Saldo_Actual();

	cout << "*******************************Segunda Cuenta******************************* "<<endl;
	Cuenta cu1 = Cuenta(-1);
	cu1.Obtener_Saldo_Actual();
	cu1.Abonar(100);
	cu1.Retirar(15);
	cu1.Obtener_Saldo_Actual();


}
