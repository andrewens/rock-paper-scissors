#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

// Driver Code 
int main() 
{ 
	// seed the random number generator
	srand(time(NULL));

	// gsgh
	std::cout << "Rock, Paper, or Scissors?: ";
	
	int rps_value = -1;
	while (rps_value < 0) {
		std::string ans;
		std::cin >> ans;
		
		if (ans == "rock") {
			rps_value = 0;
		}
		else {
			std::cout << ans << " is not a valid response. Try again: ";
		}
	}

	return 0; 
}

