#include "Point.h"

#include <cmath>
#include <iostream>

Point::Point(float x, float y)
{
	X = x;
	Y = y;
}


void Point::displayPoint()
{
	this;
	std::cout << "x : " << X << " y : " << Y << std::endl;
}

Point Point::operator+(Point rightPoint)
{
	Point middle = Point((rightPoint.X + this->X) / 2.0f , (rightPoint.Y + this->Y) / 2.0f);
	return middle;
}

// A > B
bool Point::operator==(Point pointAComparer)
{
	bool similarX = (std::abs(this->X - pointAComparer.X) < std::numeric_limits<int>::epsilon());
	bool similarY = (std::abs(this->Y - pointAComparer.Y) < std::numeric_limits<int>::epsilon());

	return similarX && similarY;
}

bool Point::operator>(Point pointAComparer)
{
	float myDistance = this->X * this->X + this->Y * this->Y;
	float aDistance = pointAComparer.X * pointAComparer.X + pointAComparer.Y * pointAComparer.Y;

	return myDistance > aDistance;
}

bool Point::operator<(Point a)
{
	float myDistance = this->X * this->X + this->Y * this->Y;
	float aDistance = a.X * a.X + a.Y * a.Y;

	return myDistance < aDistance;
}


std::ostream& operator<<(std::ostream& os, const Point& obj)
{
	return os << "x : " << obj.X << " y : " << obj.Y;
}


//
//std::ostream& Point::operator<<(std::ostream& os, const Point& obj)
//{
//	// write obj to stream
//	return os <<"x : " << obj.X << " y : " << obj.Y;
//}
