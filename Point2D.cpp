#include <stdio.h>
#include <math.h>

#include "Point2D.h"

// Constructors
Point2D::Point2D() {
	x = 0.0f;
	y = 0.0f;
}

Point2D::Point2D(float _x, float _y) {
	x = _x;
	y = _y;
}


// Deconstructor
Point2D::~Point2D() {
}

// Public Functions
float Point2D::distanceTo(Point2D *pt) {
	return sqrt(pow(pt->x - this->x, 2) + pow(pt->y - this->y, 2));
}
float Point2D::fastDistance(Point2D *pt) {
	return pow(pt->x - this->x, 2) + pow(pt->y - this->y, 2);
}

void Point2D::print() {
	printf("x:%f, y:%f\n", x, y);
}

