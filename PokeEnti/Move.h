#pragma once
#include<iostream>
#include <conio.h>



#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_RIGHT 77
#define KEY_LEFT 75
#define KEY_SPACE 32



int CharacterMovement(int input, int characterX, int characterY)
{
	switch (input)
	{
	case 6: // up
		return characterY +1;

			break;
	case 7: //down
		return characterY -1;
		break;
	case 8: // right
		return characterX +1;
		break;
	case 9: //left
		return characterX -1;
		break;
	}
}