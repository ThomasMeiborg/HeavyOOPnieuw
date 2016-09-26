#pragma once

#include "ofMain.h"

//Hier worden alle attributen of eigenschappen van het object/de class aangemaakt.
//In de .cpp kunnen ze bewerkt worden en waardes meekrijgen.

class Particle
{
public:
	ofPoint position;
	float radius;
	ofVec2f speed;
	long lifetime;

	ofColor centerColor = ofColor::white;
	ofColor innerColor;
	ofColor outerColor;

	Particle();

	void setup();
	void update();
	virtual void move();
	// Virtual??
	void draw();
	void defineColors(ofColor center, ofColor inner, ofColor outer);
};
