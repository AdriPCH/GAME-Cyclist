#pragma once
#include <iostream>
#include "Entidad.h"
#include <vector>

#define ARRIBA 72
#define ABAJO 80
#define DERECHA 77
#define IZQUIERDA 75

using namespace std;
using namespace System;

class Jugador : public Entidad {
private:
	int vidas;

public:
	Jugador() : Entidad(90, 30, -1, 1, 3, 5) {}

	~Jugador() {}


	//getters

	int GetVidas() {
		return vidas;
	}


	//setters
	void SetVidas(int valor) {
		vidas = valor;
	}


	//metodos
	void borrar() {
		Console::SetCursorPosition(x, y);     cout << "     ";
		Console::SetCursorPosition(x, y + 1); cout << "     ";
		Console::SetCursorPosition(x, y + 2); cout << "     ";
	}

	void dibujar(int x, int y) {

		if (dx == 1) {
			Console::ForegroundColor = ConsoleColor::DarkYellow;
			Console::SetCursorPosition(x, y);     cout << "  _o ";
			Console::SetCursorPosition(x, y + 1); cout << "  \\< ";
			Console::SetCursorPosition(x, y + 2); cout << "()/()";
		}

		else if (dx = -1) {
			Console::ForegroundColor = ConsoleColor::DarkYellow;
			Console::SetCursorPosition(x, y);     cout << " o_  ";
			Console::SetCursorPosition(x, y + 1); cout << " >/  ";
			Console::SetCursorPosition(x, y + 2); cout << "()\\()";
		}

	}

	void arriba() {
		y--;
		dy = 1;
	}

	void abajo() {
		y++;
		dy = -1;
	}

	void izquierda() {
		x--;
		dx = -1;
	}

	void derecha() {
		x++;
		dx = 1;
	}

	void moverJugador(char tecla) {
		borrar();
		switch (tecla) {

		case ARRIBA:
			if (y > 12) {
				arriba();
			}
			break;

		case ABAJO:
			if (y < 36) {
				abajo();
			}
			break;

		case DERECHA:
			if (x < 185) {
				derecha();
			}
			break;

		case IZQUIERDA:
			if (x > 2) {
				izquierda();
			}
			break;
		}
		dibujar(x, y);
	}

	void disminuirVidas() {
		vidas--;
	}

};
