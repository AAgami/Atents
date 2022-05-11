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
	return pfunc(a, b); //함수 포인터 pfunc
	//함수 포인터란 함수를 가리키는 포인터이다. 함수의 주소를 저장하는 포인터 변수라는 뜻이다.
	//선언 할 때 반환 타입과 어떤 매개변수를 갖는 함수인지 나타내어 선언해야한다.

}

int main() {
	int a = 20;
	int b = 30;
	int oper = 0;

	int(*pfuncArray[3])(int, int);   // 함수 포인터 배열
	char operArray[3] = { '+', '-', 'x' };

	pfuncArray[0] = add;
	pfuncArray[1] = sub;
	pfuncArray[2] = mul;

	printf("0. 더하기\n1. 빼기\n2. 곱하기\n해당하는 번호를 누르세요.\n");
	scanf("%d", &oper);

	int result = calculator(pfuncArray[oper], a, b);
	
	printf("%d %c %d = %d\n", a, operArray[oper], b, result);

	return 0;
}