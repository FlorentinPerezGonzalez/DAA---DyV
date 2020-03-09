#include "QuickSortP.h"

namespace daa {

QuickSortP::QuickSortP(std::vector<int>* numbers, size_t ini, size_t fin) :
  numbers_(numbers),
  ini_(ini),
  fin_(fin)
  {}

bool QuickSortP::isCasoMinimo() {
  return ini_ >= fin_;
}

std::pair<Problema*, Problema*> QuickSortP::descomponer() {
  size_t ini = ini_;
  size_t fin = fin_ - 1;
  size_t pivot_index = ini_;
  size_t pivot = (*numbers_)[pivot_index];
  bool to_left = true;
  while (pivot_index != fin) {
    if (to_left) {
      if ((*numbers_)[fin] < pivot) {
        int temp = (*numbers_)[pivot_index];
        (*numbers_)[pivot_index] = (*numbers_)[fin];
        (*numbers_)[fin] = temp;
        temp = pivot_index;
        pivot_index = fin;
        fin = temp;
        to_left = false;
      }
    } else {
      if ((*numbers_)[fin] > pivot) {
        int temp = (*numbers_)[pivot_index];
        (*numbers_)[pivot_index] = (*numbers_)[fin];
        (*numbers_)[fin] = temp;
        temp = pivot_index;
        pivot_index = fin;
        fin = temp;
        to_left = true;
      }
    }
    if (to_left) {
      fin--;
    } else {
      fin++;
    }
  }
  std::pair<Problema*, Problema*> problems;
  problems.first = new QuickSortP(numbers_, ini_, pivot_index); // probar con fin + 1
  problems.second = new QuickSortP(numbers_, pivot_index + 1, fin_);
  return problems;
}

void QuickSortP::solver(Solucion* s) {
  QuickSortS* solution = dynamic_cast<QuickSortS*>(s);
  solution -> setNumbers(numbers_);
  solution -> setIni(ini_);
  solution -> setFin(fin_);
}

} // namespace daa