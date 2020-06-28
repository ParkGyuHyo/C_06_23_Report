#include <stdio.h>

void printMsg(void (*func)()) {
	func();
}

void msg1() {
	printf("Hello C World!\n");
}

void msg2() {
	printf("Hi C World!\n");
}

void printMsg2(int (*func)(int, int)) {
	printf("гу: %d", func(10, 20));
}

int hap(int num1, int num2) {
	return num1 + num2;
}

int main() {
	printMsg(msg1);
	
	printMsg(msg2);
	
	printMsg2(hap);
}
