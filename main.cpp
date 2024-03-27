#include "GameLib/Framework.h"
using namespace GameLib;

#include <fstream>
#include <algorithm>
using namespace std;


//関数プロトタイプ
void readFile(char** buffer, int* size, const char* filename);
void mainLoop();

//二次元配列クラス
//テンプレートになじみはあるだろうか？なければ基礎だけでも勉強しておこう。
//このクラス宣言の中ではTというクラスがあるかのように扱われ、
//これを使う時にはTのところにintとかboolとか入れて使う。
template<class T> class Array2D {
public:
	Array2D() : mArray(0){}
	
	~Array2D() {
		delete[] mArray;
		mArray = 0; //ポインタに0を入れるのはクセにしよう。
	}

	//動的確保で二次元配列を一次元で表現
	void setSize(int size0, int size1) : mSize0(size0), mSize1(size1)
	{ 
		mArray = new T[size0 * size1] 
	};
	//配列の値を返す
	T& operator() (int index0, int index1)
	{
		return mArray[index1 * mSize0 * index0];
	}
	//配列の値を返す　見るよう
	const T& operator()(int index0, int index1) const {
		return mArray[index1 * mSize0 + index0];
	}


private:
	T* mArray;
	int mSize0;
	int mSize1;
};


//状態クラス
class State {
public:
	//ステージの読み込み
	State(const char* stageData, int size);
	//更新処理
	void update(char input);
	//描画処理
	void draw () const;
	//※あとで調べる
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

//グローバル変数
State* gState = 0;


//ユーザ実装関数。中身はmainLoop()に丸投げ
namespace GameLib {
	void Framework::update() {
		mainLoop();
	}
}


void mainLoop() {
	//最初のフレームは初期化。最初の状態を描画して終わり
	if (!gState) {
		const char* filename = "stageData.txt";
		char* stageData;
		int fileSize;
		//ここでステージ読み込み
		readFile(&stageData, &fileSize, filename);
		if (!stageData) {
			cout << "stage file could not be read." << endl;
			return;
		}
		gState = new State(stageData, fileSize);
		//後始末
		delete[] stageData;
		stageData = 0;
		//初回描画
		gState->draw();
		return; //そのまま終わる
	}
	bool cleared = false;


}

//---------------------以下関数定義------------------------------------------
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
