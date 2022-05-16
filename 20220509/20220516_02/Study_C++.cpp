#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include <stdio.h>

using namespace std;

class Pig {
private:
	float _age;
	float _weight;
	float _height;
	string _name;

public:
	Pig()//�ƹ� �͵� ��������
		:_age(0.0f), _weight(0.0f), _height(0.0f), _name(" ") {
		cout << "Pig �⺻ ������" << endl;
	}

	Pig(float age, float weight, float height, string name)
		:_age(age), _weight(weight), _height(height), _name(name) {
		cout << "Pig ���ڸ� �޴� ������" << endl;
	}

	~Pig(){
		cout << "Pig �Ҹ���" << endl;
	}

	void Speak() {
		cout << _name << "��(��) �ܲ��մϴ�.." << endl;
	}

	void lnit(float age, float weight, float height, string name) {
		_age = age;
		_weight = weight;
		_height = height;
		_name = name;

	}

	void info() {
		cout << "�̸�: " << _name << endl;
		cout << "����: " << _age << endl;
		cout << "������: " << _weight << endl;
		cout << "Ű: " << _height << endl << endl;
	}
};

int main() {

	Pig pig2; //�⺻ ������
	Pig pig3(1.3f, 200.0f, 100.0f, "�ٲ�");
	//���� �ΰ��� ���α׷� ������ ����ɶ����� ��������.
	//�׷���  ���������� +2�� �����.

	Pig*pig = new Pig(1.3f, 210.0f, 100.0f, "����");
	pig->Speak(); //���غ���� ��Ŵ
	delete pig;//���� �޸� ����

	//Pig array[10];//��ü �迭. �迭�� ���� ���� ���� �ο��� �� ����.
	//�迭�� ���鶩 �⺻ �����ڰ� ������ �ʿ�


	int pigCount = 0;
	char buff[100];
	cout << "���� ���� ���� ���� �Է��ϼ���: " << endl;
	cin >> pigCount;

	Pig *pigArray = new Pig[pigCount];

	for (int i = 0; i < pigCount; i++) {
		sprintf(buff, "pig_%d", i);
		pigArray[i].lnit(1.2f*i, 100 + (i*3.4f), 100.0f, buff);
	}

	for (int i = 0; i < pigCount; i++) {
		pigArray[i].Speak();
	}

	/*

	(*(pigArray + i)).Speak();
			pigArray + i)->Speak();

	*/
	
	delete[] pigArray;
	return 0;
}


