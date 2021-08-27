#include "STRING.hpp"
#include <iostream>
#include <string.h>
#include <cstdlib>

STRING::STRING() {
}

STRING::STRING(string s1) {
	this->s1 = s1;
}

string STRING::getS1() {
	return this->s1;
}

void STRING::setS1(string s1) {
	this->s1 = s1;
}

string STRING::Asignacion(string w) {
	string variable, asignacion;
	int contador = 0;
	int posicion;
	posicion = w.find("<<");
	if(posicion != -1) {
		for (int i = 0; i < w.length(); i++) {
			if (w[i] == '<') {
				contador++;
				i = i + 1;
			} else if (contador >= 1) {
				variable+= w[i];
			} else {
				asignacion += w[i];
			}
		}
		cout << endl << "Se asigno: " << endl << asignacion << " = " << variable << endl;
	} else {
		cout << endl << "Operador ingresado de manera incorrecta" << endl;
	}
	return asignacion;
}

string STRING::Imprimir(string w) {
	string impresion;
	if(w.find("!")==0) {
		for (int i = 1; i < w.length(); i++) {
			impresion += w[i];
		}
		cout << endl << impresion << endl;
	} else {
		cout << endl << "Operador ingresado de manera incorrecta" << endl;
	}
	return impresion;
}

string STRING::cadenaT(string w) {
	string impresion;
	string numero;
	string aux;
	int posicion;
	int flag = 0;
	posicion = w.find("*");
	if (posicion != -1) {
		for (int i = 0; i < w.length(); i++) {
			if (w[i]=='*') {
				int c = i + 1;
				for (int j = c; j < w.length(); j++) {
					numero += w[j];
				}
				flag = 1;
			}
			if (flag != 1) {
				aux += w[i];
			}
		}

		int num = atoi(numero.c_str());
		for (int i = 0; i < num; i++) {
			impresion += aux;
		}
		cout << "La impresion: " << endl;
		cout << endl <<  impresion << endl;
	} else {
		cout << endl << "Operador ingresado de manera incorrecta" << endl;
	}
	return impresion;
}








