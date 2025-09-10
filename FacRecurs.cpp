// Write a C++ program to compute 10! factorial recursively. We know
// that n! = n ∗ (n − 1)! with 0! = 1

#include <iostream>

using namespace std;

int Factorial (int n) {	
	if (n == 0 || n == 1) return 1;
	else if (n > 0) return n * Factorial(n - 1);
	else return -1;
}

int main() {
	cout << Factorial(10) << endl;
	return 0;
}
