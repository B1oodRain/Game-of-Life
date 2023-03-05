#include "pch.h"
#include <vector>
std:: vector <std::vector <char> > evaluation(std::vector <std::vector <char> > current_state)
{
	std::vector < std::vector <char> > new_state{current_state.size()};
	int flag = 0;
	int flag1 = 0;
	int temp_i = 0;
	int temp_j = 0;
	for (unsigned int i = 0; i < current_state.size(); i++)
	{
		for (unsigned int j = 0; j < current_state[i].size(); j++)
		{
			if (current_state[i][j] == '2') { new_state[i].push_back('2'); }
			else
			{
				for (int ii = -1; ii <= 1; ii++)
				{
					for (int jj = -1; jj <= 1; jj++)
					{
						if (ii == 0 && jj == 0)
						{
							continue;
						}
						else
						{
							temp_i = i + ii;
							temp_j = j + jj;
							if (temp_i < 0) { temp_i = current_state.size() - 1; }
							if (temp_i > (current_state.size() - 1)) { temp_i = 0; }
							if (temp_j < 0) { temp_i = current_state[i].size() - 1; }
							if (temp_j > (current_state[i].size() - 1)) { temp_j = 0; }
							if (current_state[i][j] == '1')
							{

								if (current_state[temp_i][temp_j] == '1') { flag++; }
							}

							else if (current_state[i][j] == '0')
							{
								if (current_state[temp_i][temp_j] == '1') { flag1++; }
							}
						}
					}
				}
			}
				if (flag == 2 || flag == 3 || flag1 == 3) { new_state[i].push_back('1'); }
				else /*if(flag1 != 3 || (flag != 2 && flag !=3))*/ { new_state[i].push_back('0'); }
				flag = 0;
				flag1 = 0;
			}
		}
	current_state = new_state;
	return current_state;
}