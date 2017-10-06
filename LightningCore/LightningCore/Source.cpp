#include <iostream>
#include <vector>
#include <cstdio>

#include "Tensor.h"

int main()
{
	std::vector<int> v = { 1, 2, 3, 4 };
	Tensor a = Tensor({ 1, 2, 3, 4 });

	a(0,1);

	std::cout << "Press any key" << std::endl;
	std::getchar();
	return 0;
}