#pragma once

#include "ofApp.h"

ofApp::~ofApp()
{
	for (int i = 0; i < boids.size(); i++)
	{
		delete boids[i];
	}
	for (int i = 0; i < neoBoids.size(); i++)
	{
		delete neoBoids[i];
	}
}

//--------------------------------------------------------------
void ofApp::setup() {


	int screenW = ofGetScreenWidth();
	int screenH = ofGetScreenHeight();

	ofBackground(0, 50, 50);
	int NUM_BOIDS = 50;

	// set up the boids
	for (int i = 0; i < NUM_BOIDS; i++) {
		boids.push_back(new Boid());
	}
	for (int i = 0; i < NUM_BOIDS; i++) {
		neoBoids.push_back(new NeoBoid());
		
	}

}


//--------------------------------------------------------------
void ofApp::update() {

	ofVec3f min(0, 0);
	ofVec3f max(ofGetWidth(), ofGetHeight());
	for (int i = 0; i < boids.size(); i++)
	{
		boids[i]->update(boids, min, max);
	}

	for (int i = 0; i < boids.size(); i++) {
		neoBoids[i]->update(neoBoids, min, max);
	}
}

//--------------------------------------------------------------
void ofApp::draw() {

	for (int i = 0; i < boids.size(); i++)
	{
		boids[i]->draw();
	}

	for (int i = 0; i < neoBoids.size(); i++)
	{
		neoBoids[i]->draw();
	}

}


//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}
