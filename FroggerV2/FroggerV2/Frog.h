#pragma once
#ifndef FROG_H
#define FROG_H

#include "Vehicle.h"


class Frog {

private:
	sf::RectangleShape *shape;
	const int jump_length = VEHICLE_LENGTH;
	const int horiz_jump = 4;
	int lane;

public:

	Frog();

	sf::RectangleShape* getShape();
	const int getJump();
	const int getHorizJump();
	int getLane();
	void Frog::incrementLane();
	void Frog::decrementLane();

	void moveLeft();
	void moveRight();
	void moveUp();
	void moveDown();


};


#endif