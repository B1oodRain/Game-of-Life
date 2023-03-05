#include "pch.h"
#include "functions.h"

class calculations
{
public:
	std::vector <char>  current_state;
private:
	std::vector <char> future_state_;
	std::vector <char> next_state(std::vector <char> current_state, std::vector <char> future_state_)
	{
		for (int i = 1; i < length_of_massive-2; ++i)
		{
			for (int j = 1; j < length_of_massive-2; ++j)
			{
				if (current_state[i][j] != '0')
				{
					
				}
				else
				{
					continue;
				}
			}
		}
		return current_state;
	}
};

