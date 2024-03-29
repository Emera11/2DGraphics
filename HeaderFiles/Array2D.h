#pragma once
//二次元配列クラス
//テンプレートになじみはあるだろうか？なければ基礎だけでも勉強しておこう。
//このクラス宣言の中ではTというクラスがあるかのように扱われ、
//これを使う時にはTのところにintとかboolとか入れて使う。
template<class T> class Array2D {
public:
	Array2D() : mArray(0) {}

	~Array2D() {
		delete[] mArray;
		mArray = 0; //ポインタに0を入れるのはクセにしよう。
	}

	//動的確保で二次元配列を一次元で表現
	void setSize(int size0, int size1)
	{
		mSize0 = size0;
		mSize1 = size1;
		mArray = new T[size0 * size1];
	};
	//配列の値を返す
	T& operator() (int index0, int index1)
	{
		return mArray[index1 * mSize0 + index0];
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
