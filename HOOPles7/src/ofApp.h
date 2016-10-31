#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "ParticleFactory.h"
#include "ParticleOogst.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		void keyPressed(int key);

		int colornumb;

	private:
		vector<Particle*> particles;

		ParticleFactory* factory;
		//ParticleFactory factory2;
		//ParticleFactory factory3;
		ParticleOogst oogst;
};
