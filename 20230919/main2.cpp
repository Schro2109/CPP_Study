//�迭�� �����͸� �̿��� ���� ũ�� �̻��� ���� ã�� ���α׷�
#include <iostream>
using namespace std;
#include "Circle.h"

int main() {
	Circle c[3], *p;
	int radius;
	int count = 0;
	p = c;  //
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "��° ���� ������ �Է� : ";
		cin >> radius;
		p->setRadius(radius);
		cout << i + 1 << "��° ���� �ʺ� : " << p->getArea() << endl << endl;
		p++;
	}
	p = &c[0];
	for (int i = 0; i < 3; i++) {
		if (p->getArea() > 1000) count++;
		p++;
	}
	cout << "������ 1000���� ū ���� " << count << "�� �Դϴ�" << endl;
}