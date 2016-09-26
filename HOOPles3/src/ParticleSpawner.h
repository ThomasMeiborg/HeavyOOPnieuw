#pragma once

#include "ofMain.h"

class ParticleSpawner
{
public:
	ofPoint position;
	float radius;
	ofColor centerColor = ofColor::white;
	ParticleSpawner();

	void setup();
	void draw();

};