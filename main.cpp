#include <iostream>

int main()
{
	FILE* fp;
	const char* filename = "input.txt";

	fopen_s(&fp, filename, "r");

	if (fp == NULL) {
		std::cout << filename <<"‚ª‚ ‚è‚Ü‚¹‚ñ" << std::endl;
		return -1;
	}

	char str[100];
	const char** Stage;
	while (fgets(str, 100, fp) != NULL) {
		std::cout << str;
	}
	fclose(fp);

	std::system("PAUSE");
	return 0;
}
