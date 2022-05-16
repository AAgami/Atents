#include <iostream>
using namespace std;


int* createArray(int size) {

	int* parray = new int[size];

	return parray;
}


int main() {
	int* parray = createArray(10);
	
	for (int i = 0; i < 10; i++) {
		parray[i] = i;
	}
	

	for (int i = 0; i < 10; i++) {
		cout << "parray[" << i << "] = " << parray[i] << endl;
	}
	
	cout << "parray[1] = " << parray[1] << endl;
	cout << "parray[5] = " << parray[5] << endl;
	cout << "parray[11] = " << parray[11] << endl;//쓰레기값


	delete[] parray;

	return 0;
}