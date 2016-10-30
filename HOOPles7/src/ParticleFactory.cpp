#include "ParticleFactory.h"
#include "CurvingParticle.h"

//ParticleFactory::ParticleFactory(int startX, int startY) {
//	position = ofPoint(startX, startY);
//	speed = ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5));
//}

//void ParticleFactory::move(int speedX, int speedY) {
//	xPos += speedX;
//	yPos += speedY;
//}
//.......


//Singleton......

ParticleFactory::ParticleFactory() {
}

ParticleFactory* ParticleFactory::instance() {
	if (!theSingleton) {
		theSingleton = new ParticleFactory();
	}
	return theSingleton;
}

ParticleFactory* ParticleFactory::theSingleton = 0;
//..............

Particle* ParticleFactory::emit() {
	Particle*newParticle;

	if (ofRandom(1) > (1 - curvingParticleRatio)) {
		newParticle = new CurvingParticle(originX, originY);
	}
	else {
		newParticle = new Particle(originX, originY);
	}
	int randomCenterColor = ofRandom(0, 2);
	
	ofColor randomInnerColor = ofColor(ofRandom(roodMin, roodMax),ofRandom(groenMin, groenMax), ofRandom(blauwMin, blauwMax), 100);
	ofColor randomOuterColor = ofColor(ofRandom(roodMin, roodMax), ofRandom(groenMin, groenMax), ofRandom(blauwMin, blauwMax), 50);
	newParticle->setColors(ofColor::white, randomInnerColor, randomOuterColor);
	if (randomCenterColor == 1) {
	newParticle->setColors(ofColor::white, randomInnerColor, randomOuterColor);
	}
	else {
	newParticle->setColors(ofColor::black, randomInnerColor, randomOuterColor);
	}
	return newParticle;
}

void ParticleFactory::setFactoryColorRange(int rMin, int rMax, int gMin, int gMax, int bMin, int bMax) {
	roodMin = rMin;
	roodMax = rMax;
	groenMin = gMin;
	groenMax = gMax;	
	blauwMin = bMin;
	blauwMax = bMax;

}


void ParticleFactory::setCurvingParticleRatio(float ratio) {
	curvingParticleRatio = ratio;
}

void ParticleFactory::setOrigin(int x, int y) {
	originX = x;
	originY = y;
}


