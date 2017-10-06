#include <vector>

class Tensor
{
public:
	float* data;
	std::vector<int> shape;

	Tensor(std::vector<int> shape);
	Tensor* operator() (int indices, ...);
};