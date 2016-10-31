#pragma once


#include "ofMain.h"
#include "Particle.h"

const class CurvingParticle : public Particle {
    public:
        const CurvingParticle(int startX, int startY);

        const void move();

        ofVec2f curve;
};

