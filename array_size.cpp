#include <iostream>

int array_size(int array[]) {
	return sizeof(array) / sizeof(int);
}

int main() {
	int t[] = {1, 2, 3, 4, 5};
	
	std::cout << sizeof(t) << std::endl;
	std::cout << sizeof(t) / sizeof(int) << std::endl;
	std::cout << array_size(t) << std::endl;
	std::cout << "-----\n";
	
	int* a = t;
	std::cout << sizeof(a) / sizeof(int) << std::endl;
	
	return 0;
}
