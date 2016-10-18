#include "Particle.h"

Particle::Particle(int startX, int startY) {
	radius = ofRandom(10, 50);
	position = ofPoint(startX,
		startY);


	speed = ofVec2f(ofRandom(-5, 5),
		ofRandom(-5, 5));

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
}


void Particle::draw() {
	ofSetColor(outerColor);
	ofDrawCircle(position.x, position.y, radius * 2.0);

	ofSetColor(innerColor);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(centerColor);
	ofDrawCircle(position.x, position.y, radius * 0.25);
}
