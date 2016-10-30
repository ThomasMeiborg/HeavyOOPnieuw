#pragma once

#include "Particle.h"

class ParticleFactory
{
public:

	//Singleton.....
	//Functie om de singleton mee te instantieren. Er kan maar 1 object met de eigenschappen van ParticleFactory aangemaakt worden.
	static ParticleFactory* instance();
	//..............

	void setOrigin(int x, int y);
	void setCurvingParticleRatio(float ratio);

	void setFactoryColorRange(int roodMin, int roodMax, int blauwMin, int blauwMax, int groenMin, int groenMax);

	Particle* emit();

private:

	//Singleton...
	//Door de ParticleFactory private te constructen kunnen andere objecten niet nieuwe ParticleFactory's of objecten met de eigenschappen van ParticleFactory aanmaken.
	ParticleFactory();

	//Het enige object met de eigenschappen van ParticleFactory wordt hier aangemaakt.
	static ParticleFactory* theSingleton;
	//............

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
