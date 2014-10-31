// p21 example 1.23
#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item curr, store;
	std::cout << "Please input book info: <ISBN> <number> <price>" << std::endl;
	std::cin >> store;
	while (std::cin >> curr) {
		// if (curr.isbn() == store.isbn()) // error: isbn() is private
		if (curr.same_isbn(store)) 
			store += curr;
		else {
			std::cout << store << std::endl;
			store = curr;
		}
	}
	return 0;
}