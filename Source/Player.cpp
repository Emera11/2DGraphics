#include "../Include/Player.h"
#include <conio.h>
#include<ctype.h>
#include <windows.h>
void Player::Update()
{
}

void Player::input_key(const int min_Column, const int max_Column, const int min_Row, const int max_Row)
{

	if (GetAsyncKeyState('W'))
	{
		Column -= 1;
	}
	if (GetAsyncKeyState('S'))
	{
		
			Column += 1;
	}

	if (GetAsyncKeyState('D'))
	{
	       Row += 1;
	}
	if (GetAsyncKeyState('A'))
	{
		  Row -= 1;
	}

	
	


	
}

const char Player::getCharacter()
{
	return Character;
}


const int Player::getColumn()
{
	return Column;
}

const int Player::getRow()
{
	return Row;
}
