#include "ofApp.h"


void ofApp::setup() {
	ofBackground(ofColor::black);
	factory1 = ParticleFactory();
	factory1.setOrigin(ofRandom(0, 1900), ofRandom(0, 1080));
	factory1.setCurvingParticleRatio(0.1);
	factory1.setColors(ofColor(ofRandom(0, 100), ofRandom(100, 255), 225, 110), ofColor(ofRandom(0, 100), ofRandom(100, 255), 225, 50));

	factory2 = ParticleFactory();
	factory2.setOrigin(ofRandom(0, 1900), ofRandom(0, 1080));
	factory2.setCurvingParticleRatio(0.8);
	factory2.setColors(ofColor(255, ofRandom(100, 255), ofRandom(0, 100), 110), ofColor(255, ofRandom(100, 255), ofRandom(0, 100), 50));

	factory3 = ParticleFactory();
	factory3.setOrigin(ofRandom(0, 1900), ofRandom(0, 1080));
	factory3.setCurvingParticleRatio(0.5);
	factory3.setColors(ofColor(ofRandom(100, 255), 225, ofRandom(0, 100), 110), ofColor(ofRandom(100, 255), 225, ofRandom(0, 100), 50));

}

void ofApp::update() {
	for (int i = 0; i < particles.size(); ++i)
	{
		particles[i]->move();
	}
	Particle* freshParticle = factory1.emit();
	particles.push_back(freshParticle);

	Particle* freshParticle2 = factory2.emit();
	particles.push_back(freshParticle2);

	Particle* freshParticle3 = factory3.emit();
	particles.push_back(freshParticle3);
}



void ofApp::draw() {
	for (int i = 0; i < particles.size(); ++i)
	{
		particles[i]->draw();
	}
}