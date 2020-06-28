#include <stdio.h>
#include <windows.h>

typedef struct {
	int hakbeon;
	char *name;
	char *hakgwa;
} Student;

void printStu(Student *stuList) {
	int i;
	printf("========== 학생 목록 ==========\n");
	for (i=0; i<3; i++) {
		printf("학번: %d\n이름: %s\n학과: %s\n\n", stuList[i].hakbeon, &stuList[i].name, &stuList[i].hakgwa);
	}
} 

int main() {
	Student stu[3] = { 0 };
	int i;
	for(i=0; i<3; i++) {
		printf("%d번째 학생의 학번을 입력하세요: ", i+1);
		scanf_s("%d", &stu[i].hakbeon, 6);
		printf("%d번째 학생의 이름을 입력하세요: ", i+1);
		scanf_s("%s", &stu[i].name, 10);
		printf("%d번째 학생의 학과를 입력하세요: ", i+1);
		scanf_s("%s", &stu[i].hakgwa, 20);
		system("cls");
	}
	
	printStu(stu);
	
	return 0;
}
