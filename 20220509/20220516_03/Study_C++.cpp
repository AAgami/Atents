#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class Pig {
private:
	float _age;
	float _weight;
	float _height;
	string _name;

public:
	Pig()
		: _age(0.0f), _weight(0.0f), _height(0.0f), _name("") {
		cout << "Pig 기본 생성자" << endl;
	}

	Pig(float age, float weight, float height, string name)
		: _age(age), _weight(weight), _height(height), _name(name) {
		cout << "Pig 인자를 받는 생성자" << endl;
	}

	~Pig() {
		cout << "Pig 소멸자" << endl;
	}

	void Init(float age, float weight, float height, string name) {
		_age = age;
		_weight = weight;
		_height = height;
		_name = name;
	}

	void Speak() {
		cout << _name << "이 꿀꿀 합니다.." << endl;
	}

	void info() {
		cout << "이름: " << _name << endl;
		cout << "나이: " << _age << endl;
		cout << "몸무게: " << _weight << endl;
		cout << "키: " << _height << endl << endl;

	}
};

int main() {
	int pigCount = 0;
	char buff[50];
	cout << "만들 돼지 갯수를 입력하세요: ";
	cin >> pigCount;

	Pig ** pigArray = new Pig*[pigCount];   // Pig포인터 배열


	for (int i = 0; i < pigCount; i++) {
		sprintf(buff, "pig_%d", i);
		pigArray[i] = new Pig(1.2f * i, 100 + (i * 3.4f), 100.0f, buff);
	}

	for (int i = 0; i < pigCount; i++) {
		pigArray[i]->Speak();
	}

	// info 함수 호출

	for (int i = 0; i < pigCount; i++) {
		delete pigArray[i];
	}

	delete[] pigArray;

	return 0;
}