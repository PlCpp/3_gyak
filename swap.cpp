#include <iostream>

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int x = 2;
	int y = 3;
	
	std:: cout << x << " " << y << std::endl;
	swap(&x, &y);
	std:: cout << x << " " << y << std::endl;
}
