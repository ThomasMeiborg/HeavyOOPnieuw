#pragma once

#include "Particle.h"

class ParticleFactory
{
public:
	void setOrigin(int x, int y);
	void setCurvingParticleRatio(float ratio);

	void setFactoryColorRange(int roodMin, int roodMax, int blauwMin, int blauwMax, int groenMin, int groenMax);

	Particle* emit();


private:
	int originX;
	int originY;
	float curvingParticleRatio;
	ofColor inner;
	ofColor outer;



	int roodMin;
	int roodMax;
	int blauwMin;
	int blauwMax;
	int groenMin;
	int groenMax;
};
