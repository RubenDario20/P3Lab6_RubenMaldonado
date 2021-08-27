#include <iomanip>
#include "CHAR.hpp"

CHAR::CHAR() {
}

CHAR::CHAR(char x) {
	this->x = x;
}

string CHAR::concatenar(char c, char c2) {
	string respuesta;
	respuesta += c;
	respuesta += c2;
	return respuesta;
}