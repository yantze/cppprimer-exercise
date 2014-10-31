// p22 example 1.25
#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item total;
	if (std::cin >> total) {
		Sales_item trans;
		while (std::cin >> trans) {
			// if (trans.isbn() == total.isbn())
			if (trans.same_isbn(total))
				total += trans;
			else {
				std::cout << total << std::endl;
				total = trans;
			}
		}
	} else {
		std::cerr << "No data?!" << std::endl;
		return -1;
	}
	return 0;
}