#include "MergeSortP.h"

namespace daa {

MergeSortP::MergeSortP(std::vector<int>* numbers, size_t init, size_t fin) :
  numbers_(numbers),
  init_(init),
  fin_(fin)
  {}

bool MergeSortP::isCasoMinimo() {
  if (fin_ - init_ <= 2) {
    return true;
  } else {
    return false;
  }
}

std::pair<Problema*, Problema*> MergeSortP::descomponer() {
  size_t mid_point = (fin_ + init_) / 2;
  std::pair<Problema*, Problema*> subProblems;
  subProblems.first = new MergeSortP(numbers_, init_, mid_point);
  subProblems.second = new MergeSortP(numbers_, mid_point, fin_);
  return subProblems;
}

void MergeSortP::solver(Solucion* s) {
  MergeSortS* solution = dynamic_cast<MergeSortS*>(s);
  if ((fin_ - init_) == 2) {
    int aux = (*numbers_)[init_];
    if (aux > (*numbers_)[fin_ - 1]) {
      (*numbers_)[init_] = (*numbers_)[fin_ -1];
      (*numbers_)[fin_ - 1] = aux;
    }
  }
  solution -> setNumbers(numbers_);
  solution -> setInit(init_);
  solution -> setFin(fin_);
}

void MergeSortP::setInit(size_t init) {
  init_ = init;
}

void MergeSortP::setFin(size_t fin) {
  fin_ = fin;
}

size_t MergeSortP::getInit() const {
  return init_;
}

size_t MergeSortP::getFin() const {
  return fin_;
}

} // namespace daa