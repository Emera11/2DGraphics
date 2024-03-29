#include "../HeaderFiles/Image.h"
#include "../HeaderFiles/File.h"

#include "GameLib/Framework.h"
using namespace GameLib;

Image::Image(const char* filename) : mWidth(0), mHeight(0), mData(0)
{
	File f(filename);
	mHeight = f.getUnsigned(12);
	mWidth = f.getUnsigned(16);
	mData = new unsigned[mWidth * mHeight];
	for (int i = 0; i < mWidth * mHeight; ++i) {
		mData[i] = f.getUnsigned(128 + i * 4);
	}
}

Image::~Image()
{
	delete[] mData;
	mData = 0;
}

int Image::width() const
{
	return mWidth;
}

int Image::height() const
{
	return mHeight;
}

void Image::draw(int dstX, int dstY, int srcX, int srcY, int width, int height) const
{
	unsigned* vram = Framework::instance().videoMemory();
	unsigned windowWidth = Framework::instance().width();
	int YVram;
	int YData;



	for (int y = 0; y < height; ++y) {
		YVram = (y + dstY) * windowWidth;
		YData = (y + srcY) * mWidth;
		for (int x = 0; x < width; ++x) {
			unsigned* dst = &vram[YVram  + (x + dstX)];
			*dst = mData[YData  + (x + srcX)];
		}
	}
}
