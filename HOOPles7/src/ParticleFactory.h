#pragma once

#include "Particle.h"

const class ParticleFactory
{
public:

	//Singleton.....
	//Functie om de singleton mee te instantieren.
	static ParticleFactory* instance();
	//..............

	const void setOrigin(int x, int y);
	const void setCurvingParticleRatio(float ratio);

	const void setFactoryColorRange(int roodMin, int roodMax, int blauwMin, int blauwMax, int groenMin, int groenMax);

	Particle* emit() const;

	//Factory movement.........
	//void move();
	//..............

private:
	//Singleton...
	//Door de ParticleFactory private te instantieren kunnen andere objecten de ParticleFactory eigenschappen niet gebruiken. Ze bestaan alleen voor dit object.
	const ParticleFactory();

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

	//Factory Movement..........
/*
protected:
	ofPoint position;
	float angle;
	float speed;
	int radius;
*/
	//....................

};
