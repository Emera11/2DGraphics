#include "GameLib/Framework.h"
#include <fstream>
using namespace std;


void readFile(char** buffer, int* size, const char* filename);
unsigned getUnsigned(const char*);

bool gFirst = true;
int gImageWidth = 0;
int gImageHeight = 0;
unsigned* gImageData = 0;


namespace GameLib {

	void Framework::update() {
		if (gFirst) {
			gFirst = false;
			char* buffer = 0;
			int size = 0;
			readFile(&buffer, &size, "bar.dds");
			gImageHeight = getUnsigned(&(buffer[12]));
			gImageWidth = getUnsigned(&(buffer[16]));
			gImageData = new unsigned[gImageWidth * gImageHeight];
			for (int i = 0; i < gImageWidth * gImageHeight; ++i) {
				gImageData[i] = getUnsigned(&(buffer[128 + i * 4]));
			}
		}
		unsigned* vram = videoMemory();
		int windowWidth = width();
		int windowHeight = height();
		int partX = 0;
		int partY = 1;
		//“K“–‚É32x32‚Ì—Ìˆæ‚Å•~‚«‹l‚ß‚Ü‚·B
		for (int tileY = 0; tileY + 32 < gImageHeight; tileY += 32) {
			for (int tileX = 0; tileX + 32 < gImageWidth; tileX += 32) {
				
			}
		}
	}
}

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

unsigned getUnsigned(const char* p)
{
	const unsigned char* up;
	up = reinterpret_cast<const unsigned char*>(p);
	unsigned r = up[0];
	r |= up[1] << 8;
	r |= up[2] << 16;
	r |= up[3] << 24;
	return r;
}
