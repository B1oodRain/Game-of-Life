#include "pch.h"
#include <vector>
#include <iostream>
void print_mat(std::vector <std::vector<char> > arg)
{
	for (auto& i : arg)
	{
		for (char j : i)
		{
			std::cout << j;
		}
		std::cout << '\n';
	}
}