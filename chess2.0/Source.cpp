#include <iostream>
#include <vector>
using namespace std;

//Pasos
//1.Imprimir tabla inicio
//2.estructura para las piezas
//3.poner dentro las piezas

//cosas que arreglar
//tabulador en la primera fila para que esten cuadrados
const short rows = 9;
const short columns = 9;
char table[rows][columns];

void main() {


	//1.Piezas
	struct pieces {
		char name;
		char position[2];
		bool life;//vivo o muerto

	};

	//duda de como hacer las piezas. como se utiliza para diferentes piezas
	struct pieces whitePieces[16];
	struct pieces blackPieces[16];

	//declaracion de las piezas 16 piezas blancas
	//2 Torres blancas
	whitePieces[0].name = 't';
	whitePieces[0].position[0] = '1';
	whitePieces[0].position[1] = '8';
	whitePieces[0].life = true;

	whitePieces[7].name = 't';
	whitePieces[7].position[0] = '1';
	whitePieces[7].position[1] = '8';
	whitePieces[7].life = true;

	//2 Caballos blancos
	whitePieces[1].name = 'h';
	whitePieces[1].position[0] = '2';
	whitePieces[1].position[1] = '8';
	whitePieces[1].life = true;

	whitePieces[6].name = 'h';
	whitePieces[6].position[0] = '7';
	whitePieces[6].position[1] = '8';
	whitePieces[6].life = true;

	//2 Alfiles blancos
	whitePieces[2].name = 'b';
	whitePieces[2].position[0] = '3';
	whitePieces[2].position[1] = '8';
	whitePieces[2].life = true;

	whitePieces[5].name = 'b';
	whitePieces[5].position[0] = '6';
	whitePieces[5].position[1] = '8';
	whitePieces[5].life = true;

	//rey blanco
	whitePieces[0].name = 'k';
	whitePieces[0].position[0] = '4';
	whitePieces[0].position[1] = '8';
	whitePieces[0].life = true; // Por defecto vivo

	//reina blanca
	whitePieces[1].name = 'q';
	whitePieces[1].position[0] = '5';
	whitePieces[1].position[1] = '8';
	whitePieces[1].life = true; // Por defecto vivo

	// Peones blancos
	whitePieces[8].name = 'p';
	whitePieces[8].position[0] = '1';
	whitePieces[8].position[1] = '7';
	whitePieces[8].life = true;

	whitePieces[9].name = 'p';
	whitePieces[9].position[0] = '2';
	whitePieces[9].position[1] = '7';
	whitePieces[9].life = true;

	whitePieces[10].name = 'p';
	whitePieces[10].position[0] = '3';
	whitePieces[10].position[1] = '7';
	whitePieces[10].life = true;

	whitePieces[11].name = 'p';
	whitePieces[11].position[0] = '4';
	whitePieces[11].position[1] = '7';
	whitePieces[11].life = true;

	whitePieces[12].name = 'p';
	whitePieces[12].position[0] = '5';
	whitePieces[12].position[1] = '7';
	whitePieces[12].life = true;

	whitePieces[13].name = 'p';
	whitePieces[13].position[0] = '6';
	whitePieces[13].position[1] = '7';
	whitePieces[13].life = true;

	whitePieces[14].name = 'p';
	whitePieces[14].position[0] = '7';
	whitePieces[14].position[1] = '7';
	whitePieces[14].life = true;

	whitePieces[15].name = 'p';
	whitePieces[15].position[0] = '8';
	whitePieces[15].position[1] = '7';
	whitePieces[15].life = true;


	//Piezas negras

	// Configuraci?n de las piezas negras

	blackPieces[0].name = 'T';
	blackPieces[0].position[0] = '1';
	blackPieces[0].position[1] = '1';
	blackPieces[0].life = true;

	blackPieces[7].name = 'T';
	blackPieces[7].position[0] = '8';
	blackPieces[7].position[1] = '1';
	blackPieces[7].life = true;

	// Caballos negros
	blackPieces[1].name = 'H';
	blackPieces[1].position[0] = '2';
	blackPieces[1].position[1] = '1';
	blackPieces[1].life = true;

	blackPieces[6].name = 'H';
	blackPieces[6].position[0] = '7';
	blackPieces[6].position[1] = '1';
	blackPieces[6].life = true;

	// Alfiles negros
	blackPieces[2].name = 'B';
	blackPieces[2].position[0] = '3';
	blackPieces[2].position[1] = '1';
	blackPieces[2].life = true;

	blackPieces[5].name = 'B';
	blackPieces[5].position[0] = '6';
	blackPieces[5].position[1] = '1';
	blackPieces[5].life = true;

	// Rey negro
	blackPieces[3].name = 'K';
	blackPieces[3].position[0] = '5';
	blackPieces[3].position[1] = '1';
	blackPieces[3].life = true;

	// Reina negra
	blackPieces[4].name = 'Q';
	blackPieces[4].position[0] = '4';
	blackPieces[4].position[1] = '1';
	blackPieces[4].life = true;

	// Peones negros
	blackPieces[8].name = 'P';
	blackPieces[8].position[0] = '1';
	blackPieces[8].position[1] = '2';
	blackPieces[8].life = true;

	blackPieces[9].name = 'P';
	blackPieces[9].position[0] = '2';
	blackPieces[9].position[1] = '2';
	blackPieces[9].life = true;

	blackPieces[10].name = 'P';
	blackPieces[10].position[0] = '3';
	blackPieces[10].position[1] = '2';
	blackPieces[10].life = true;

	blackPieces[11].name = 'P';
	blackPieces[11].position[0] = '4';
	blackPieces[11].position[1] = '2';
	blackPieces[11].life = true;

	blackPieces[12].name = 'P';
	blackPieces[12].position[0] = '5';
	blackPieces[12].position[1] = '2';
	blackPieces[12].life = true;

	blackPieces[13].name = 'P';
	blackPieces[13].position[0] = '6';
	blackPieces[13].position[1] = '2';
	blackPieces[13].life = true;

	blackPieces[14].name = 'P';
	blackPieces[14].position[0] = '7';
	blackPieces[14].position[1] = '2';
	blackPieces[14].life = true;

	blackPieces[15].name = 'P';
	blackPieces[15].position[0] = '8';
	blackPieces[15].position[1] = '2';
	blackPieces[15].life = true;

	/*
	for (short i = rows - 1; i > -1; i--) {

		for (short j = 0, short k = 0; j < columns, k < 16; j++, k++) {
			//inicio piezas blancas
			if (i == 8 && j != 0) {
				table[i][j] = whitePieces[k].name; //escribir en el tablero
			}
			if (i == 7 && j != 0) {
				table[i][j] = whitePieces[k].name; //escribir en el tablero
			}

			//inicion piezas negras
			if (i == 2 && j != 0) {
				table[i][j] = blackPieces[k].name; //escribir en el tablero
			}
			if (i == 1 && j != 0) {
				table[i][j] = blackPieces[k].name; //escribir en el tablero
			}
		}*/
	cout << "hola";

}