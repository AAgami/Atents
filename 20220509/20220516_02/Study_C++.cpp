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
	Pig()//아무 것도 받지않음
		:_age(0.0f), _weight(0.0f), _height(0.0f), _name(" ") {
		cout << "Pig 기본 생성자" << endl;
	}

	Pig(float age, float weight, float height, string name)
		:_age(age), _weight(weight), _height(height), _name(name) {
		cout << "Pig 인자를 받는 생성자" << endl;
	}

	~Pig(){
		cout << "Pig 소멸자" << endl;
	}

	void Speak() {
		cout << _name << "이(가) 꿀꿀합니다.." << endl;
	}

	void lnit(float age, float weight, float height, string name) {
		_age = age;
		_weight = weight;
		_height = height;
		_name = name;

	}

	void info() {
		cout << "이름: " << _name << endl;
		cout << "나이: " << _age << endl;
		cout << "몸무게: " << _weight << endl;
		cout << "키: " << _height << endl << endl;
	}
};

int main() {

	Pig pig2; //기본 생성자
	Pig pig3(1.3f, 200.0f, 100.0f, "꾸꿀");
	//위에 두개는 프로그램 실행이 종료될때까지 남아있음.
	//그래서  종료했을때 +2로 종료됨.

	Pig*pig = new Pig(1.3f, 210.0f, 100.0f, "돼지");
	pig->Speak(); //말해보라고 시킴
	delete pig;//동적 메모리 종료

	//Pig array[10];//객체 배열. 배열을 만들 때는 값을 부여할 수 없음.
	//배열을 만들땐 기본 생성자가 무조건 필요


	int pigCount = 0;
	char buff[100];
	cout << "만들 돼지 마리 수를 입력하세요: " << endl;
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


