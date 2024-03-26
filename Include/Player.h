#pragma once
#include "../Include/Stage.h"
class Player : public Stage
{
public:
	Player(const int colum, const int row, const char character) 
	:Column(colum), Row(row), Character(character)
	{};

public:
	void Update();
	void input_key(const int min_Column, const int max_Column, const int min_Row, const int max_Row);

public:
	const char getCharacter();
	const int  getColumn();
	const int  getRow();

public:

private: 
	int Column; //à íu(çs)
	int Row;    //à íu(óÒ)
	char Character;

};