#include "Tensor.h"

Tensor::Tensor(std::vector<int> shape)
{
	this->shape = shape;
}

Tensor * Tensor::operator() (int indices, ...)
{
	return NULL;
}