#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

class Human {
private:
	char name[12];
	int age;

public :
	Human() {
		strcpy(name, "이름없음");
		age = 0;
	}
	void intro() {
		printf("이름 : %s, 나이 : %d\n", name, age);
	}
};

void main() {
	Human momo;
	momo.intro();
}