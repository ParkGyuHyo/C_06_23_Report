#include <stdio.h>

struct Student {
	int hakbeon;
	char *name;
	char *hakgwa;
};

void printStu(struct Student stu) {
	printf("�й�: %d\n�̸�: %s\n�а�: %s", stu.hakbeon, stu.name, stu.hakgwa);
} 

int main() {
	struct Student stu;
	
	stu.hakbeon = 1234;
	stu.name = "ȫ�浿";
	stu.hakgwa = "IT�������迭";
	
	printStu(stu);
	
	return 0;
}
