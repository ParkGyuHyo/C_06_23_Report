#include <stdio.h>
#include <windows.h>

typedef struct {
	int hakbeon;
	char *name;
	char *hakgwa;
} Student;

void printStu(Student *stuList) {
	int i;
	printf("========== �л� ��� ==========\n");
	for (i=0; i<3; i++) {
		printf("�й�: %d\n�̸�: %s\n�а�: %s\n\n", stuList[i].hakbeon, &stuList[i].name, &stuList[i].hakgwa);
	}
} 

int main() {
	Student stu[3] = { 0 };
	int i;
	for(i=0; i<3; i++) {
		printf("%d��° �л��� �й��� �Է��ϼ���: ", i+1);
		scanf_s("%d", &stu[i].hakbeon, 6);
		printf("%d��° �л��� �̸��� �Է��ϼ���: ", i+1);
		scanf_s("%s", &stu[i].name, 10);
		printf("%d��° �л��� �а��� �Է��ϼ���: ", i+1);
		scanf_s("%s", &stu[i].hakgwa, 20);
		system("cls");
	}
	
	printStu(stu);
	
	return 0;
}
