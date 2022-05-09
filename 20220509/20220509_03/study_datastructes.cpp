#include <stdio.h>

int main() {

	int a;

	printf("&a=%p\n", &a);//포인터 형지정자

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
//표기법만 다르고 다 똑같음

	***pppa = 100;

	printf("&***pppa=%p, &***&ppa=%p, &**ppa=%p, &*pa=%p, &*&a=%p, &a=%p",
		&***pppa, &***&ppa, &**ppa, &*pa, &*&a, &a);

	printf("***pppa=%p, ***&ppa=%p, **ppa=%p, *pa=%p, *&a=%p, a=%p",
		***pppa, ***&ppa, **ppa, *pa, *&a, a);

	return 0; 
}