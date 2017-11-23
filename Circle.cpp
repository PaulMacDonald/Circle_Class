#include"CIrcle.h"
#include<cmath>

int Circle::numberOfObjects = 0;

// Default constructor
Circle::Circle()
{
	radius = 1;
	numberOfObjects++;
}

// Specific constructor
Circle::Circle(double r)
{
	radius = r;
	numberOfObjects++;
}

// Return area of this circle
double Circle::getArea() const
{
	return pow(radius, 2) * 3.14159;
}

// Return the radius of this circle
double Circle::getRadius() const
{
	return radius;
}

// Set a new radius
void Circle::setRadius(double r)
{
	radius = (r >= 0) ? r : 0;
}

// Return the number of circle objects
int Circle::getNumberOfObjects()
{
	return numberOfObjects;
}

//////////
// OPERATOR OVERLOADS
//////////

// '=' checks equality of the two circles
bool operator==(const Circle &c1, const Circle &c2)
{
	if (c1.getRadius() == c2.getRadius())
		return true;

	return false; // else...
}

/* '>' checks if this circle's radius is greater than
the second circle's radius*/
bool operator>(const Circle &c1, const Circle &c2)
{
	if (c1.getRadius() > c2.getRadius())
		return true;

	return false; // else...
}

/* '<' checks if this circle's radius is less than
the second circle's radius*/
bool operator<(const Circle &c1, const Circle &c2)
{
	if (c1.getRadius() < c2.getRadius())
		return true;

	return false; // else...
}

/* '>=' checks if this circle's radius is greater than
OR equal to the second cirle's radius*/
bool operator>=(const Circle &c1, const Circle &c2)
{
	if (c1.getRadius() >= c2.getRadius())
		return true;

	return false; // else...
}

/* '<=' checks if this circle's radius is less than
OR equal to the second cirle's radius*/
bool operator<=(const Circle &c1, const Circle &c2)
{
	if (c1.getRadius() <= c2.getRadius())
		return true;

	return false; // else...
}

// '!=' checks the INEQUALITY of the two circle's radii
bool operator!=(const Circle &c1, const Circle &c2)
{
	if (c1.getRadius() != c2.getRadius())
		return true;

	return false; // else...
}