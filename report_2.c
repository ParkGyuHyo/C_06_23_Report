#include <stdio.h>

int hap(int num1, int num2) {
	return num1+num2;
}

int cha(int num1, int num2) {
	return num1-num2;
}

int main() {
	int num1, num2;
	
	printf("두 정수를 입력하세요ex) 20 10: ");
	scanf("%d %d", &num1, &num2);
	
	printf("%d+%d = %d\n%d-%d = %d", num1, num2, hap(num1, num2), num1, num2, cha(num1, num2));
	
	return 0;
}
