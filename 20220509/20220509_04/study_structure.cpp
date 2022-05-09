#include <stdio.h>
#include <stdlib.h>

void Swap(int* pa, int* pb) {
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("Swap 실행중~\n\n");

	int temp = *pa;
	printf("temp에 *pa값 들어감\n temp=%d\n\n",temp);

	*pa = *pb;
	printf("*pa에 *pb값 들어감\n *pa=%d\n\n", *pa);

	*pb = temp;
	printf("*pb에 *temp값 들어감\n *pb=%d\n\n", *pb);

	printf("Swap 끝!~\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

}

int main() {
	int a = 20; //로컬변수, 자동변수
	int b = 30;
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("\nSwap 전\n");
	printf("a=%d, b=%d\n\n", a, b);

	Swap(&a, &b);

	printf("\nSwap 후\n");
	printf("a=%d, b= %d\n", a, b);
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

	//변수 접근범위, 존속기간

	int* pa = (int*)malloc(100);//할당
	//	= int* pa = (int*)malloc(sizeof(int)*25); 와 같다. 
	// int (4) 니까 4*25라서 = 총 100바이트 할당.


	for (int i = 0; i < 25; i++) {
		pa[i] = i;
	}

	for (int i = 0; i < 25; i++) {
		printf("pa[%d]=%d\n", i, pa[i]);
	}

	pa = (int*)realloc(pa, 200);//재할당

	for (int i = 0; i < 50; i++) {
		printf("pa[%d]=%d\n", i, pa[i]);
	}

	free(pa);

	return 0;
}

/*

void Swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {

	int a = 20;
	int b = 30;

	Swap(a, b);

	return 0;
}*/