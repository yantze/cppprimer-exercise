// demo on p13
#include <iostream>

int main() {
	int sum = 0;
	int val = 0;
	std::cout << "Please input a series of numbers:" << std::endl;
	while (std::cin >> val) {
		sum += val;
	}
	std::cout << "Sum is " << sum << std::endl;
	return 0;
}