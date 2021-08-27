#include <iostream>
#include <string>
#include "STRING.hpp"
#include <vector>
#include "INTEGER.hpp"
#include "CHAR.hpp"
using namespace std;



int menu() {
	int opcion = 0;
	cout <<endl << "--------Menu---------\n"
	     << "1) Agregar Integer\n"
	     << "2) Agregar CHAR\n"
	     << "3) Agregar STRING\n"
	     << "4) Operaciones INTEGER\n"
	     << "5) Operacion CHAR\n"
	     << "6) Operacion String\n"
	     << "7) Salir \n"
	     << "---------------------";
	cout << "\nIngrese la opcion que desea desarrollar: " << endl;
	cin >> opcion;
	return opcion;
}

int menu2() {
	int opcion = 0;
	cout << endl << "--------Menu---------\n"
	     << "1) Asignacion variable\n"
	     << "2) Imprimir Consola\n"
	     << "3) Repetir Cadena\n"
	     << "4) Salir \n"
	     << "---------------------";
	cout << "\nIngrese la opcion que desea desarrollar: " << endl;
	cin >> opcion;
	return opcion;
}

int menu3() {
	int opcion = 0;
	cout << endl << "--------Menu---------\n"
	     << "1) Suma\n"
	     << "2) Resta\n"
	     << "3) Multiplicacion\n"
	     << "4) Division \n"
	     << "5) Salir\n"
	     << "---------------------";
	cout << "\nIngrese la opcion que desea desarrollar: " << endl;
	cin >> opcion;
	return opcion;
}

int menu4() {
	int opcion;
	cout << endl << "--------Menu---------\n"
	     << "1) Concatenar\n"
	     << "2) Salir\n"
	     << "---------------------";
	cout << "\nIngrese la opcion que desea desarrollar: " << endl;
	cin >> opcion;
	return opcion;
}

int main(int argc, char** argv) {
//	Red *redes = new Red();
	int x = 0;
	vector<STRING*> str;
	vector<INTEGER*> inr;
	vector<CHAR*> cha;
	while ((x = menu()) != 7) {
		if (x == 1) {
			int y;
			cout << endl << "INTEGER que desea agregar: " << endl;
			cin >> y;
			INTEGER *st = new INTEGER(y);
			inr.push_back(st);
			cout << endl <<"INTEGER agregado correctamente" << endl;
		} else if (x == 2) {
			char y;
			cout << endl << "CHAR que desea agregar: " << endl;
			cin >> y;
			CHAR *st = new CHAR(y);
			cha.push_back(st);
			cout << endl <<"CHAR agregado correctamente" << endl;
		} else if (x == 3) {
			string y;
			cout << endl << "String que desea agregar: " << endl;
			cin.ignore();
			getline(cin, y);
			STRING *st = new STRING(y);
			str.push_back(st);
			cout << endl <<"STRING agregado correctamente" << endl;

		} else if (x == 4) {
			int x2 = 0;
			INTEGER *in2 = new INTEGER();
			while ((x2 = menu3()) != 5) {
				if (x2 == 1) {
					string aux;
					cout << endl << "Ingrese una suma que desea desarollar: " << endl;
					cin.ignore();
					getline(cin, aux);
					string k, z;
					int posicion;
					posicion = aux.find("+");
					if (posicion != -1) {
						int i = 0;
						while(aux[i] != '+') {
							k += aux[i];
							i++;
						}
						i++;
						while(i < aux.length()) {
							z += aux[i];
							i++;
						}
						int k2, z2;
						k2 = atoi(k.c_str());
						z2 = atoi(z.c_str());
						int total = in2->suma(k2, z2);
						cout << endl << k << " + " << z << " = " << total << endl;
					} else {
						cout << endl << "Ocurrio un error en la suma, verifique que ingrese de forma correcta los datos" << endl;
					}
				} else if (x2 == 2) {
					string aux;
					cout << endl << "Ingrese una resta que desea desarollar: " << endl;
					cin.ignore();
					getline(cin, aux);
					string k, z;
					int posicion;
					posicion = aux.find("-");
					if (posicion != -1) {
						int i = 0;
						while(aux[i] != '-') {
							k += aux[i];
							i++;
						}
						i++;
						while(i < aux.length()) {
							z += aux[i];
							i++;
						}
						int k2, z2;
						k2 = atoi(k.c_str());
						z2 = atoi(z.c_str());
						int total = in2->resta(k2, z2);
						cout << endl << k << " - " << z << " = " << total << endl;
					} else {
						cout << endl << "Ocurrio un error en la resta, verifique que ingrese de forma correcta los datos" << endl;
					}
				} else if (x2 == 3) {
					string aux;
					cout << endl << "Ingrese una Multiplicacion que desea desarollar: " << endl;
					cin.ignore();
					getline(cin, aux);
					string k, z;
					int posicion;
					posicion = aux.find("*");
					if (posicion != -1) {
						int i = 0;
						while(aux[i] != '*') {
							k += aux[i];
							i++;
						}
						i++;
						while(i < aux.length()) {
							z += aux[i];
							i++;
						}
						int k2, z2;
						k2 = atoi(k.c_str());
						z2 = atoi(z.c_str());
						int total = in2->multiplicacion(k2, z2);
						cout << endl << k << " * " << z << " = " << total << endl;
					} else {
						cout << endl << "Ocurrio un error en la Multiplicacion, verifique que ingrese de forma correcta los datos" << endl;
					}
				} else if (x2 == 4) {
					string aux;
					cout << endl << "Ingrese una division que desea desarollar: " << endl;
					cin.ignore();
					getline(cin, aux);
					string k, z;
					int posicion;
					posicion = aux.find("/");
					if (posicion != -1) {
						int i = 0;
						while(aux[i] != '/') {
							k += aux[i];
							i++;
						}
						i++;
						while(i < aux.length()) {
							z += aux[i];
							i++;
						}
						int k2, z2;
						k2 = atoi(k.c_str());
						z2 = atoi(z.c_str());
						int total = in2->division(k2, z2);
						cout << endl << k << " / " << z << " = " << total << endl;
					} else {
						cout << endl << "Ocurrio un error en la division, verifique que ingrese de forma correcta los datos" << endl;
					}
				}

			}
		} else if (x == 5) {
			int x2 = 0;
			CHAR *ch2 = new CHAR();
			string total;
			while ((x2 = menu4()) != 2) {
				if (x2 == 1) {
					char y, y2;
					cout << endl << "Ingrese un char: " << endl;
					cin >> y;
					cout << endl << "Ingrese segundo char: " << endl;
					cin >> y2;
					total = ch2->concatenar(y, y2);
					cout << endl << total << endl;
				}
			}

		} else if (x == 6) {
			int x2 = 0;
			STRING *st2 = new STRING();
			while ((x2 = menu2()) != 4) {
				if (x2 == 1) {
					string aux;
					cout << endl << "Ingrese la variable y asignele un valor con '<<': " << endl;
					cin.ignore();
					getline(cin, aux);
					aux = st2->Asignacion(aux);
				} else if (x2 == 2) {
					string aux;
					cout << endl << "Ingrese con el operador '!' pegado con la palabra que desea imprimir en pantalla: " << endl;
					cin.ignore();
					getline(cin, aux);
					aux = st2->Imprimir(aux);
				} else if (x2 == 3) {
					string aux;
					cout << endl << "Ingrese una cadena con el operador '*' junto un numero para determinar el numero de veces que se repita la palabra: " << endl;
					cin.ignore();
					getline(cin, aux);
					aux = st2->cadenaT(aux);
				}
			}

		}
	}
}


























