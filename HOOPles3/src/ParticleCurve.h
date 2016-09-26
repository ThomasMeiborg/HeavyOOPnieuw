#pragma once

#include "ofMain.h"
#include "Particle.h"

class ParticleCurve : public Particle
{
public:
	ParticleCurve();
	void move();
	ofVec2f curve;
};