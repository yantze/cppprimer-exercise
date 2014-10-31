// p18 example 1.22
#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item item, store;
	std::cin >> store;
	while (std::cin >> item) {
		store += item;
	}
	std::cout << store << std::endl;
	return 0;

}