#include <iostream>
#include <vector>
#include <cstdio>

#include "Core/Tensor.h"

int main()
{
	std::vector<int> shape = { 1, 2, 3, 4 };
	Tensor<float> a ({1, 2, 3, 4});

	a(0,1);
	
	std::cout << "Press any key" << std::endl;
	std::getchar();
	return 0;
}