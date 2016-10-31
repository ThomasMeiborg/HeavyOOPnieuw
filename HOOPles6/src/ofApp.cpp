#include "ofApp.h"

void ofApp::setup() {
	ofBackground(ofColor::black);
	factory = ParticleFactory::instance();
	factory->setOrigin(ofGetWidth() / 2, ofGetHeight() / 4);
	factory->setCurvingParticleRatio(0.1);
	factory->setFactoryColorRange(0, 100, 100, 255, 255, 255);

	angle = 1;
	speed = 0.008;
	radius = 350;
	colornumb = 0;
	//factory2 = ParticleFactory();
	//factory2.setOrigin(ofRandom(0, 1900), ofRandom(0, 1080));
	//factory2.setCurvingParticleRatio(0.8);
	//factory2.setFactoryColorRange(255, 255, 100, 255, 0, 100);

	//factory3 = ParticleFactory();
	//factory3.setOrigin(ofRandom(0, 1900), ofRandom(0, 1080));
	//factory3.setCurvingParticleRatio(0.5);
	//factory3.setFactoryColorRange(100, 255, 255, 255, 0, 100);
}



void ofApp::update() {
	for (unsigned int i = 0; i < particles.size(); ++i)
	{
		particles[i]->move();
	}
	
	if (ofGetFrameNum() % 5 == 0) {
		Particle* freshParticle = factory->emit();
		particles.push_back(freshParticle);

		//Particle* freshParticle2 = factory2.emit();
		//particles.push_back(freshParticle2);

		//Particle* freshParticle3 = factory3.emit();
		//particles.push_back(freshParticle3);
	}

	factory->setOrigin(ofGetWidth() / 2 + sin(angle)* radius, ofGetHeight() / 2 + cos(angle)* radius);
	angle = angle + speed;

	oogst.cleanup(particles);

	ofSetWindowTitle("Particles:" + ofToString(particles.size()));
}



void ofApp::draw() {
	for (unsigned int i = 0; i < particles.size(); ++i)
	{
		particles[i]->draw();
	}
}

void ofApp::keyPressed(int key) {
	colornumb += 1;
	if (colornumb == 0) {
		factory->setFactoryColorRange(0, 100, 100, 255, 255, 255);
	}
	if (colornumb == 1) {
		factory->setFactoryColorRange(255, 255, 100, 255, 0, 100);
	}
	if (colornumb == 2) {
		factory->setFactoryColorRange(100, 255, 255, 255, 0, 100);
	}
	if (colornumb > 2) {
		factory->setFactoryColorRange(0, 100, 100, 255, 255, 255);
		colornumb = 0;
		particles.clear();
	}
}