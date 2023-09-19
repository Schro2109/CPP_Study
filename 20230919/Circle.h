class Circle {
	int radius; // 원의 반지름 값
public:
	Circle() { this->radius = 0; };
	void setRadius(int radius); // 반지름을 설정한다.
	double getArea(); // 면적을 리턴한다.
};