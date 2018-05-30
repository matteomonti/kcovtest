#include <iostream>

template <typename type> void f()
{
	if constexpr (sizeof(type) > 2)
		std :: cout << "asdasdasd" << std :: endl;
	else
		std :: cout << "lmfao" << std :: endl;
}

int main()
{
	f <char> ();
	f <uint16_t> ();

	std :: cout << "Hello World!!" << std :: endl;
}
