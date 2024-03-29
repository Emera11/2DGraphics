#pragma once

#include "Array2D.h"

class Image; //宣言だけしておけばいい。インクルードしなくていい。

//状態クラス
class State {
public:
	//ステージの読み込み
	State(const char* stageData, int size);
	~State();
	//更新処理
	void update(char input);
	//描画処理
	void draw() const;
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

	//マス描画関数
	enum ImageID {
		IMAGE_ID_PLAYER,
		IMAGE_ID_WALL,
		IMAGE_ID_BLOCK,
		IMAGE_ID_BLOCK_ON_GOAL,
		IMAGE_ID_GOAL,
		IMAGE_ID_SPACE,
	};

	void setSize(const char* stageData, int size);
	//マス描画関数
	void drawCell(int x, int y, ImageID id) const;

	int mWidth;
	int mHeight;
	Array2D<Object> mObjects;
	Array2D<bool> mGoalFlags;
	Image* mImage; //画像
};
