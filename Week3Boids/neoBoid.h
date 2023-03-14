#pragma once
#ifndef _NeoBOID
#define _NeoBOID
#include <vector>
#include "ofMain.h"
#include "boid.h"

class NeoBoid:public Boid{
//private:
//	ofVec3f position;
//	ofVec3f velocity;
//
//	float separationWeight;
//	float cohesionWeight;
//	float alignmentWeight;
//
//	float separationThreshold;
//	float neighbourhoodSize;
//
//	ofVec3f separation(std::vector<Boid*>& otherBoids);
//	ofVec3f cohesion(std::vector<Boid*>& otherBoids);
//	ofVec3f alignment(std::vector<Boid*>& otherBoids);

	// all the methods and variables after the
	// public keyword can only be used by anyone
public:
	NeoBoid();
	/*private:
	ofVec3f position;
	ofVec3f velocity;

	float separationWeight;
	float cohesionWeight;
	float alignmentWeight;

	float separationThreshold;
	float neighbourhoodSize;

	ofVec3f separation(std::vector<Boid*>& otherBoids);
	ofVec3f cohesion(std::vector<Boid*>& otherBoids);
	ofVec3f alignment(std::vector<Boid*>& otherBoids);*/

	// all the methods and variables after the
	// public keyword can only be used by anyone
	void draw();
};

#endif
