#include <iostream>
#include "a.h"
#include "b.h"

int 
main() 
{
	std::cout << "Hello, World!" << std::endl;

	int meaning = function_a() * function_b();

	std::cout << "The meaning of life is: " << meaning << std::endl;

	return 0;
}
