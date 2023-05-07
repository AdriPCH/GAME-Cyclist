#pragma once
#include <iostream>
#include <conio.h>
#using <System.Drawing.dll>

using namespace std;
using namespace System;
using namespace System::Drawing;


class Entidad {
protected:
	int x, y, dx, dy, alto, ancho;

public:
	Entidad() {	}
	Entidad(int px, int py) {
		x = px;
		y = py;
	}
	Entidad(int px, int py, int pdx, int pdy, int palto, int pancho) {
		x = px;
		y = py;
		dx = pdx;
		dy = pdy;
		alto = palto;
		ancho = pancho;
	}
	~Entidad() {}

	//getter
	int GetX() {
		return x;
	}

	int GetY() {
		return y;
	};

	int GetDX() {
		return dx;
	}

	int GetDY() {
		return dy;
	}

	//setters
	void SetX(int valor) {
		x = valor;
	}

	void SetY(int valor) {
		y = valor;
	}

	void SetDX(int valor) {
		dx = valor;
	}

	void SetDY(int valor) {
		dy = valor;
	}


	//metodos
	virtual void borrar() {}
	//virtual void posicionar() {}
	virtual void dibujar() {}

	Rectangle obtenerRectangulo() {
		return Rectangle(x, y, ancho, alto);
	}
};
