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
		
		//ParticleFactory(int startX, int startY);

	private:
		vector<Particle*> particles;

		ParticleFactory* factory;
		//ParticleFactory factory2;
		//ParticleFactory factory3;
		//Er kan nog maar 1 factory bestaan door de singleton dus factory 2 en 3 hebben geen zin meer.
		ParticleOogst oogst;
};
