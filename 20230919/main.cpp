#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
	Circle c;
	int radius;   double area;
	while (1) {
		cout << "���� ������ �Է� :  ";  cin >> radius;
		c.setRadius(radius);
		if (radius == 0) break;
		area = c.getArea();
		cout << "���� �ʺ�:" << area << endl;
		if (area > 500)
			cout << "���� �ʺ��  1000���� Ů�ϴ�" << endl;
		else
			cout << "���� �ʺ��  1000���� ũ�� �ʽ��ϴ�." << endl;
	}
	cout << "���α׷� ����" << endl;
}