#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "ParticleCurve.h"

#define MAX_PARTICLES 100

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key);

	vector<Particle*> particles;
};
