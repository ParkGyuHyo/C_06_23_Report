#include <stdio.h>

struct Student {
	int hakbeon;
	char *name;
	char *hakgwa;
};

void printStu(struct Student stu) {
	printf("ÇĞ¹ø: %d\nÀÌ¸§: %s\nÇĞ°ú: %s", stu.hakbeon, stu.name, stu.hakgwa);
} 

int main() {
	struct Student stu;
	
	stu.hakbeon = 1234;
	stu.name = "È«±æµ¿";
	stu.hakgwa = "ITÄÜÅÙÃ÷°è¿­";
	
	printStu(stu);
	
	return 0;
}
