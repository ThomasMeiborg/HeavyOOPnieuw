#include "ParticleFactory.h"
#include "CurvingParticle.h"

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

Particle* ParticleFactory::emit() const{
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

const void ParticleFactory::setFactoryColorRange(int rMin, int rMax, int gMin, int gMax, int bMin, int bMax) {
	roodMin = rMin;
	roodMax = rMax;
	groenMin = gMin;
	groenMax = gMax;	
	blauwMin = bMin;
	blauwMax = bMax;

}


const void ParticleFactory::setCurvingParticleRatio(float ratio) {
	const float curvingParticleRatio = ratio;
}

const void ParticleFactory::setOrigin(int x, int y) {
	originX = x;
	originY = y;

//Factory Movement.........
/*
	//Spawnermovement starting point
	position = ofPoint(ofGetWidth() / 2, ofGetHeight() / 4);
	
	angle = 0, 05;
	speed = 0.01;
	radius = 200;
*/
}

/*
void ParticleFactory::move() {
	position = ofPoint(ofGetWidth() / 2 + sin(angle)* radius, ofGetHeight() / 2 + cos(angle)* radius);
	angle = angle + speed;
}
*/
//...................


