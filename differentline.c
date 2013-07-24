#include <stdio.h>

int printTwo() {
	printf("2\n");
}

int main(void) {
	printOne();
	printf("Hello World!\n");
	return (0);
}

void printOne() {
	printf("1\n");
	printf("2\n");
}
