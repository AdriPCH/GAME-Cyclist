#pragma once
#include <iostream>
#include <vector> 
#include "Jugador.h"
#include "Enemigo.h" 
#include "Basura.h"
#include "Aliado.h"

using namespace std;
using namespace System;

class Controlador {
private:
	bool matematica = false;
	bool aliadoAyudado = false;
	bool win = false;
	int puntaje = 0;
	int aciertos = 0;
	int errores = 0;
	int basuraRecogida = 0;
	//vectores enemigos y jugador
	Jugador* jugador;
	Aliado* aliado = new Aliado();
	vector<Enemigo* > enemigo;
	vector<Basura* > basura;

public:
	Controlador() {

		jugador = new Jugador();
		enemigo.push_back(new Enemigo(20, 17, 1, 1, 3, 3));
		enemigo.push_back(new Enemigo(35, 27, 1, 1, 3, 3));
		enemigo.push_back(new Enemigo(120, 30, 1, 1, 3, 3));

		for (int i = 0; i < 5; i++) {
			basura.push_back(new Basura());
		}
	}


	~Controlador() {}

	void UPC() {
		Console::ForegroundColor = ConsoleColor::Red;
		Console::SetCursorPosition(73, 14); cout << "                     ##                        ";
		Console::SetCursorPosition(73, 15); cout << "                  ,###.                        ";
		Console::SetCursorPosition(73, 16); cout << "       #         #####*                #       ";
		Console::SetCursorPosition(73, 17); cout << "    .#/         #######                 /#.    ";
		Console::SetCursorPosition(73, 18); cout << "   ##*          #########.               *##   ";
		Console::SetCursorPosition(73, 19); cout << " .###           ############              ###. ";
		Console::SetCursorPosition(73, 20); cout << " ###(           #############(            (### ";
		Console::SetCursorPosition(73, 21); cout << "#####            #############(           #####";
		Console::SetCursorPosition(73, 22); cout << "#####             *############           #####";
		Console::SetCursorPosition(73, 23); cout << "######               ##########.         ######";
		Console::SetCursorPosition(73, 24); cout << "#######                ########         #######";
		Console::SetCursorPosition(73, 25); cout << "(########               (#####        ########(";
		Console::SetCursorPosition(73, 26); cout << " ##########              ####       ########## ";
		Console::SetCursorPosition(73, 27); cout << "  #############         (##     #############  ";
		Console::SetCursorPosition(73, 28); cout << "   /#######################################/   ";
		Console::SetCursorPosition(73, 29); cout << "     (###################################(     ";
		Console::SetCursorPosition(73, 30); cout << "        ###############################        ";
		Console::SetCursorPosition(73, 31); cout << "           (#######################(           ";
		Console::SetCursorPosition(73, 32); cout << "                 /###########/                 ";
		system("pause>0");
		Console::ForegroundColor = ConsoleColor::White;
	}

	void pantallaDeCarga() {
		system("cls");
		int a, j, k;
		//izquie rda X  ARRIBA 
		Console::ForegroundColor = ConsoleColor::Blue;
		Console::SetCursorPosition(68, 15); cout << "                             ^                                  ";
		Console::SetCursorPosition(68, 16); cout << "                _______     ^^^                                 ";
		Console::SetCursorPosition(68, 17); cout << "               |xxxxxxx|  _^^^^^_                               ";
		Console::SetCursorPosition(68, 18); cout << "               |xxxxxxx| | [][]  |                              ";
		Console::SetCursorPosition(68, 19); cout << "            ______xxxxx| |[][][] |                              ";
		Console::SetCursorPosition(68, 20); cout << "           |++++++|xxxx| | [][][]|      TRON, THE               ";
		Console::SetCursorPosition(68, 21); cout << "           |++++++|xxxx| |[][][] |          CITYCYCLIST         ";
		Console::SetCursorPosition(68, 22); cout << "           |++++++|_________ [][]|                              ";
		Console::SetCursorPosition(68, 23); cout << "           |++++++|=|=|=|=|=| [] |                              ";
		Console::SetCursorPosition(68, 24); cout << "           |++++++|=|=|=|=|=|[][]|                              ";
		Console::SetCursorPosition(68, 25); cout << "___________|++HH++|  _HHHH__|   _________   _________  _________";
		Console::SetCursorPosition(68, 26); cout << "                                         _o                     ";
		Console::SetCursorPosition(68, 27); cout << "         _______________   ____________  \\<     ______________  ";
		Console::SetCursorPosition(68, 28); cout << "                                       ()/()                    ";
		Console::SetCursorPosition(68, 29); cout << "__________________  ___________    __________________    _______";

		Console::SetCursorPosition(95, 32); printf("L O A D I N G");
		for (a = 80; a < 123; a++) {
			Console::SetCursorPosition(a, 35); printf("%c", 177);
			for (j = 50; j < 70; j++) {
				for (k = 79; k < 139; k++) {
					Console::SetCursorPosition(k, 37);
				}
			}
			_sleep(2);
		}
	}

