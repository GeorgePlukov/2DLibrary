#include <stdio.h>
#include <math.h>

#include "Vector2D.h"
#include "Point2D.h"

// Constructors
Vector2D::Vector2D() {
	x = 0.0f;
	y = 0.0f;
	magnitude = 0.0f;
}

Vector2D::Vector2D(float _x, float _y) {
	x = _x;
	y = _y;
	magnitude = this->length();
}
Vector2D::Vector2D(Point2D *p1, Point2D *p2) {
	x = p2->x - p1->x;
	y = p2->y - p1->y;
	magnitude = p1->distanceTo(p2);
} 
Vector2D::Vector2D(float _x, float _y, float _magnitude) {
	x = _x;
	y = _y;
	magnitude = _magnitude;
}
// Deconstructor
Vector2D::~Vector2D() {
}
float Vector2D::length() {
	return sqrt(pow(this->x, 2) + pow(this->y, 2));
}
Vector2D* Vector2D::normalize() {
	Vector2D *v;
	v = new Vector2D(this->x / this->magnitude, this->y / this->magnitude, 1.0f);
	return v;
}
Vector2D* Vector2D::multiply(float s) {
	Vector2D *v;
	v = new Vector2D(this->x * s, this->y * s);
	return v;
}

void Vector2D::print() {
	printf("x:%f, y:%f, length:%f\n", x, y, magnitude);
}
