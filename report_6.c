#include <stdio.h>

void printArr(int arr[][3][3]) {
	int i, j, k;
	double avg;
	
	for (i=0; i<5; i++) {
		int hap = 0;
		printf("========== %d��==========\n\n", i+1);
		for(j=0; j<3; j++) {
			printf("--- %d��° �л� ����\n", j+1);
			for(k=0; k<3; k++) {
				hap += arr[i][j][k];
				printf("\t%d��° ����: %d��\n", k+1, arr[i][j][k]);
			}
			printf("\n");
		}
		printf("--- �ջ�\n");
		printf("�� ��: %d��\n��� : %.2lf��\n\n", hap, hap/9.0);
	}
}

int main() {
	int score[5][3][3] = {
		{
			{100, 90, 80},
			{80, 100, 60},
			{40, 50, 60}
		},
		{
			{60, 80, 70},
			{70, 90, 100},
			{100, 60, 50}
		},
		{
			{40, 30, 40},
			{50, 50, 100},
			{70, 100, 50}
		},
		{
			{30, 30, 100},
			{80, 100, 100},
			{100, 100, 100}
		},
		{
			{50, 50, 100},
			{90, 90, 80},
			{70, 70, 70}
		}
	};
	
	printArr(score);
	return 0;
}
