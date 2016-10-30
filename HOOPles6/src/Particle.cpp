#include "Particle.h"

Particle::Particle(int startX, int startY) {
	radius = ofRandom(5, 25);
	position = ofPoint(startX, startY);

	speed = ofVec2f(ofRandom(-1, 1), ofRandom(-1, 1));
	lifetime = 0;
}

Particle::~Particle() {
	innerColor = ofColor(31, 127, 255, 127);
	outerColor = ofColor(128, 255, 255, 15);
}

void Particle::setColors(ofColor center, ofColor inner, ofColor outer) {
	centerColor = center;
	innerColor = inner;
	outerColor = outer;
}

void Particle::move() {
	position += speed;
	lifetime++;
}


void Particle::draw() {
	ofSetColor(outerColor);
	ofDrawCircle(position.x, position.y, radius * 2.0);

	ofSetColor(innerColor);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(centerColor);
	ofDrawCircle(position.x, position.y, radius * 0.25);
}

bool Particle::isDead() {
	return lifetime > MAX_LIFETIME;
}