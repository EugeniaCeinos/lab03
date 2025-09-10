#include <iostream>

using namespace std;

int BinarySearch (int key, int A[], int low, int high) {
	int mid = low + (high - low) / 2;

	if (low > high) return -1;

	if (key < A[mid]) {
		return BinarySearch(key, A, low, mid - 1);
	}
	else if (key > A[mid]) {
		return BinarySearch(key, A, mid + 1, high);
	}
	else return A[mid];
}

int main() {
	int A[] = {1, 2, 4, 6 , 8, 10};
	int n = sizeof(A) / sizeof(A[0]);
	int result = BinarySearch(8, A, 0, n - 1);
	cout << result << endl;
}
