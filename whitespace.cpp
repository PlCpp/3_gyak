#include <iostream>

int main() {
	char ch;
	std::cin >> std::noskipws;
	while (std::cin >> ch) {
		std::cout << ch;
	}
	return 0;
}
