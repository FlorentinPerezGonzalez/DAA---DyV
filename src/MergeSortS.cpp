#include "MergeSortS.h"

namespace daa {

MergeSortS::MergeSortS() :
  numbers_(NULL),
  init_(0),
  fin_()
  {}

void MergeSortS::resolver() {
  for (size_t i = 0; i < numbers_ -> size(); i++) {
    std::cout << (*numbers_)[i] << ' ';
  }
  std::cout << '\n';
}

void MergeSortS::mezcla(std::pair<Solucion*, Solucion*> solutions) {
  std::vector<int> aux;
  MergeSortS* first_solution = dynamic_cast<MergeSortS*>(solutions.first);
  MergeSortS* second_solution = dynamic_cast<MergeSortS*>(solutions.second);
  size_t i = first_solution -> getInit();
  const size_t max_i = first_solution -> getFin();
  size_t j = second_solution -> getInit();
  const size_t max_j = second_solution -> getFin();
  std::vector<int>* aux_numbers = first_solution -> getNumbers();
  while (i < max_i && j < max_j) {
    if ((*aux_numbers)[i] < (*aux_numbers)[j]) {
      aux.push_back((*aux_numbers)[i++]);
    } else {
      aux.push_back((*aux_numbers)[j++]);
    }
  }
  while (i < max_i) {
    aux.push_back((*aux_numbers)[i++]);
  }
  while (j < max_j) {
    aux.push_back((*aux_numbers)[j++]);
  }
  numbers_ = aux_numbers;
  for (int k = 0, p = first_solution -> getInit(); k < aux.size(); k++) {
    (*numbers_)[p++] = aux[k];
  }
  init_ = first_solution -> getInit();
  fin_ = second_solution -> getFin();
}

Solucion* MergeSortS::getInstance() {
  return new MergeSortS();
}

void MergeSortS::setNumbers(std::vector<int>* numbers) {
  numbers_ = numbers;
}

size_t MergeSortS::size() const {
  // std::cerr << "init: "<<init_ << " fin_: " << fin_ << "\n";
  return fin_ - init_;
}

std::vector<int>* MergeSortS::getNumbers() {
 return numbers_;
}

void MergeSortS::setInit(size_t init) {
  init_ = init;
}

void MergeSortS::setFin(size_t fin) {
 fin_ = fin;
}

size_t MergeSortS::getInit() const {
  return init_;
}

size_t MergeSortS::getFin() const {
  return fin_;
}

} // namespace daa