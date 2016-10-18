#pragma once


#include "ofMain.h"
#include "Particle.h"

class CurvingParticle : public Particle {
    public:
        CurvingParticle(int startX, int startY);

        void move();

        ofVec2f curve;
};

