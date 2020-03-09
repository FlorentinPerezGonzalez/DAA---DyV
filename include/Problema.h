
#ifndef PROBLEMA_H_
#define PROBLEMA_H_

#include<vector>
#include<utility>
#include<iostream>
#include"Solucion.h"

namespace daa {

class Problema {
public:
	Problema();
	virtual ~Problema();

	virtual bool isCasoMinimo();
	virtual std::pair<Problema*,Problema*> descomponer();
	virtual void solver(Solucion* s);
};

} // namespace daa

#endif /* PROBLEMA_H_ */
