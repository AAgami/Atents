#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


struct tagStudent {   // ����� ���� ����Ÿ Ÿ��
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
	st.name[3] = '\0'; //��?

	Student* pst;//st�� ������
	pst = &st; //st�� ��

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

	//student st3����� 
	//����� �� �����ϰ� 
	//st2�� ��������
	//st�� ������ st3��
	//��� ���� ����غ�����

	st3.age = 400;
	st3.grade = 3;
	strcpy(st3.name, "cat");

	st2.next = &st3;

	printf("st2 �̸� : %s�̴�.\n", st.next->next->name);
	printf("st2 ���� : %d�̴�.\n", st.next->next->age);
	printf("st2 �г� : %d�̴�.\n", st.next->next->grade);

	printf("st3 �̸� : %s�̴�.\n", st.next->next->next->name); 
	//����ü ����  next->next�� 
	//st1 -> st2 -> st3 ���� �Ѿ. �ּҰ��� �����ϴ� ������ ����.!!
	printf("st3 ���� : %d�̴�.\n",st.next->next->next->age);
	printf("st3 �г� : %d�̴�.\n", st.next->next->next->grade);



	return 0;
}