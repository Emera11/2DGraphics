#include <iostream>
#include <Windows.h>

int main()
{
	const int Row = 7 + 1;
	const int Colum = 7;
	char Stage[Colum][Row] = { "  #####",
							   ".     #",
							   "# o o #",
							   "# op# #",
							   "#   # #",
							   "#.###. ",
							   "### ###", };
	
	//ƒvƒŒƒCƒ„[“®‚©‚·ˆ—
	if(GetAsyncKeyState())

	for (int i = 0; i < Colum; ++i)
	{
		for (int j = 0; j < Row; ++j)
		{
			std::cout << Stage[i][j];
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
	std::system("PAUSE");
	return 0;
}
