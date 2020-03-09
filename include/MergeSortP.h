#ifndef MERGESORTP_H_
#define MERGESORTP_H_

#include "Problema.h"
#include "MergeSortS.h"

namespace daa {

class MergeSortP : public Problema {
private:
  std::vector<int>* numbers_;
  size_t init_;
  size_t fin_;
public:
  explicit MergeSortP(std::vector<int>* numbers, size_t init, size_t fin);
  bool isCasoMinimo() final;
  std::pair<Problema*, Problema*> descomponer() final;
  void solver(Solucion* s) final;
  void setInit(size_t init);
  void setFin(size_t fin);
  size_t getInit() const;
  size_t getFin() const;
};

} // namespace daa

#endif