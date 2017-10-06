#include <iostream>
#include <vector>
#include <cstdio>

class Tensor
{
public:
	float* data;
	std::vector<int> shape;

	Tensor(std::vector<int> shape);
	Tensor* operator() (int indices, ...);
};

Tensor::Tensor(std::vector<int> shape)
{
	this->shape = shape;
}

Tensor * Tensor::operator() (int indices, ...)
{
	std::cout << this->shape.size() << std::endl;
	return NULL;
}

void add(const Tensor* lhs, const Tensor*  rhs, Tensor* out)
{

}

void mul(const Tensor * lhs, const Tensor* rhs, Tensor* out)
{

}

int main()
{
	std::vector<int> v = { 1, 2, 3, 4 };
	Tensor a = Tensor({ 1, 2, 3, 4 });

	a(0,1);

	std::getchar();
	return 0;
}