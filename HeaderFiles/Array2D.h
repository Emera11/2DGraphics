#pragma once
//�񎟌��z��N���X
//�e���v���[�g�ɂȂ��݂͂��邾�낤���H�Ȃ���Ί�b�����ł��׋����Ă������B
//���̃N���X�錾�̒��ł�T�Ƃ����N���X�����邩�̂悤�Ɉ����A
//������g�����ɂ�T�̂Ƃ����int�Ƃ�bool�Ƃ�����Ďg���B
template<class T> class Array2D {
public:
	Array2D() : mArray(0) {}

	~Array2D() {
		delete[] mArray;
		mArray = 0; //�|�C���^��0������̂̓N�Z�ɂ��悤�B
	}

	//���I�m�ۂœ񎟌��z����ꎟ���ŕ\��
	void setSize(int size0, int size1)
	{
		mSize0 = size0;
		mSize1 = size1;
		mArray = new T[size0 * size1];
	};
	//�z��̒l��Ԃ�
	T& operator() (int index0, int index1)
	{
		return mArray[index1 * mSize0 + index0];
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