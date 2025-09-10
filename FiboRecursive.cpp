#include <iostream>

// Write a C++ program to compute the first 10 Fibonacci numbers
// recursively. See exercise problem 1.1.20 if you have not seen the Fibonacci sequence before.

using namespace std;

int Fibonacci (int n) {
        if (n == 0) return 0;
        else if (n == 1) return 1;
        else return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main() {
        cout << Fibonacci(10) << endl;
        return 0;
}
