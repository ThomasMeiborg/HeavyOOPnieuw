#pragma once


#include "ofMain.h"

#define MAX_LIFETIME 200;


const class Particle {
    public:
        Particle(int startX, int startY);
		
		virtual ~Particle();

        const virtual void move();

        const void draw();

		const void setColors(ofColor center, ofColor inner, ofColor outer);

		const bool isDead();

    protected:
        ofPoint position;
        float radius;
        ofVec2f speed;
        long lifetime;

		ofColor centerColor;
        ofColor innerColor;
        ofColor outerColor;

};

