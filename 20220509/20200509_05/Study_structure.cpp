#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


struct tagStudent {   // 사용자 정의 데이타 타입
	int age;
	int grade;
	char name[100];
	struct tagStudent *next;
}; typedef struct tagStudent Student;


int main() {
	Student st;

	st.age = 100;
	st.grade = 3;
	st.name[0] = 'M';
	st.name[1] = 'O';
	st.name[2] = 'N';
	st.name[3] = '\0'; //끝?

	Student* pst;//st의 포인터
	pst = &st; //st의 값

	/*
	printf("pst->age = %d, grade = %d, name = %s\n"
		, pst->age, pst->grade, pst->name);
		*/

	Student st1, st2, st3;

	st1.age = 200;
	st1.grade = 1;
	strcpy(st1.name, "fruits");

	st2.age = 300;
	st2.grade = 2;
	strcpy(st2.name, "duck");

	st.next = &st1;
	st1.next = &st2;
	//printf("%s\n", st.next->next->name);

	//student st3만들고 
	//멤버에 값 지정하고 
	//st2에 연결한후
	//st를 가지고 st3의
	//멤버 값을 출력해보세요

	st3.age = 400;
	st3.grade = 3;
	strcpy(st3.name, "cat");

	st2.next = &st3;

	printf("st2 이름 : %s이다.\n", st.next->next->name);
	printf("st2 나이 : %d이다.\n", st.next->next->age);
	printf("st2 학년 : %d이다.\n", st.next->next->grade);

	printf("st3 이름 : %s이다.\n", st.next->next->next->name); 
	//구조체 다음  next->next는 
	//st1 -> st2 -> st3 으로 넘어감. 주소값을 저장하는 포인터 변수.!!
	printf("st3 나이 : %d이다.\n",st.next->next->next->age);
	printf("st3 학년 : %d이다.\n", st.next->next->next->grade);



	return 0;
}