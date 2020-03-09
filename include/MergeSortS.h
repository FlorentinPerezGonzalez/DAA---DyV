#ifndef MERGESORTS_H_
#define MERGESORTS_H_

#include "Solucion.h"

namespace daa {

class MergeSortS : public Solucion {
private:
  std::vector<int>* numbers_;
  size_t init_;
  size_t fin_;
public:
  explicit MergeSortS();
  void resolver() final;
  void mezcla(std::pair<Solucion*, Solucion*> solutions) final;
  Solucion* getInstance() final;
  void setNumbers(std::vector<int>* numbers);
  size_t size() const;
  std::vector<int>* getNumbers();
  void setInit(size_t init);
  void setFin(size_t fin);
  size_t getInit() const;
  size_t getFin() const;
};

} // namespace daa

#endif