	void menu() {
		//move X IZQUEIRDA
		int opcion;
		do
		{
			system("cls");
			Console::ForegroundColor = ConsoleColor::White;
			Console::SetCursorPosition(70, 13); std::cout << "  _______                _   _                    ";
			Console::SetCursorPosition(70, 14); std::cout << " |__   __|              | | | |                   ";
			Console::SetCursorPosition(70, 15); std::cout << "    | |_ __ ___  _ __   | |_| |__   ___           ";
			Console::SetCursorPosition(70, 16); std::cout << "    | | '__/ _ \\| '_ \\  | __| '_ \\ / _ \\          ";
			Console::SetCursorPosition(70, 17); std::cout << "    | | | | (_) | | | | | |_| | | |  __/          ";
			Console::SetCursorPosition(70, 18); std::cout << "   _|_|_|_ \\___/|_| |_|__\\__|_| |_|\\___|_     _   ";
			Console::SetCursorPosition(70, 19); std::cout << "  / ____(_) |        / ____|         | (_)   | |  ";
			Console::SetCursorPosition(70, 20); std::cout << " | |     _| |_ _   _| |    _   _  ___| |_ ___| |_ ";
			Console::SetCursorPosition(70, 21); std::cout << " | |    | | __| | | | |   | | | |/ __| | / __| __|";
			Console::SetCursorPosition(70, 22); std::cout << " | |____| | |_| |_| | |___| |_| | (__| | \\__ \\ |_ ";
			Console::SetCursorPosition(70, 23); std::cout << "  \\_____|_|\\__|\\__, |\\_____\\__, |\\___|_|_|___/\\__|";
			Console::SetCursorPosition(70, 24); std::cout << "                __/ |       __/ |                 ";
			Console::SetCursorPosition(70, 25); std::cout << "               |___/       |___/                  ";




			Console::SetCursorPosition(70, 27); std::cout << "----------------------------------------------------";
			Console::SetCursorPosition(90, 29); std::cout << "[1] PLAY";
			Console::SetCursorPosition(90, 30); std::cout << "[2] INSTRUCTIONS";
			Console::SetCursorPosition(90, 31); std::cout << "[3] CREDITS";
			Console::SetCursorPosition(90, 32); std::cout << "[0] EXIT";
			Console::SetCursorPosition(90, 33); std::cout << "OPTION:";
			Console::SetCursorPosition(60, 35); cout << "|2023  TRABAJO PARCIAL - MADE BY: CHUI, MEDINA, PALOMARES - SECCION SW23|";
			Console::SetCursorPosition(110, 33);
			while (!(cin >> opcion && opcion <= 3)) {
				Console::SetCursorPosition(90, 33); cout << "                                                  ";
				Console::SetCursorPosition(90, 33); cout << "CHOOSE A VALID OPTION: ";
				cin.clear();
				cin.ignore(22, '\n');
			}

			switch (opcion)
			{
			case 0:
				cerrarPrograma();
				break;
			case 1:
				break;
			case 2:
				instrucciones();
				break;
			case 3:
				creditos();
				break;
			}

		} while (!(opcion == 1));
	}

	void cerrarPrograma() {
		system("cls");
		Console::SetCursorPosition(85, 24); cout << "Thanks for playing!";
		system("pause>0");
		exit(0);
	}

	void WinGame() {
		system("cls");
		Console::ForegroundColor = ConsoleColor::Green;
		Console::SetCursorPosition(65, 17); cout << " __     ______  _    _  __          _______ _   _ ";
		Console::SetCursorPosition(65, 18); cout << " \\ \\   / / __ \\| |  | | \\ \\        / /_   _| \\ | |";
		Console::SetCursorPosition(65, 19); cout << "  \\ \\_/ / |  | | |  | |  \\ \\  /\\  / /  | | |  \\| |";
		Console::SetCursorPosition(65, 20); cout << "   \\   /| |  | | |  | |   \\ \\/  \\/ /   | | | . ` |";
		Console::SetCursorPosition(65, 21); cout << "    | | | |__| | |__| |    \\  /\\  /   _| |_| |\\  |";
		Console::SetCursorPosition(65, 22); cout << "    |_|  \\____/ \\____/      \\/  \\/   |_____|_| \\_|";

		Console::SetCursorPosition(86, 24); cout << "CONGRATS!";
		Console::SetCursorPosition(84, 26); cout << "Your Points -> " << puntaje;
		Console::SetCursorPosition(84, 27); cout << "  Mistakes -> " << errores;
		Console::SetCursorPosition(84, 28); cout << "  Correct -> " << aciertos;
		Console::SetCursorPosition(74, 30); cout << "You successfully collected the garbage";
		system("pause>0");
	}

