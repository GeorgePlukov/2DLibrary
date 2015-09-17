#ifndef __Point2D_H__
#define __Point2D_H__

class Point2D {

public:
	// Constructors
	Point2D();
	Point2D(float x, float y);

	// Deconstructor
	~Point2D();

	// Public Variables
	float x, y;

	// Public Functions
	float distanceTo(Point2D *pt);
	float fastDistance(Point2D *pt);
	//Point2D movePoint(Vector2D v);

	void print();
private:

};



#endif