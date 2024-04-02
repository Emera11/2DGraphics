#include <iostream>
using namespace std;
#include<Windows.h>

int main(void){

	//‰€Ž™‚Ìl”
	int N;
	cin >> N;

	//Ÿ•‰”
	int M;
	cin >> M;

	int Win;
	int Lose;
	int old_Win = 0;

	int* Row = new int[N];
	for (int i = 0; i < N; ++i)
	{
		Row[i] = 0;
	}

	int k = 0;

	for (int i = 0; i < M; ++i)
	{
		cin  >> Win;

		cin  >> Lose;

		if (old_Win == Lose)
		{
			Row[Win - 1] += Row[Lose - 1];
		}
	
		Row[Win - 1] += 1;

		old_Win = Win;
	}


	for (int i = 0; i < N; ++i)
	{
	
		if (k < Row[i])
		{
			k = Row[i];
		}
		
	}


	for (int i = 0; i < N; ++i)
	{
		if (k == Row[i])
		{
			cout << i+1 << endl;
		}
	}

	system("PAUSE");
	return 0;
}
