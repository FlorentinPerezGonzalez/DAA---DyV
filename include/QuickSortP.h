#ifndef QUICKSORTP_H_
#define QUICKSORTP_H_

#include "Problema.h"
#include "QuickSortS.h"

namespace daa {

class QuickSortP : public Problema {
private:
  std::vector<int>* numbers_;
  size_t ini_;
  size_t fin_;
public:
  explicit QuickSortP(std::vector<int>* numbers, size_t ini, size_t fin);
  bool isCasoMinimo() final;
  std::pair<Problema*, Problema*> descomponer() final;
  void solver(Solucion* s) final;
};

} // namespace daa

#endif