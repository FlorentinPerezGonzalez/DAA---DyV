#include "QuickSortS.h"

namespace daa {

QuickSortS::QuickSortS() :
  numbers_(NULL),
  init_(0),
  fin_(0)
  {}

void QuickSortS::resolver() {
  for (size_t i = 0; i < numbers_ -> size(); i++) {
    std::cout << (*numbers_)[i] << ' ';
  }
  std::cout << '\n';
}

void QuickSortS::mezcla(std::pair<Solucion*, Solucion*> solutions) {
  QuickSortS* first_solution = dynamic_cast<QuickSortS*>(solutions.first);
  QuickSortS* second_solution = dynamic_cast<QuickSortS*>(solutions.second);
  numbers_ = first_solution -> getNumbers();
  init_ = first_solution -> getIni();
  fin_ = second_solution -> getFin();
}

Solucion* QuickSortS::getInstance() {
  return new QuickSortS();
}

void QuickSortS::setNumbers(std::vector<int>* numbers) {
  numbers_ = numbers;
}

size_t QuickSortS::size() const {
  return fin_ - init_;
}

std::vector<int>* QuickSortS::getNumbers() {
 return numbers_;
}

void QuickSortS::setIni(size_t ini) {
  init_ = ini;
}

void QuickSortS::setFin(size_t fin) {
  fin_ = fin;
}

size_t QuickSortS::getIni() const {
  return init_;
}

size_t QuickSortS::getFin() const {
  return fin_;
}

} // namespace daa