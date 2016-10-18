#include "ParticleFactory.h"
#include "CurvingParticle.h"

Particle* ParticleFactory::emit() {
	Particle*newParticle;

	if (ofRandom(1) > (1 - curvingParticleRatio)) {
		newParticle = new CurvingParticle(originX, originY);
	}
	else {
		newParticle = new Particle(originX, originY);
	}

	newParticle->setColors(ofColor::white, inner, outer);

	return newParticle;
}

void ParticleFactory::setCurvingParticleRatio(float ratio) {
	curvingParticleRatio = ratio;
}

void ParticleFactory::setOrigin(int x, int y) {
	originX = x;
	originY = y;
}
void ParticleFactory::setColors(ofColor innerColor, ofColor outerColor) 
{
	inner = innerColor;
	outer = outerColor;
}