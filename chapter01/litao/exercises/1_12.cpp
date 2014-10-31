// p12 example 1.12
#include <iostream>

int main() {
	int sum = 0;
	for (int i = -100; i <= 100; ++i) {
		sum += i;
	}
	std::cout << sum << std::endl; // answer is 0;
	return 0;
}