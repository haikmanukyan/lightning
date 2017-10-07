#include <vector>
#include <stdarg.h>

template <class T>
class Tensor
{
public:
	float* data;
	std::vector<int> shape;
	int num_elements;

	Tensor(std::vector<int> shape);
	T operator() (int num, ...);
};

template <class T>
Tensor<T>::Tensor(std::vector<int> shape)
{
	this->shape = shape;
	this->num_elements = 1;
	for(std::vector<int>::iterator it = shape.begin(); it != shape.end(); ++it)
		this->num_elements *= *it;
	data = new T[num_elements];
}

template <class T>
T Tensor<T>::operator() (int num, ...)
{
	va_list indices;
	va_start(indices, num);
	int ind = 0;
	for (std::vector<int>::iterator i = this->shape.begin(); i != this->shape.end(); ++i)
		ind += *i * va_arg(indices, int);
	
	return 0;
}