#ifndef QUICKSORTS_H_
#define QUICKSORTS_H_

#include "Solucion.h"

namespace daa {

class QuickSortS : public Solucion {
private:
  std::vector<int>* numbers_;
  size_t init_;
  size_t fin_;
public:
  explicit QuickSortS();
  void resolver() final;
  void mezcla(std::pair<Solucion*, Solucion*> solutions) final;
  Solucion* getInstance() final;
  void setNumbers(std::vector<int>* numbers);
  size_t size() const;
  std::vector<int>* getNumbers();
  void setIni(size_t ini);
  void setFin(size_t fin);
  size_t getIni() const;
  size_t getFin() const;
};

} // namespace daa

#endif