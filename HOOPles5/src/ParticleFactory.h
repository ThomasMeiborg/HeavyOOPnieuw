#pragma once

#include "Particle.h"

class ParticleFactory
{
public:
	void setOrigin(int x, int y);
	void setCurvingParticleRatio(float ratio);

	//void setColors(ofColor innerColor, ofColor outerColor);

	void setFactoryColorRange(int roodMin, int roodMax, int blauwMin, int blauwMax, int groenMin, int groenMax);

	Particle* emit();

	//int factory = 0;

private:
	int originX;
	int originY;
	float curvingParticleRatio; //geeft aan hoeveel procent er van bepaalde particles aangemaakt moeten worden ?
	ofColor inner;
	ofColor outer;



	int roodMin;
	int roodMax;
	int blauwMin;
	int blauwMax;
	int groenMin;
	int groenMax;
};
