#pragma once
#include <iostream>
#include "Entidad.h"

using namespace std;
using namespace System;

class Basura : public Entidad {

public:
	Basura() : Entidad() {
		x = rand() % 180 + 5;
		y = rand() % 24 + 12;
		dx = 0;
		dy = 0;
		alto = 1;
		ancho = 1;
	}
	~Basura() {}

	//metodos
	void borrar() {
		Console::SetCursorPosition(x, y); cout << " ";
	}

	void dibujar() {
		Console::ForegroundColor = ConsoleColor::Green;
		Console::SetCursorPosition(x, y); cout << char(245);
	}

	void moverBasura() {
		borrar();
		x = rand() % 180 + 5;
		y = rand() % 24 + 12;
		dibujar();
	}
};
