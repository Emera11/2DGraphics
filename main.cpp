#include "GameLib/Framework.h"
using namespace GameLib;

#include <fstream>
#include <algorithm>
using namespace std;


//�֐��v���g�^�C�v
void readFile(char** buffer, int* size, const char* filename);
void mainLoop();

//�񎟌��z��N���X
//�e���v���[�g�ɂȂ��݂͂��邾�낤���H�Ȃ���Ί�b�����ł��׋����Ă������B
//���̃N���X�錾�̒��ł�T�Ƃ����N���X�����邩�̂悤�Ɉ����A
//������g�����ɂ�T�̂Ƃ����int�Ƃ�bool�Ƃ�����Ďg���B
template<class T> class Array2D {
public:
	Array2D() : mArray(0){}
	
	~Array2D() {
		delete[] mArray;
		mArray = 0; //�|�C���^��0������̂̓N�Z�ɂ��悤�B
	}

	//���I�m�ۂœ񎟌��z����ꎟ���ŕ\��
	void setSize(int size0, int size1) : mSize0(size0), mSize1(size1)
	{ 
		mArray = new T[size0 * size1] 
	};
	//�z��̒l��Ԃ�
	T& operator() (int index0, int index1)
	{
		return mArray[index1 * mSize0 * index0];
	}
	//�z��̒l��Ԃ��@����悤
	const T& operator()(int index0, int index1) const {
		return mArray[index1 * mSize0 + index0];
	}


private:
	T* mArray;
	int mSize0;
	int mSize1;
};


//��ԃN���X
class State {
public:
	//�X�e�[�W�̓ǂݍ���
	State(const char* stageData, int size);
	//�X�V����
	void update(char input);
	//�`�揈��
	void draw () const;
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

	void setSize(const char* stageData, int size);

	int mWidth;
	int mHeight;
	Array2D<Object> mObjects;
	Array2D<bool> mGoalFlags;

};

//�O���[�o���ϐ�
State* gState = 0;


//���[�U�����֐��B���g��mainLoop()�Ɋۓ���
namespace GameLib {
	void Framework::update() {
		mainLoop();
	}
}


void mainLoop() {
	//�ŏ��̃t���[���͏������B�ŏ��̏�Ԃ�`�悵�ďI���
	if (!gState) {
		const char* filename = "stageData.txt";
		char* stageData;
		int fileSize;
		//�����ŃX�e�[�W�ǂݍ���
		readFile(&stageData, &fileSize, filename);
		if (!stageData) {
			cout << "stage file could not be read." << endl;
			return;
		}
		gState = new State(stageData, fileSize);
		//��n��
		delete[] stageData;
		stageData = 0;
		//����`��
		gState->draw();
		return; //���̂܂܏I���
	}
	bool cleared = false;


}

//---------------------�ȉ��֐���`------------------------------------------
void readFile(char** buffer, int* size, const char* filename)
{
	ifstream in(filename, ifstream::binary);
	if (!in) {
		*buffer = 0;
		*size = 0;
	}
	else {
		in.seekg(0, ifstream::end);
		*size = static_cast<int>(in.tellg());
		in.seekg(0, ifstream::beg);
		*buffer = new char[*size];
		in.read(*buffer, *size);
	}
}


State::State(const char* stageData, int size)
{
}

void State::update(char input)
{
}

void State::draw() const
{
}

bool State::hasCleared() const
{
	return false;
}

void State::setSize(const char* stageData, int size)
{
}
