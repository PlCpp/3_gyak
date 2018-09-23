#include <iostream>

int main() {
	std::cout << "Hello" << std::endl;
	std::cout << "Hello" + 1 << std::endl;
	
	char* p = "Hello";
	//*(p + 1) = 'a'; //szegmentálási hiba
	//p[1] = 'a'; //szegmentálási hiba
	
	char q[] = "Hello";
	q[1] = 'a';
	std::cout << q << std::endl;
	
	return 0;
}
