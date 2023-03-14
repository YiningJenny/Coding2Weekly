#pragma once
#include "neoBoid.h"
#include "ofMain.h"
#include <random>
#include <cstdlib> // for rand()

NeoBoid::NeoBoid(){
	separationWeight = 1.0f;
	cohesionWeight = 0.2f;
	alignmentWeight = 0.1f;

	separationThreshold = 15;
	neighbourhoodSize = 100;

	position = ofVec3f(ofRandom(0, 200), ofRandom(0, 200));
	velocity = ofVec3f(ofRandom(-2, 2), ofRandom(-2, 2));
}

//newBoid::newBoid(ofVec3f& pos, ofVec3f& vel)
//{
//	separationWeight = 1.0f;
//	cohesionWeight = 0.2f;
//	alignmentWeight = 0.1f;
//
//	separationThreshold = 15;
//	neighbourhoodSize = 100;
//
//	position = pos;
//	velocity = vel;
//}
//
//newBoid::~newBoid(){
//
//}
//
//
//void newBoid::setSeparationWeight(float f)
//{
//	separationWeight = f;
//}
//void newBoid::setCohesionWeight(float f)
//{
//	cohesionWeight = f;
//}
//
//void newBoid::setAlignmentWeight(float f)
//{
//	alignmentWeight = f;
//}
//
//
//void newBoid::setSeparationThreshold(float f)
//{
//	separationThreshold = f;
//}
//
//void newBoid::setNeighbourhoodSize(float f)
//{
//	neighbourhoodSize = f;
//}
//
//
//ofVec3f newBoid::getPosition()
//{
//	return position;
//}
//
//
//ofVec3f newBoid::getVelocity()
//{
//	return velocity;
//}
//newBoid::separation(std::vector<newBoid*>& otherBoids)
//{
//	// finds the first collision and avoids that
//	// should probably find the nearest one
//	// can you figure out how to do that?
//	for (int i = 0; i < otherBoids.size(); i++)
//	{
//		if (position.distance(otherBoids[i]->getPosition()) < separationThreshold)
//		{
//			ofVec3f v = position - otherBoids[i]->getPosition();
//			v.normalize();
//			return v;
//		}
//	}
//}
//
//ofVec3f newBoid::cohesion(std::vector<newBoid*>& otherBoids)
//{
//	ofVec3f average(0, 0, 0);
//	int count = 0;
//	for (int i = 0; i < otherBoids.size(); i++)
//	{
//		if (position.distance(otherBoids[i]->getPosition()) < neighbourhoodSize)
//		{
//			average += otherBoids[i]->getPosition();
//			count += 1;
//		}
//	}
//	average /= count;
//	ofVec3f v = average - position;
//	v.normalize();
//	return v;
//}
//
//ofVec3f newBoid::alignment(std::vector<newBoid*>& otherBoids)
//{
//	ofVec3f average(0, 0, 0);
//	int count = 0;
//	//每个人都在互相远离，但是
//	for (int i = 0; i < otherBoids.size(); i++)
//	{
//		if (position.distance(otherBoids[i]->getPosition()) < neighbourhoodSize)
//		{
//			average += otherBoids[i]->getVelocity();
//			count += 1;
//		}
//	}
//	average /= count;
//	ofVec3f v = average - velocity;
//	v.normalize();
//	return v;
//}
//
//void newBoid::update(std::vector<newBoid*>& otherBoids, ofVec3f& min, ofVec3f& max)
//{
//	velocity += separationWeight * separation(otherBoids);
//	velocity += cohesionWeight * cohesion(otherBoids);
//	velocity += alignmentWeight * alignment(otherBoids);
//
//	walls(min, max);
//	position += velocity;
//}
//
//void newBoid::walls(ofVec3f& min, ofVec3f& max)
//{
//	if (position.x < min.x) {
//		position.x = min.x;
//		velocity.x *= -1;
//	}
//	else if (position.x > max.x) {
//		position.x = max.x;
//		velocity.x *= -1;
//	}
//
//	if (position.y < min.y) {
//		position.y = min.y;
//		velocity.y *= -1;
//	}
//	else if (position.y > max.y) {
//		position.y = max.y;
//		velocity.y *= -1;
//	}
//
//
//}

void NeoBoid::draw()
{
	ofSetColor(rand(), position.x, position.y);
	ofCircle(position.x, position.y, 10);
}
