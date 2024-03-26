#include "../Include/Stage.h"
#include <iostream>

const int Stage::Get_MaxColumn()
{
	return Stage::Num_Column;
}

const int Stage::Get_MaxRow()
{
	return Stage::Num_Row;
}


void Stage::Update(const char Player, const int Column, const int Row)
{





}

void Stage::Draw()
{
	for (int i = 0; i < Stage::Num_Column; ++i)
	{
		for (int j = 0; j < Stage::Num_Row; ++j)
		{
			std::cout << Stage1[i][j];
		}
		std::cout << std::endl;
	}

}
