#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include "../Include/Stage.h"
#include "../Include/Player.h"
#include "../Include/Tool_function.h"


int main()
{
	//�I�u�W�F�N�g����
	Stage* Stage_OBJ = new Stage();
	Player* Player_OBJ = new Player(2, 3, 'P');
	int run = 1;
	//�X�e�[�W��[0][0]�Ƀv���C���[��z�u���Ă݂�@������1
	//Stage_OBJ->Update(Player_OBJ->getCharacter(), Player_OBJ->getColumn(), Player_OBJ->getRow());

	//�X�e�[�W�����v���C���[�𑀍삷��@������2
	//�v���C���[����������
	std::system("cls");
	//New_Array_2D(Player_OBJ->getStage_Copy(), Stage_OBJ->Get_MaxColumn(), Stage_OBJ->Get_MaxRow());
	while (run == 1)
	{
		std::system("cls");

		Player_OBJ->input_key(0, Stage_OBJ->Get_MaxColumn(), 0, Stage_OBJ->Get_MaxRow());
	

		Stage_OBJ->Update(Player_OBJ->getCharacter(), Player_OBJ->getColumn(), Player_OBJ->getRow());
	

		//�X�e�[�W��\��
		Stage_OBJ->Draw();
	
		Sleep(100);
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::system("PAUSE");
	return 0;
}
