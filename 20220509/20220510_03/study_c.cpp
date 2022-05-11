#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int calculator(int(*pfunc)(int, int), int a, int b) {
	return pfunc(a, b); //�Լ� ������ pfunc
	//�Լ� �����Ͷ� �Լ��� ����Ű�� �������̴�. �Լ��� �ּҸ� �����ϴ� ������ ������� ���̴�.
	//���� �� �� ��ȯ Ÿ�԰� � �Ű������� ���� �Լ����� ��Ÿ���� �����ؾ��Ѵ�.

}

int main() {
	int a = 20;
	int b = 30;
	int oper = 0;

	int(*pfuncArray[3])(int, int);   // �Լ� ������ �迭
	char operArray[3] = { '+', '-', 'x' };

	pfuncArray[0] = add;
	pfuncArray[1] = sub;
	pfuncArray[2] = mul;

	printf("0. ���ϱ�\n1. ����\n2. ���ϱ�\n�ش��ϴ� ��ȣ�� ��������.\n");
	scanf("%d", &oper);

	int result = calculator(pfuncArray[oper], a, b);
	
	printf("%d %c %d = %d\n", a, operArray[oper], b, result);

	return 0;
}