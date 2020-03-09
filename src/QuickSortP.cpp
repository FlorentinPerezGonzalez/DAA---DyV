#include "QuickSortP.h"

namespace daa {

QuickSortP::QuickSortP(std::vector<int>* numbers, size_t ini, size_t fin) :
  numbers_(numbers),
  ini_(ini),
  fin_(fin)
  {}

bool QuickSortP::isCasoMinimo() {
  if ((fin_ - ini_) <= 1) {
    return true;
  } else {
    return false;
  }
}

std::pair<Problema*, Problema*> QuickSortP::descomponer() {
  std::cerr << "Entra\n";
  size_t ini = ini_;
  size_t fin = fin_ - 1;
  size_t pivot_index = ini_;
  size_t pivot = (*numbers_)[pivot_index];
  std::cerr << "INI Y FIN: "<<ini_ << " "<<fin_ <<"\n";
  std::cout << "Vector antes:\n";
  for (int i = 0; i < 5; i++) {
    std::cout << (*numbers_)[i]<<" ";
  }
  std::cout<<"\n";
  char c;
  std::cin >> c;
  while (ini < fin) {
    std::cout << "infinito\n";
    while (((*numbers_)[fin] > pivot)) {
      fin--;
    }
    while (((*numbers_)[ini] <= pivot) && (ini < fin)) {
      ini++;
    }
    if (ini < fin) {
      int aux =  (*numbers_)[ini];
      (*numbers_)[ini] = (*numbers_)[fin];
      (*numbers_)[fin] = aux;
    }
  }
  int aux = (*numbers_)[fin];
  (*numbers_)[fin] = (*numbers_)[pivot_index];
  (*numbers_)[pivot_index] = aux;
  std::pair<Problema*, Problema*> problems;
  std::cerr << "Sí\n";
  std::cout << "INI_: " <<ini_<<" ini "<<ini<<"\n";
  std::cout << "fin: " <<fin<<" fin_ "<<fin_<<"\n";
  char a;
  std::cin >> a;
  problems.first = new QuickSortP(numbers_, ini_, fin + 1); // probar con fin + 1
  problems.second = new QuickSortP(numbers_, fin + 1, fin_);
  std::cerr << "Sale\n";
  return problems;
}

void QuickSortP::solver(Solucion* s) {
  std::cerr << "llega\n";
  std::cerr << "INI Y FIN: "<<ini_ << " "<<fin_ <<"\n"; 
  QuickSortS* solution = dynamic_cast<QuickSortS*>(s);
  solution -> setNumbers(numbers_);
  solution -> setIni(ini_);
  solution -> setFin(fin_);
}

void QuickSortP::setIni(size_t ini) {

}

void QuickSortP::setFin(size_t fin) {

}

size_t QuickSortP::getIni() const {

}

size_t QuickSortP::getFin() const {

}

} // namespace daa