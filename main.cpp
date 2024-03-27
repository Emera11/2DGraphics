#include <fstream>
#include <string>

int main()
{
	if (std::ifstream fp_input = std::ifstream("input.txt")) {
		if (std::ofstream fp_output = std::ofstream("output.txt"))
		{
			std::string buf;
			int line_number = 1;
			while (std::getline(fp_input, buf))
				fp_output << line_number++ << '\t' << buf << '\n';
		}
	}

	std::system("PAUSE");
}
