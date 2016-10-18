#pragma once


#include "ofMain.h"

class Particle {
    public:
        Particle(int startX, int startY);

        virtual void move();

        void draw();

        void setColors(ofColor center, ofColor inner, ofColor outer);

    protected:
        ofPoint position;
        float radius;
        ofVec2f speed;
        long lifetime;

        ofColor centerColor = ofColor::white;
        ofColor innerColor;
        ofColor outerColor;

};

