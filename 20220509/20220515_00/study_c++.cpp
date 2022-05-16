#include <iostream>
using namespace std;
int global = 100;

class A {
public:
	int value;

};


int add(int a, int b) {
	static int temp;
	temp = a + b;

	return temp;
}

void swap(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;

}

void swap2(int *pa, int *pb) {
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void swap3(int &refa, int &refb) { //call by reference
	int temp;
	temp = refa;
	refa = refb;
	refb = temp;
}

int main(){
	int a = 100;
	int b = 200;

	int result0 = add(a, b);
	double result1 = 1.2;

	cout << result0 << endl << result1 << endl<< endl;

	cout << "Swap 전"<<endl<<"a" << a << endl << "b" << b << endl; 

	swap(a, b); //call by value
	cout << "Swap 후" << endl << "a" << a << endl << "b" << b <<endl<< endl;

	swap2(&a, &b); //call by address
	cout << "Swap2 후" << endl << "a" << a << endl << "b" << b << endl << endl;
	 
	swap3(a, b); //call by reference
	cout << "Swap3 후" << endl << "a" << a << endl << "b" << b << endl;

	return 0;
}