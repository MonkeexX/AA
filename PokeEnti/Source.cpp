#include <iostream>
#include <conio.h>
#include "HeaderPokeenti.h"
#define MAPSIZE 20
#define MAXPOKEMON 200
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_RIGHT 77
#define KEY_LEFT 75
#define KEY_SPACE 32


void main()
{
	char mapa[MAPSIZE][MAPSIZE];
	char* pMapa = &mapa[MAPSIZE][MAPSIZE];
	int X, Y;
	int* Xpointer = &X;
	int* Ypointer = &Y;
	int number = 10;
	int input = 0;
	int counterI = 0;
	int counterJ = 0;
	int caracterPosition;
	int caracterX = 5;
	int caracterY = 5;
	char caracter = '>';
	

	//TODO: print the pokemons
	for (int pokemonGenerated = 0; pokemonGenerated < MAXPOKEMON; pokemonGenerated++)
	{
		int posX = 1;
		int posY = 1;
		if (mapa[posX][posY] == ' ')
		{
			mapa[posX][posY] = 'P';
		}
	}
	caracterPosition = mapa[caracterX][caracterY];
	PrintMap(mapa, caracterPosition, caracter);
	//AddPokemonToMap(number, pMapa);
	
    int CharacterMovement(int input);
	switch (input)
	{
	case 1:
		caracterY--;
		caracter = '^';
	break;

	case 2:
		caracterY++;
		caracter = 'v';
	break;

	case 3:
		caracterX++;
		caracter = '>';
		break;

	case 4:
		caracterX--;
		caracter = '<';
		break;

	case 5:
		int CapturingPokemon(int posX, int posY, int capturedPoke, char map[MAPSIZE][MAPSIZE]);
		break;
	}
	

	
}