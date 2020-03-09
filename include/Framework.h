
#ifndef FRAMEWORK_H_
#define FRAMEWORK_H_

#include<vector>
#include <utility>
#include<iostream>
#include "Problema.h"
#include "Solucion.h"

namespace daa {

class Framework {
public:
	Framework();
	virtual ~Framework();
	void divideyVenceras(Problema* p, Solucion* s);
};

} // namespace daa

#endif /* FRAMEWORK_H_ */
