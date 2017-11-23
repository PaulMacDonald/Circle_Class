#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
private:
	double radius;
	static int numberOfObjects;

public:
	Circle();
	Circle (double r);
	double getArea() const;
	double getRadius() const;
	void setRadius(double r);
	static int getNumberOfObjects();
};

bool operator==(const Circle &c1, const Circle &c2);

bool operator==(const Circle &c1, const Circle &c2);

bool operator>(const Circle &c1, const Circle &c2);

bool operator<(const Circle &c1, const Circle &c2);

bool operator>=(const Circle &c1, const Circle &c2);

bool operator<=(const Circle &c1, const Circle &c2);

bool operator!=(const Circle &c1, const Circle &c2);

#endif
