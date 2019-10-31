// CPP program to print Collatz sequence 
#include <stdio.h> 
using namespace std; 

void printCollatz(int n) 
{ 
	// We simply follow steps 
	// while we do not reach 1 
	while (n != 1) 
	{ 
		printf(n);

		// If n is odd 
		if (n & 1) 
			n = 3*n + 1; 

		// If even 
		else
			n = n/2; 
	} 

	// Print 1 at the end 
		printf(n);
} 

// Driver code 
int main() 
{ 
	printCollatz(6); 
	return 0; 
} 
