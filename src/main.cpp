
#ifndef MAIN_
#define MAIN_

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>
#include "MergeSortP.h"
#include "MergeSortS.h"
#include "QuickSortP.h"
#include "QuickSortS.h"
#include "Framework.h"

void usage(std::ostream& os);

int main(int argc, char* argv[]) {
	if (argc != 2) {
		std::cerr << "Se espera recibir un argumento\n";
		usage(std::cout);
		return 1;
	}
	const size_t size = atoi(argv[1]); 
	std::vector<int> vector_to_sort;
	srand (time(NULL));
	std::cout <<  "MergeSort:\n";
	std::cout <<  "Vector sin ordenar:\n";
	for (int i = 0; i < size; i++) {
		vector_to_sort.push_back(rand() % 100);
		std::cout << vector_to_sort[i] << " ";
	}
	std::cout << "\n";
	daa::Problema* problema = new daa::MergeSortP(&vector_to_sort, 0, vector_to_sort.size());
	daa::Solucion* solucion = new daa::MergeSortS();
	daa::Framework* framework = new daa::Framework();
	framework -> divideyVenceras(problema, solucion);
	std::cout << "Vector ordenado:\n";
	solucion -> resolver();
	std::cout <<  "QuickSort:\n";
	std::cout <<  "Vector sin ordenar:\n";
	vector_to_sort.clear();
	for (int i = 0; i < size; i++) {
		vector_to_sort.push_back(rand() % 100);
		std::cout << vector_to_sort[i] << " ";
	}
	delete problema;
	delete solucion;
	problema = new daa::QuickSortP(&vector_to_sort, 0, vector_to_sort.size());
	solucion = new daa::QuickSortS();
	framework -> divideyVenceras(problema, solucion);
	std::cout << "Vector ordenado:\n";
	solucion -> resolver();
};

void usage(std::ostream& os) {
	os << "Usage: " <<program_invocation_name << " <Vector size>\n";
}

#endif /* MAIN_ */
