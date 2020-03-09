#ifndef SOLUCION_H_
#define SOLUCION_H_

#include<vector>
#include <utility>
#include<iostream>

namespace daa {

class Solucion {
public:
	Solucion();
	virtual ~Solucion();

	virtual void resolver();
	virtual void mezcla(std::pair<Solucion*,Solucion*>);
	virtual Solucion* getInstance();
};

} // namespace daa

#endif /* SOLUCION_H_ */
