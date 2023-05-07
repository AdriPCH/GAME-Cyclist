#pragma once
#include <iostream>
#include "Entidad.h"

using namespace std;
using namespace System;

class Aliado : public Entidad {
public:

	Aliado() : Entidad(180, 13, 0, 0, 5, 8) {
	}
	~Aliado() {}

	void dibujar()
	{
		Console::ForegroundColor = ConsoleColor::DarkBlue;
		Console::SetCursorPosition(x, y);     cout << "   __   ";
		Console::SetCursorPosition(x, y + 1); cout << "  /''\\  ";
		Console::SetCursorPosition(x, y + 2); cout << "-||**||-";
		Console::SetCursorPosition(x, y + 3); cout << "  |__|  ";
		Console::SetCursorPosition(x, y + 4); cout << "  \\__/  ";
		Console::ForegroundColor = ConsoleColor::White;
	}

	void borrar()
	{
		for (int i = 0; i < alto; i++)
			for (int j = 0; j < ancho; j++)
			{
				Console::SetCursorPosition(x + j, y + i);
				cout << " ";
			}
	}
};