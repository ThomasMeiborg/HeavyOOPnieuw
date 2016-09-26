#include "Particle.h"
#include "ofApp.h"

Particle::Particle() {
	radius = ofRandom(0, 10);
	position = ofPoint(ofGetWidth() / 2, ofGetHeight() / 2);
	speed = ofVec2f(ofRandom(-10, 10), ofRandom(-10, 10));
	innerColor = ofColor(ofRandom(0, 100), ofRandom(100, 255), 225, 127);
	outerColor = ofColor(128, 255, 255, 15);
}

void Particle::defineColors(ofColor center, ofColor inner, ofColor outer) {
	centerColor = center;
	innerColor = inner;
	outerColor = outer;
}

void Particle::setup() {
	//lifetime = 0;
}

void Particle::update() {
	//lifetime += 1;
	//if (lifetime = 2000) 
	//{
	//Als lifetime een bepaalde hoeveelheid bereikt moet de particle verdwijnen.

	//for (int i = 0; i < MAX_PARTICLES; ++i)
	//{
	//particles.push_back(new Particle());
	//particles.push_back(new ParticleCurve());
	// Als de particles verwijdert worden moeten ze ook weer opnieuw aangemaakt worden.
	//}
	//}
	//}
}

void Particle::move() {
	cout << "Particle::move()" << endl; // ??
	position += speed;
}

void Particle::draw() {
	ofSetColor(outerColor);
	ofDrawCircle(position.x, position.y, radius * 2);

	ofSetColor(innerColor);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(centerColor);
	ofDrawCircle(position.x, position.y, radius*0.25);
}