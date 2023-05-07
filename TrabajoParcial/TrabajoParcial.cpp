
#include "pch.h"
#include <iostream>
#include <conio.h>
#include "Controlador.h" 

#define ANCHOVENTANA 192
#define ALTOVENTANA 49


using namespace std;
using namespace System;


int main() {
	//Configuraciones de la consola
	Console::SetWindowSize(ANCHOVENTANA, ALTOVENTANA);
	Console::CursorVisible = false;

	//Juego
	Controlador* controlador = new Controlador();
	controlador->UPC();
	controlador->pantallaDeCarga();
	while (true) {
		controlador->menu();
		controlador->jugar();
		system("pause>0");
	}
	return 0;
}
