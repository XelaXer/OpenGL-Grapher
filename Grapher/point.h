#include <string>

#ifndef point_hpp
#define point_hpp

class point {
	float x, y, z;
	float r, g, b;
	float size;
	int group;
	std::string label;
public:
	point::point();
	point::point(float, float, float);
	point::point(float, float, float, float);
	point::point(float, float, float, float, float, float, float);
	float getX();
	float getY();
	float getZ();
	float getR();
	float getG();
	float getB();
	float getSize();
	int getGroup();
	std::string getLabel();
	void setX(float);
	void setY(float);
	void setZ(float);
	void setR(float);
	void setG(float);
	void setB(float);
	void setSize(float);
	void setGroup(int);
	void setLabel(std::string);
	void draw();
};
#endif