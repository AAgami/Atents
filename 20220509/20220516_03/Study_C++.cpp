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
		cout << "Pig �⺻ ������" << endl;
	}

	Pig(float age, float weight, float height, string name)
		: _age(age), _weight(weight), _height(height), _name(name) {
		cout << "Pig ���ڸ� �޴� ������" << endl;
	}

	~Pig() {
		cout << "Pig �Ҹ���" << endl;
	}

	void Init(float age, float weight, float height, string name) {
		_age = age;
		_weight = weight;
		_height = height;
		_name = name;
	}

	void Speak() {
		cout << _name << "�� �ܲ� �մϴ�.." << endl;
	}

	void info() {
		cout << "�̸�: " << _name << endl;
		cout << "����: " << _age << endl;
		cout << "������: " << _weight << endl;
		cout << "Ű: " << _height << endl << endl;

	}
};

int main() {
	int pigCount = 0;
	char buff[50];
	cout << "���� ���� ������ �Է��ϼ���: ";
	cin >> pigCount;

	Pig ** pigArray = new Pig*[pigCount];   // Pig������ �迭


	for (int i = 0; i < pigCount; i++) {
		sprintf(buff, "pig_%d", i);
		pigArray[i] = new Pig(1.2f * i, 100 + (i * 3.4f), 100.0f, buff);
	}

	for (int i = 0; i < pigCount; i++) {
		pigArray[i]->Speak();
	}

	// info �Լ� ȣ��

	for (int i = 0; i < pigCount; i++) {
		delete pigArray[i];
	}

	delete[] pigArray;

	return 0;
}