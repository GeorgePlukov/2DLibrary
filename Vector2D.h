#ifndef __Vector2D_H__
#define __Vector2D_H__
#include "Point2D.h"

class Vector2D {

public:
	// Constructors
	Vector2D();
	Vector2D(float x, float y);
	Vector2D(float x, float y, float magnitude);

	Vector2D(Point2D *p1, Point2D *p2);
	// Deconstructor
	~Vector2D();

	// Public Variables
	float x, y, magnitude;

	// Public Functions
	Vector2D* normalize();
	Vector2D moveVector(Point2D v);
	Vector2D* multiply(float s);
	float length();
	void print();
private:

};



#endif