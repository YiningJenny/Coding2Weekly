#ifndef _TEST_APP
#define _TEST_APP


#pragma once
#include "ofMain.h"
#include <vector>
#include "neoBoid.h"

#include "boid.h"
#include "neoBoid.h"

class ofApp : public ofBaseApp {

public:
    ~ofApp();

    void setup();
    void update();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y);
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);

    std::vector<Boid*> boids;//这里的每一个成员都是一只鸟
    std::vector<Boid*> neoBoids;


    virtual void draw();
};

#endif	
