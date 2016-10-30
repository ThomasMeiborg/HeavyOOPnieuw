#include "CurvingParticle.h"

CurvingParticle::CurvingParticle(int startX, int startY) : Particle(startX, startY) {
    curve = ofVec2f(ofRandom(-1, 1), ofRandom(-1, 1));
}

void CurvingParticle::move() {
    position += speed;
    curve.rotate(2);
    position += curve;
}