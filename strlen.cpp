#include <iostream>

int strlen_1(char * p) {
	char* q = p;
	while (*q != '\0') {
		++q;
	}
	
	return q - p;
}

int strlen_2(char* p) {
	char* q = p;
	while (*q = '\0') {
		++q;
	}
	
	return q - p;
}


int main() {
	char s[] = "alma";
	std::cout << strlen_1("alma") << std::endl;
	//std::cout << strlen_1(0) << std::endl; //segmentation fault
	std::cout << strlen_2(s) << std::endl;
	std::cout << s << std::endl;
	return 0;
}
