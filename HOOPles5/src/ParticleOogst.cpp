#include "ParticleOogst.h"

void ParticleOogst::cleanup(vector<Particle*>& particles) {
	for (vector<Particle*>::iterator it = particles.begin(); it != particles.end();) {
		if ((*it)->isDead()) {
			delete *it;
			it = particles.erase(it);
		}
		else {
			++it;
		}
	}
}