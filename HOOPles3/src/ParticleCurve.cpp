#include "ParticleCurve.h"



ParticleCurve::ParticleCurve()
{
	curve = ofVec2f(ofRandom(-10, 10), ofRandom(-10, 10));
}

void ParticleCurve::move() {
	cout << "CurvingParticle::move" << endl;
	position += speed;
	curve.rotate(2);
	position += curve;
}
