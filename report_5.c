#include <stdio.h>

void printArr(int arr[][4]) {
	int i, hap;
	for (i=0; i<=sizeof(arr[0])/sizeof(arr); i++) {
		printf("%d번째 행의 합은 ?\n", i+1);
		hap = arr[i][0]+arr[i][1]+arr[i][2]+arr[i][3];
		printf("%d + %d + %d + %d = %d 입니다.\n\n", arr[i][0], arr[i][1], arr[i][2], arr[i][3], hap);
	}
}

int main() {
	int numArr[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};
	
	printArr(numArr);
	return 0;
}
