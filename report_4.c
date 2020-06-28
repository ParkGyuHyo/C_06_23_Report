#include <stdio.h>
#include <string.h>

void printArr(char arr[]) {
	int i;
	for (i=0; i<strlen(arr); i++) {
		printf("%c\n", arr[i]);
	}
}

int main() {
	char helloArr[15] = "Hello C World!!";
	
	printArr(helloArr);
	return 0;
}
