#include <stdio.h>
#include <stdlib.h>

void Swap(int* pa, int* pb) {
	printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
	printf("Swap ������~\n\n");

	int temp = *pa;
	printf("temp�� *pa�� ��\n temp=%d\n\n",temp);

	*pa = *pb;
	printf("*pa�� *pb�� ��\n *pa=%d\n\n", *pa);

	*pb = temp;
	printf("*pb�� *temp�� ��\n *pb=%d\n\n", *pb);

	printf("Swap ��!~\n");
	printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");

}

int main() {
	int a = 20; //���ú���, �ڵ�����
	int b = 30;
	printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
	printf("\nSwap ��\n");
	printf("a=%d, b=%d\n\n", a, b);

	Swap(&a, &b);

	printf("\nSwap ��\n");
	printf("a=%d, b= %d\n", a, b);
	printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");

	//���� ���ٹ���, ���ӱⰣ

	int* pa = (int*)malloc(100);//�Ҵ�
	//	= int* pa = (int*)malloc(sizeof(int)*25); �� ����. 
	// int (4) �ϱ� 4*25�� = �� 100����Ʈ �Ҵ�.


	for (int i = 0; i < 25; i++) {
		pa[i] = i;
	}

	for (int i = 0; i < 25; i++) {
		printf("pa[%d]=%d\n", i, pa[i]);
	}

	pa = (int*)realloc(pa, 200);//���Ҵ�

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