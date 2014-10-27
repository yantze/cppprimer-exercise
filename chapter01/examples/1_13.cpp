// p12 example 1.13
#include <iostream>
using namespace std;

int main() {
	// rewrite example 1.9
	int sum = 0;
	for (int i = 50; i <= 100; i++) {
		sum += i;
	}
	cout << "Sum of integers from 50 to 100 is " << sum << endl;

	// rewrite example 1.10
	for (int i = 10; i >= 0; i--) {
		cout << i << endl;
	}

	// rewrite example 1.11
	int start, end;
	cout << "Please input two numbers: ";
	cin >> start >> end;
	if (start <= end) {
		for (int i = start; i <= end; i++) {
			cout << i << endl;
		}
	} else {
		for (int i = start; i >= end; i--) {
			cout << i << endl;
		}
	}

	return 0;
}