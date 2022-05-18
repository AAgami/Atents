#include <iostream>

using namespace std;

// 기능 확장
class Math {


public:
	int add(int a, int b) {
		return a + b;
	}

	int sub(int a, int b) {
		return  a - b;
	}

	int mul(int a, int b) {
		return a * b;
	}
};

class ExtMath : public Math {
public:
	float div(int a, int b) {
		return a / (float)b;
	}

};


int main() {
	int a = 20;
	int b = 30;

	Math math;

	cout << a << " + " << b << " = " << math.add(a, b) << endl;

	ExtMath extmath;

	cout << a << " + " << b << " = " << extmath.add(a, b) << endl;

	cout << a << " / " << b << " = " << extmath.div(a, b) << endl;


	return 0;
}