	void GameOver() {
		system("cls");
		Console::ForegroundColor = ConsoleColor::Red;
		Console::SetCursorPosition(65, 20); cout << "   _____          __  __ ______    ______      ________ _____  ";
		Console::SetCursorPosition(65, 21); cout << "  / ____|   /\\   |  \\/  |  ____|  / __ \\ \\    / /  ____|  __ \\ ";
		Console::SetCursorPosition(65, 22); cout << " | |  __   /  \\  | \\  / | |__    | |  | \\ \\  / /| |__  | |__) |";
		Console::SetCursorPosition(65, 23); cout << " | | |_ | / /\\ \\ | |\\/| |  __|   | |  | |\\ \\/ / |  __| |  _  / ";
		Console::SetCursorPosition(65, 24); cout << " | |__| |/ ____ \\| |  | | |____  | |__| | \\  /  | |____| | \\ \\ ";
		Console::SetCursorPosition(65, 25); cout << "  \\_____/_/    \\_\\_|  |_|______|  \\____/   \\/   |______|_|  \\_\\ ";
		Console::SetCursorPosition(65, 26); cout << " ------------------------ Try again --------------------------- ";
		system("pause>0");
	}

	void instrucciones() {
		system("cls");
		Console::SetCursorPosition(60, 18); std::cout << "      ------------------ INSTRUCTIONS ------------------";
		Console::SetCursorPosition(60, 20); std::cout << "1) You are Tron, the fastest cyclist in the world who has 3 lives";
		Console::SetCursorPosition(60, 21); std::cout << "2) You need to go all over the city collecting some garbage, this will give you points";
		Console::SetCursorPosition(60, 22); std::cout << "3) When you grab the garbage, you will have to solve a math problem, so be ready for anything";
		Console::SetCursorPosition(60, 23); std::cout << "4) You might watch your backs, some red bad guys will try to attack you";
		Console::SetCursorPosition(60, 24); std::cout << "5) But hey you are not alone, the homies (your blue allies) will help you";
		Console::SetCursorPosition(60, 25); std::cout << "6) So you can win by collecting 10 garbage";
		system("pause>0");
	}

	void creditos()
	{
		system("cls");
		Console::SetCursorPosition(80, 20); cout << "UPC - SEDE DE MONTERRICO";
		Console::SetCursorPosition(80, 21); cout << "---------------------------------------";
		Console::SetCursorPosition(80, 22); cout << "Algoritmos - SW23";
		Console::SetCursorPosition(80, 23); cout << "TRABAJO PARCIAL";
		Console::SetCursorPosition(80, 24); cout << "Programmers: ";
		Console::SetCursorPosition(80, 25); cout << "- Rafael Tomas Chui Sanchez";
		Console::SetCursorPosition(80, 26); cout << "- Erik Eduardo Andre Medina Medina";
		Console::SetCursorPosition(80, 27); cout << "- Adriana Giovanna Palomares Chavez";
		Console::SetCursorPosition(80, 29); cout << "Press any key to return to the menu";
		system("pause>0");
	}

	void dibujarBordes() {
		system("cls");
		Console::SetCursorPosition(1, 1);
		for (int i = 1; i <= 47; i++) {
			Console::SetCursorPosition(1, i);
			for (int j = 1; j <= 190; j++) {
				if (i == 1 || i == 39 || i == 47) {
					cout << (char)219;
				}
				else if (j == 1 || j == 190) {
					cout << (char)219;
				}
				else {
					cout << " ";
				}
			}
		}
	}

