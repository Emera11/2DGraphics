#pragma once

class File{
public:
	File(const char* filename);
	~File();
	int size() const;
	const char* data() const;
	unsigned getUnsigned(int p) const;
private:
	int mSize;
	char* mData;
};
