#include <iostream>
#include <cstring>


int main(int argc, char* argv[]) {

	std::cout << "Argument's number " << argc << std::endl;
	std::cout << "First argument value (path) " << argv[0] << std::endl;


	for (int i = 1; i < argc; ++i)
	{
		std::cout << "Hello, "<< argv[i] << std::endl;
	}

	return 0;
}
