#pragma once
#include <ostream>

class Point
{

public:
	float X;
	float Y;

	Point();
	Point(float x, float y);

	void displayPoint();

	Point operator+(Point rightPoint);

	bool operator==(Point a);
	bool operator<(Point a);
	bool operator>(Point a);

	friend std::ostream& operator<<(std::ostream& os, const Point& obj);

};

