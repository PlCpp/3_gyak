#include <stdio.h>
int main() {
	int ch;
	printf("%d\n", EOF);
	
	while ((ch = getchar()) != EOF) {
		putchar(ch);
		printf("printf-d %d\n", ch);
		printf("printf-c %c\n", ch); 
	}
	
	printf("%d\n", ch);
	ch = 255;
	printf("%c\n", ch);
	
	char ch2 = 'a';
	printf("%d\n", ch2);
	printf("%c\n", ch2);
	printf("%c\n", ch2 + 2);
	printf("%d\n", ch2 > 'c');
	return 0;
}
