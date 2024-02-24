#include <iostream>
#include <stdlib.h>
#include <time.h>

// Driver Code 
int main() 
{ 
	srand(time(NULL));

	std::cout << "Hello world!\n";

	int rand_num = std::rand() % 10 + 1;
	std::cout << "Random number: " << rand_num << "\n";

	return 0; 
}

