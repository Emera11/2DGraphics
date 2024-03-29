#pragma once

#include "Array2D.h"

class Image; //�錾�������Ă����΂����B�C���N���[�h���Ȃ��Ă����B

//��ԃN���X
class State {
public:
	//�X�e�[�W�̓ǂݍ���
	State(const char* stageData, int size);
	~State();
	//�X�V����
	void update(char input);
	//�`�揈��
	void draw() const;
	//�����ƂŒ��ׂ�
	bool hasCleared() const;
private:

	enum Object {
		OBJ_SPACE,
		OBJ_WALL,
		OBJ_BLOCK,
		OBJ_MAN,

		OBJ_UNKNOWN,
	};

	//�}�X�`��֐�
	enum ImageID {
		IMAGE_ID_PLAYER,
		IMAGE_ID_WALL,
		IMAGE_ID_BLOCK,
		IMAGE_ID_BLOCK_ON_GOAL,
		IMAGE_ID_GOAL,
		IMAGE_ID_SPACE,
	};

	void setSize(const char* stageData, int size);
	//�}�X�`��֐�
	void drawCell(int x, int y, ImageID id) const;

	int mWidth;
	int mHeight;
	Array2D<Object> mObjects;
	Array2D<bool> mGoalFlags;
	Image* mImage; //�摜
};