	void dibujarMapa() {
		Console::SetCursorPosition(3, 3); cout << "                                                                                                                                                                                           ";
		Console::SetCursorPosition(3, 4); cout << "                                         _______                           ______                            |>       ^                                                                    ";
		Console::SetCursorPosition(3, 5); cout << "                         __      ______ |-HOTEL-|                         |000000|                       ____|___    ^^^       |                                            ___            ";
		Console::SetCursorPosition(3, 6); cout << "                       _|  |_   |++++++||xxxxxxx| __________           ___|000000|                      |UUUUUUUU| _^^^^^_  __||_   H=========>            /\\/\\            | M |           ";
		Console::SetCursorPosition(3, 7); cout << "  __________         _| |  | |_ |++++++||xxxxxxx||\\/\\/\\/\\/\\/|         |0000000000|                      |UUUUUUUU||KKKKKKK||:::::|     ||   /\\             MCDO  __________|   |           ";
		Console::SetCursorPosition(3, 8); cout << " | Hospital |__+__  |___|  |___||++++++||xxxxxxx||xxxxxxxxxx| __/$\\__ |0000000000| ___/*\\___ ___________|UUUUUUUU||KKKKKKK||:::::|     ||   ++     __|__|    |  |McDonald's|   |           ";
		Console::SetCursorPosition(3, 9); cout << " |xxxxxxxxxx|     | |===CINE===||++++++||xxxxxXx||==========|| BANCO ||0000000000|| Policia |   TAMBO+  |========||KKKKKKK||:::::|     ||      |__|__|__|    |  |==========|   |  BUS  __  ";
		Console::SetCursorPosition(3, 10); cout << " |xxxxxxxxxx|     | |***|HH|***||++++++||xxxxxxx||xxxxxxxxxx||W!W!W!W||0000000000||^^^^^^^^^| HHHH  HH  |^^^^^^^^||KKKKKKK||:::::|     ||      |        |    |  |   HH   H |   |   |  |  | ";
		Console::SetCursorPosition(3, 11); cout << "_|===HH=====|_____|_|___|HH|___||++HH++||xxHHHxx||====HH====||___H___||00HH00HH00||_____HH__|_HHHH__HH__|___HH___||KKKHKKK||::H::|_____||______|___HH___|____|__|___HH___H_|___|___|__|hh|_";
		Console::SetCursorPosition(3, 12); cout << "                                                                                                                                                                                           ";
		Console::SetCursorPosition(3, 13); cout << "                                                                                                                                                                                           ";
		Console::SetCursorPosition(3, 14); cout << "                                                                                                                                                                                           ";
		Console::SetCursorPosition(3, 15); cout << "                                                                                                                                                                                           ";
		Console::SetCursorPosition(3, 16); cout << "                                                                                                                                                                                           ";
		Console::SetCursorPosition(3, 17); cout << "                                                                                                                                                                                           ";
		Console::SetCursorPosition(3, 18); cout << "                                                                                                                                                                                           ";
		Console::SetCursorPosition(3, 19); cout << "                                                                                                                                                                                           ";
		Console::SetCursorPosition(3, 20); cout << "                                                                                                                                                                                           ";
		Console::SetCursorPosition(3, 21); cout << "                                                                                                                                                                                           ";
		Console::SetCursorPosition(3, 22); cout << "                                                                                                                                                                                           ";
		Console::SetCursorPosition(3, 23); cout << "                                                                                                                                                                                           ";
		Console::SetCursorPosition(3, 24); cout << "                                                                                                                                                                                           ";
		Console::SetCursorPosition(3, 25); cout << "                                                                                                                                                                                           ";
		Console::SetCursorPosition(3, 26); cout << "                                                                                                                                                                                           ";
		Console::SetCursorPosition(3, 27); cout << "                                                                                                                                                                                           ";
		Console::SetCursorPosition(3, 28); cout << "                                                                                                                                                                                           ";
		Console::SetCursorPosition(3, 29); cout << "                                                                                                                                                                                           ";
		Console::SetCursorPosition(3, 30); cout << "                                                                                                                                                                                           ";
		Console::SetCursorPosition(3, 31); cout << "                                                                                                                                                                                           ";
		Console::SetCursorPosition(3, 32); cout << "                                                                                                                                                                                           ";
		Console::SetCursorPosition(3, 33); cout << "                                                                                                                                                                                           ";
		Console::SetCursorPosition(3, 34); cout << "                                                                                                                                                                                           ";
	}

	void colisiones() {

		//Colision con enemigos
		for (int i = 0; i < enemigo.size(); i++) {
			if (jugador->obtenerRectangulo().IntersectsWith(enemigo[i]->obtenerRectangulo())) {
				jugador->borrar();
				jugador->SetX(4);
				jugador->SetDX(1);
				jugador->SetY(12);
				jugador->dibujar(jugador->GetX(), jugador->GetY());
				enemigo[i]->borrar();
				enemigo[i]->SetX(rand() % 182 + 3);
				enemigo[i]->SetY(rand() % 22 + 13);
				enemigo[i]->dibujar(enemigo[i]->GetX(), enemigo[i]->GetY());
				jugador->disminuirVidas();
			}
		}

		//Colision con la basura
		for (int i = 0; i < basura.size(); i++) {
			if (basura[i]->obtenerRectangulo().IntersectsWith(jugador->obtenerRectangulo())) {
				basura[i]->moverBasura();
				basuraRecogida++;
				matematica = true;
			}
		}

		//Colision aliado
		if (jugador->obtenerRectangulo().IntersectsWith(aliado->obtenerRectangulo())) {
			aliadoAyudado = true;
			aliado->borrar();
			aliado->SetX(1);
			aliado->SetY(1);
			puntaje += 5;
		}
	}

