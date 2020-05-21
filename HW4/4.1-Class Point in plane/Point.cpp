#include "Point.h"

void Point::Set(int vertical, int horizontal)
{
	Point::vertical = vertical;
	Point::horizontal = horizontal;
}

void Point::Move(int x, int y)
{
	Point::vertical += x;
	Point::horizontal += y;
}
void Point::Rotate()
{
	int temp = (-1) *Point::vertical;
	Point::vertical = Point::horizontal;
	Point::horizontal = temp;
}
