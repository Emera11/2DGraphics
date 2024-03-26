#pragma once



class Stage
{
private:
	static const int Num_Column = 5;
	static const int Num_Row = 8 + 1;
	

protected:
	
	char Stage1[Num_Column][Num_Row] = {   "########",
										   "# ..   #",
										   "# oo   #",
										   "#      #",
										   "########", };


public:
	const int Get_MaxColumn();
	const int Get_MaxRow();

	
	void Update(const char Player, const int Column, const int Row);
	void Draw();
};

