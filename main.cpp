#include <iostream>
#include <Windows.h>

int main()
{
	//初期化情報
	const int Row = 7 + 1;
	const int Colum = 7;
	char Stage[Colum][Row] = { "  #####",
							   ".     #",
							   "# o o #",
							   "# o # #",
							   "#   # #",
							   "#.###. ",
							   "### ###", };
	char Stage_Old[Colum][Row];

	//プレイヤーの情報
	int PlayerColum = 3;
	int PlayerRow = 3; 
	const char Player_C = 'p';

	int Area_Num = 0;
	//入力情報
	int ControlNum = 0;

	Stage[PlayerColum][PlayerRow] = Player_C;



		//前のステージ情報を保存しとく
	for (int i = 0; i < Colum; ++i)
	{
		for (int j = 0; j < Row; ++j)
		{
			Stage_Old[i][j] = Stage[i][j];
			if (Stage_Old[i][j] == '.')
			{
				Area_Num += 1;
			}
			
		}
	}

	while (ControlNum != 5)
	{
		std::system("cls");

		for (int i = 0; i < Colum; ++i)
		{
			for (int j = 0; j < Row; ++j)
			{
				std::cout << Stage[i][j];
			}
			std::cout << std::endl;
		}

		//入力情報
		std::cin >> ControlNum;

		if (ControlNum == 1 && Stage[PlayerColum - 1][PlayerRow] != '#' && Stage[PlayerColum - 1][PlayerRow] != 'O')
		{
			if (Stage[PlayerColum - 1][PlayerRow] == 'o' &&
				Stage[PlayerColum - 2][PlayerRow] == '#')
			{
				continue;
			}

			if (Stage[PlayerColum - 1][PlayerRow] == 'o' &&
				Stage[PlayerColum - 2][PlayerRow] == 'o')
			{
				continue;
			}

			if (   Stage[PlayerColum - 1][PlayerRow] == 'o'
				&& Stage[PlayerColum - 2][PlayerRow] != '#' 
				&& Stage[PlayerColum - 1][PlayerRow] == 'o' 
				&& Stage[PlayerColum - 2][PlayerRow] != 'o')
			{
				Stage[PlayerColum - 2][PlayerRow] = 'o';
				PlayerColum -= 1;
			}

			else
			{
				PlayerColum -= 1;
			}




		}
		if (ControlNum == 2 && Stage[PlayerColum + 1][PlayerRow] != '#' && Stage[PlayerColum + 1][PlayerRow] != 'O')
		{
			if (Stage[PlayerColum + 1][PlayerRow] == 'o' &&
				Stage[PlayerColum + 2][PlayerRow] == '#')
			{
				continue;
			}

			if (Stage[PlayerColum + 1][PlayerRow] == 'o' &&
				Stage[PlayerColum + 2][PlayerRow] == 'o')
			{

				continue;
			}
			if (Stage[PlayerColum + 1][PlayerRow]    == 'o' 
				&& Stage[PlayerColum + 2][PlayerRow] != '#' 
				&& Stage[PlayerColum + 1][PlayerRow] == 'o'
				&& Stage[PlayerColum + 2][PlayerRow] != 'o')
			{
				Stage[PlayerColum + 2][PlayerRow] = 'o';
				PlayerColum += 1;
			}

			
			else
			{
				PlayerColum += 1;
			}
		}
		if (ControlNum == 3 && Stage[PlayerColum][PlayerRow - 1] != '#' && Stage[PlayerColum][PlayerRow-1] != 'O')
		{
			if (Stage[PlayerColum][PlayerRow - 1] == 'o' &&
				Stage[PlayerColum][PlayerRow - 2] == '#')
			{
				continue;
			}

			if (Stage[PlayerColum][PlayerRow - 1] == 'o' &&
				Stage[PlayerColum][PlayerRow - 2] == 'o')
			{
				continue;
			}

			if (Stage[PlayerColum][PlayerRow - 1] == 'o'
				&& Stage[PlayerColum][PlayerRow - 2] != '#'
				&& Stage[PlayerColum][PlayerRow - 1] == 'o'
				&& Stage[PlayerColum][PlayerRow - 2] != 'o')
			{
				Stage[PlayerColum][PlayerRow - 2] = 'o';
				PlayerRow -= 1;
			}

		
			else
			{
				PlayerRow -= 1;
			}
			
		}
		if (ControlNum == 4 && Stage[PlayerColum][PlayerRow + 1] != '#' && Stage[PlayerColum][PlayerRow+1] != 'O')
		{
			if (Stage[PlayerColum][PlayerRow + 1] == 'o' &&
				Stage[PlayerColum][PlayerRow + 2] == '#')
			{
				continue;
			}

			if (Stage[PlayerColum][PlayerRow + 1] == 'o' &&
				Stage[PlayerColum][PlayerRow + 2] == 'o')
			{
				continue;
			}

			if (Stage[PlayerColum][PlayerRow + 1] == 'o'
				&& Stage[PlayerColum][PlayerRow + 2] != '#'
				&& Stage[PlayerColum][PlayerRow + 1] == 'o'
				&& Stage[PlayerColum][PlayerRow + 2] != 'o')
			{
				Stage[PlayerColum][PlayerRow + 2] = 'o';
				PlayerRow += 1;
			}

		

			else
			{
				PlayerRow += 1;
			}
		}



		Stage[PlayerColum][PlayerRow] = Player_C;

		//荷物を動かす処理
		//前のステージ情報を保存しとく
		for (int i = 0; i < Colum; ++i)
		{
			for (int j = 0; j < Row; ++j)
			{
				if (Stage_Old[i][j] == '.')
				{
					if (Stage[i][j] == ' ')
					{
						Stage[i][j] = '.';
					}

					if (Stage[i][j] == Player_C)
					{
						Stage[i][j] = Player_C;
					}

					if (Stage[i][j] == 'o')
					{
						Stage[i][j] = 'O';
						if (Stage[i][j] == 'O')
						{
							--Area_Num;
						}
					}
				}
			}
		}



		//前のプレイヤー情報を消す
		if (Stage[PlayerColum + 1][PlayerRow] == Player_C)
		{
			Stage[PlayerColum + 1][PlayerRow] = ' ';
		}
		if (Stage[PlayerColum - 1][PlayerRow] == Player_C)
		{
			Stage[PlayerColum - 1][PlayerRow ] = ' ';
		}
		if (Stage[PlayerColum ][PlayerRow+1] == Player_C)
		{
			Stage[PlayerColum][PlayerRow+1] = ' ';
		}
		if (Stage[PlayerColum][PlayerRow - 1] == Player_C)
		{
			Stage[PlayerColum][PlayerRow - 1] = ' ';
		}

		if (Area_Num == 0)
		{
			ControlNum = 5;
		}

		std::system("cls");
		for (int i = 0; i < Colum; ++i)
		{
			for (int j = 0; j < Row; ++j)
			{
				std::cout << Stage[i][j];
			}
			std::cout << std::endl;
		}
	
	}

	std::cout << "クリア！" << std::endl;
	std::cout << std::endl;
	std::system("PAUSE");
	return 0;
}
