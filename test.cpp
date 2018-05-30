#include <iostream>

template <typename type> void f()
{
	std :: cout << __PRETTY_FUNCTION__ << std :: endl;
}

int main()
{
	f <int> ();
	f <double> ();
}
