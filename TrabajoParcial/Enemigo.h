#pragma once
#include <iostream>
#include "Entidad.h"

using namespace std;
using namespace System;

class Enemigo : public Entidad {
public:
	Enemigo(int x, int y, int dx, int dy, int alto, int ancho) : Entidad(x, y, dx, dy, alto, ancho) {
		this->x = x;
		this->y = y;
		this->dx = dx;
		this->dy = dy;
		this->alto = alto;
		this->ancho = ancho;
	}
	~Enemigo() {}

	//metodos
	void borrar() {
		Console::SetCursorPosition(x, y);     cout << "   ";
		Console::SetCursorPosition(x, y + 1); cout << "   ";
		Console::SetCursorPosition(x, y + 2); cout << "   ";
	}

	void dibujar(int x, int y) {
		if (dx == 1) {
			Console::ForegroundColor = ConsoleColor::Red;
			Console::SetCursorPosition(x, y);     cout << " O ";
			Console::SetCursorPosition(x, y + 1); cout << "/|\\";
			Console::SetCursorPosition(x, y + 2); cout << "V )";
		}

		else if (dx == -1) {
			Console::ForegroundColor = ConsoleColor::Red;
			Console::SetCursorPosition(x, y);     cout << " O ";
			Console::SetCursorPosition(x, y + 1); cout << "/|\\";
			Console::SetCursorPosition(x, y + 2); cout << "( L";
		}
	}

	void mover() {
		borrar();
		if (y > 35 || y < 13) {
			dy *= -1;
		}
		if (x > 185 || x < 10) {
			dx *= -1;
		}
		y += dy;
		x += dx;
		dibujar(x, y);
	}

};
