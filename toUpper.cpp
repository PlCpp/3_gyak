#include <iostream>

int main() {
	std::cin >> std::noskipws;
	char ch;
	while (std::cin >> ch) {
		std::cout << static_cast<char>(ch >= 'a' && ch <= 'z' ? ch - 'a' + 'A' : ch);
	}
	
	return 0;
}
