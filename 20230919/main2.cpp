//배열과 포인터를 이용한 일정 크기 이상의 원을 찾는 프로그램
#include <iostream>
using namespace std;
#include "Circle.h"

int main() {
	Circle c[3], *p;
	int radius;
	int count = 0;
	p = c;  //
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "번째 원의 반지름 입력 : ";
		cin >> radius;
		p->setRadius(radius);
		cout << i + 1 << "번째 원의 너비 : " << p->getArea() << endl << endl;
		p++;
	}
	p = &c[0];
	for (int i = 0; i < 3; i++) {
		if (p->getArea() > 1000) count++;
		p++;
	}
	cout << "면적이 1000보다 큰 원은 " << count << "개 입니다" << endl;
}