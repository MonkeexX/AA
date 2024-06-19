#pragma once
#include "Pokemon.h"

bool TakePokeball(int ** map, int posX, int posY, int pokeballs)
{
	if (map[posX][++posY] == 3)
	{
		map[posX][++posY] = 0;
		pokeballs++;
	}
	else if (map[++posX][--posY] == 3)
	{
		map[++posX][--posY] = 0;
		pokeballs++;

	}
	else if (map[++posX][posY] == 3)
	{
		map[++posX][posY] = 0;
		pokeballs++;

	}
	if (map[++posX][--posY] == 3)
	{
		map[++posX][--posY] = 0;
		pokeballs++;

	}
	else if (map[posX][--posY] == 3)
	{
		map[posX][--posY] = 0;
		pokeballs++;

	}
	else if (map[--posX][--posY] == 3)
	{
		map[--posX][--posY] = 0;
		pokeballs++;

	}
	else if (map[--posX][posY] == 3)
	{
		map[--posX][posY] = 0;
		pokeballs++;

	}
	else if (map[--posX][++posY] == 3)
	{
		map[--posX][++posY] = 0;
		pokeballs++;

	}
	return true;
}

int Combat(int inputPlay, int pokeballs, int life, int x, int y, int** map, int& capturedPoke, int pikachu)
{
	std::cout << "Capturar: 3 \n Atacar: 4 \n Huir: 5 \n";
	std::cin >> inputPlay;
	//To capture pokemon
	if (inputPlay == 3)
	{
		if (pokeballs > 0)
		{
			int capture = rand() % life;
			if (capture < 20)
			{
				map[x++][y] = 0;
				map[x--][y] = 0;
				map[x][y++] = 0;
				map[x][y--] = 0;

				return 1;
			}
			else
				return 2;
		}
		else
			return 3;
	}

	if (inputPlay == 4)
	{
		if (life > 0)
		{
			//do damage
			return 4;
		}
	}

	//to run away
	if (inputPlay == 5)
	{
		return 5;
	}
}

bool EnterCombat(int inputPlay, int posX, int posY, int capturedPoke, int** map, int pokeballs, int life, int pikachu)
{
	//we will check every square next to the player
	if (map[posX][++posY] == 2) //Hacia arriba
	{
		return true;
	}
	else if (map[++posX][--posY] == 2)
	{
		return true;
	}
	else if (map[++posX][posY] == 2)
	{
		return true;
	}
	else if (map[++posX][--posY] == 2)
	{
		return true;
	}
	else if (map[posX][--posY] == 2)
	{
		return true;
	}
	else if (map[--posX][--posY] == 2)
	{
		return true;
	}
	else if (map[--posX][posY] == 2)
	{
		return true;
	}
	else if (map[--posX][++posY] == 2)
	{
		return true;
	}
	else
		return false;
}

int GetPokeball(int posX, int posY, int** map)
{
	//we will check every square next to the player
	if (map[posX][++posY] == 3) //Hacia arriba
	{
		return true;
	}
	else if (map[++posX][--posY] == 3)
	{
		return true;
	}
	else if (map[++posX][posY] == 3)
	{
		return true;
	}
	else if (map[++posX][--posY] == 3)
	{
		return true;
	}
	else if (map[posX][--posY] == 3)
	{
		return true;
	}
	else if (map[--posX][--posY] == 3)
	{
		return true;
	}
	else if (map[--posX][posY] == 3)
	{
		return true;
	}
	else if (map[--posX][++posY] == 3)
	{
		return true;
	}
	else
		return false;
}
