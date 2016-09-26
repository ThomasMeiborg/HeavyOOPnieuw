#include "ofApp.h"

void ofApp::setup() {
	ofBackground(ofColor::black);

	for (int i = 0; i < MAX_PARTICLES; ++i)
	{
		particles.push_back(new Particle());
		particles.push_back(new ParticleCurve());
		// Als het aantal particles groter dan 0 is en kleiner dan het maximum aantal
		// worden er nieuwe particles aangemaakt (totdat het maximum bereikt wordt).
	}
}

void ofApp::update() {
	for (int i = 0; i < particles.size(); ++i)
	{
		particles[i]->move();
	}
}

void ofApp::draw() {
	for (int i = 0; i < particles.size(); ++i)
	{
		particles[i]->draw();
	}
}
// Zolang de particle een bepaalde grote heeft wordt het getekent en beweegt het.

void ofApp::keyPressed(int key) {
	particles.clear();
	for (int i = 0; i < MAX_PARTICLES; ++i)
	{
		particles.push_back(new Particle());
		particles.push_back(new ParticleCurve());
		// Als de particles verwijdert worden moeten ze ook weer opnieuw aangemaakt worden.
	}
}
