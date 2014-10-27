// p11 example 1.11
#include <iostream>

int main() {
	int start, end;
	std::cout << "Please input two number:" << std::endl;
	std::cin >> start >> end;
	if (start <= end ) {
		while (start <= end)
			std::cout << start++ << std::endl;
	} else {
		while (start >= end)
			std::cout << start-- << std::endl;
	}
	return 0;
}