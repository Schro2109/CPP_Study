#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
	Circle c;
	int radius;   double area;
	while (1) {
		cout << "원의 반지름 입력 :  ";  cin >> radius;
		c.setRadius(radius);
		if (radius == 0) break;
		area = c.getArea();
		cout << "원의 너비:" << area << endl;
		if (area > 500)
			cout << "원의 너비는  1000보다 큽니다" << endl;
		else
			cout << "원의 너비는  1000보다 크지 않습니다." << endl;
	}
	cout << "프로그램 종료" << endl;
}