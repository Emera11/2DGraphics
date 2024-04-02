#include "GameLib/Framework.h"
using namespace GameLib;

#include "../HeaderFiles/State.h"
#include "../HeaderFiles/File.h"

//関数プロトタイプ
void mainLoop();

//グローバル変数
State* gState = 0;
bool gPrevInputS = false;
bool gPrevInputA = false;
bool gPrevInputW = false;
bool gPrevInputZ = false;

//ユーザ実装関数。中身はmainLoop()に丸投げ
namespace GameLib {
	void Framework::update() {
		mainLoop();
	}
}

void mainLoop() {
	Framework f = Framework::instance();
	//×ボタン押されてる？
	if (Framework::instance().isEndRequested()) {
		if (gState) {
			delete gState;
			gState = 0;
		}
		return;
	}
	//最初のフレームは初期化。最初の状態を描画して終わり。
	if (!gState) {
		File file("stageData.txt");
		if (!(file.data())) { //データない！
			cout << "stage file could not be read." << endl;
			return;
		}
		gState = new State(file.data(), file.size());
		//初回描画
		gState->draw();
		return; //そのまま終わる
	}
	bool cleared = false;
	//メインループ
	//クリアチェック
	if (gState->hasCleared()) {
		cleared = true;
	}
	int dx = 0;
	int dy = 0;
	bool inputA = f.isKeyOn('a');
	bool inputS = f.isKeyOn('s');
	bool inputW = f.isKeyOn('w');
	bool inputZ = f.isKeyOn('z');
	if (inputA && (!gPrevInputA)) {
		dx -= 1;
	}
	else if (inputS && (!gPrevInputS)) {
		dx += 1;
	}
	else if (inputW && (!gPrevInputW)) {
		dy -= 1;
	}
	else if (inputZ && (!gPrevInputZ)) {
		dy += 1;
	}
	gPrevInputA = inputA;
	gPrevInputS = inputS;
	gPrevInputW = inputW;
	gPrevInputZ = inputZ;
	//更新
	gState->update(dx, dy);
	//描画
	gState->draw();

	if (cleared) {
		//祝いのメッセージ
		cout << "Congratulation! you win." << endl;
		delete gState;
		gState = 0;
	}

	if (f.isKeyOn('q')) {
		f.requestEnd();
	}
	if (f.isEndRequested()) {
		if (gState) {
			delete gState;
			gState = 0;
		}
	}
}


