#include <stdio.h>

int main() {

	int a;

	printf("&a=%p\n", &a);//������ ��������

	int* pa = &a;
	int **ppa = &pa;
	int ***pppa = &ppa;

	***pppa;
	***&ppa;
	**ppa;
	**&pa;
	*pa;
	*&a;
	a;
//ǥ����� �ٸ��� �� �Ȱ���

	***pppa = 100;

	printf("&***pppa=%p, &***&ppa=%p, &**ppa=%p, &*pa=%p, &*&a=%p, &a=%p",
		&***pppa, &***&ppa, &**ppa, &*pa, &*&a, &a);

	printf("***pppa=%p, ***&ppa=%p, **ppa=%p, *pa=%p, *&a=%p, a=%p",
		***pppa, ***&ppa, **ppa, *pa, *&a, a);

	return 0; 
}