	void posicionarTodo() {
		for (int i = 0; i < enemigo.size(); i++) {
			enemigo[i]->dibujar(enemigo[i]->GetX(), enemigo[i]->GetY());
		}
		for (int i = 0; i < basura.size(); i++) {
			basura[i]->dibujar();
		}
		if (!(aliado->GetX() == 1)) {
			aliado->dibujar();
		}

	}

	void operacionMatematica() {
		srand(time(NULL));
		int respuesta = 0;
		int respuestaCorrecta = 1;
		int operador = rand() % 3;
		int a, b;
		switch (operador)
		{
		case 0: //Suma
			a = rand() % 1000;
			b = rand() % 1000;
			respuestaCorrecta = a + b;
			Console::SetCursorPosition(54, 43); cout << a << " + " << b;
			cin.clear();
			fflush(stdin);
			Console::SetCursorPosition(65, 45); cin >> respuesta;
			break;
		case 1: //Resta
			a = rand() % 1000;
			b = rand() % 1000;
			respuestaCorrecta = a - b;
			Console::SetCursorPosition(54, 43); cout << a << " - " << b;
			cin.clear();
			fflush(stdin);
			Console::SetCursorPosition(65, 45); cin >> respuesta;
			break;
		case 2: //Multiplicacion
			a = rand() % 99 + 1;
			b = rand() % 10;
			respuestaCorrecta = a * b;
			Console::SetCursorPosition(54, 43); cout << a << " x " << b;
			cin.clear();
			fflush(stdin);
			Console::SetCursorPosition(65, 45); cin >> respuesta;
			break;
		default:
			break;
		}

		if (respuesta == respuestaCorrecta) {
			aciertos++;
			puntaje++;
		}
		else {
			errores++;
			puntaje--;
		}
	}

	void jugar() {
		jugador->SetVidas(3);
		win = false;
		puntaje = 0;
		aciertos = 0;
		errores = 0;
		basuraRecogida = 0;
		aliadoAyudado = false;

		char tecla;

		dibujarBordes();
		dibujarMapa();
		jugador->dibujar(jugador->GetX(), jugador->GetY());
		for (int i = 0; i < basura.size(); i++) {
			basura[i]->dibujar();
		}


		while (jugador->GetVidas() > 0) {
			if (puntaje >= 1) {
				win = true;
				break;
			}
			Console::ForegroundColor = ConsoleColor::Red;
			if (matematica) {
				operacionMatematica();
				matematica = false;
			}
			else {
				interfaz(puntaje, aciertos, errores, jugador->GetVidas());
				Console::SetCursorPosition(54, 43); cout << "          ";
				Console::SetCursorPosition(65, 45); cout << "                     ";
				posicionarTodo();
				colisiones();
				for (int i = 0; i < enemigo.size(); i++) {
					enemigo[i]->mover();
				}
				if (kbhit()) {
					tecla = _getch();
					jugador->moverJugador(tecla);
				}
				_sleep(20);
			}
		}
		if (win) {
			WinGame();
		}
		else {
			GameOver();
		}
	}

	void interfaz(int puntaje, int aciertos, int errores, int vidas) {
		Console::ForegroundColor = ConsoleColor::White;
		Console::SetCursorPosition(4, 41); cout << "Puntaje:  " << puntaje << "   ";
		Console::SetCursorPosition(4, 43); cout << "Aciertos: " << aciertos;
		Console::SetCursorPosition(4, 45); cout << "Errores:  " << errores;
		Console::SetCursorPosition(24, 41); cout << "Vidas: " << jugador->GetVidas();
		Console::SetCursorPosition(24, 43); cout << "Basura Recogida: " << basuraRecogida;
		Console::SetCursorPosition(24, 45); cout << "Aliado Ayudado: " << (aliadoAyudado ? "Si" : "No");
		Console::ForegroundColor = ConsoleColor::Magenta;
		Console::SetCursorPosition(54, 41); cout << "OPERACION MATEMATICA";
		Console::SetCursorPosition(54, 45); cout << "Respuesta: ";

	}
};