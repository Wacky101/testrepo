#include <stdio.h>

int printTwo() {
	printf("1\n");
}

int main(void) {
	printOne();
	printf("Hello World!\n");
	printf("Foo bar\n");
	return (0);
}

void printOne() {
	printf("1\n");
	printf("2\n");
}
