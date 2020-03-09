# Creamos las reglas
# Regla que permite obtener el programa principal

DIR1 = ../src
DIR2 = ../include
COMP = g++
CFLAGS = -I$(DIR2) -std=c++14 -g

all: programa

programa: $(DIR1)/main.o $(DIR1)/Problema.o $(DIR1)/Solucion.o $(DIR1)/Framework.o $(DIR1)/MergeSortP.o $(DIR1)/MergeSortS.o $(DIR1)/QuickSortS.o $(DIR1)/QuickSortP.o
	$(COMP) -o programa $(DIR1)/main.o $(DIR1)/Problema.o $(DIR1)/Solucion.o $(DIR1)/Framework.o $(DIR1)/MergeSortP.o $(DIR1)/MergeSortS.o $(DIR1)/QuickSortS.o $(DIR1)/QuickSortP.o

$(DIR1)/Problema.o: $(DIR1)/Problema.cpp $(DIR2)/Problema.h $(DIR2)/Solucion.h
	$(COMP) -c -o $@ $< $(CFLAGS)

$(DIR1)/Solucion.o: $(DIR1)/Solucion.cpp $(DIR2)/Solucion.h
	$(COMP) -c -o $@ $< $(CFLAGS)

$(DIR1)/Framework.o: $(DIR1)/Framework.cpp $(DIR2)/Framework.h $(DIR2)/Problema.h $(DIR2)/Solucion.h
	$(COMP) -c -o $@ $< $(CFLAGS)

$(DIR1)/MergeSortP.o: $(DIR1)/MergeSortP.cpp $(DIR2)/MergeSortP.h $(DIR2)/Problema.h $(DIR2)/Solucion.h $(DIR2)/MergeSortS.h
	$(COMP) -c -o $@ $< $(CFLAGS)

$(DIR1)/MergeSortS.o: $(DIR1)/MergeSortS.cpp $(DIR2)/MergeSortS.h $(DIR2)/Solucion.h
	$(COMP) -c -o $@ $< $(CFLAGS)

$(DIR1)/QuickSortP.o: $(DIR1)/QuickSortP.cpp $(DIR2)/QuickSortP.h $(DIR2)/Problema.h $(DIR2)/Solucion.h $(DIR2)/QuickSortS.h
	$(COMP) -c -o $@ $< $(CFLAGS)

$(DIR1)/QuickSortS.o: $(DIR1)/QuickSortS.cpp $(DIR2)/QuickSortS.h $(DIR2)/Solucion.h
	$(COMP) -c -o $@ $< $(CFLAGS)

$(DIR1)/main.o: $(DIR1)/main.cpp $(DIR2)/MergeSortP.h $(DIR2)/Problema.h $(DIR2)/Solucion.h $(DIR2)/MergeSortS.h $(DIR2)/Framework.h $(DIR2)/QuickSortS.h $(DIR2)/QuickSortP.h
	$(COMP) -c -o $@ $< $(CFLAGS)

clean: 
	rm -f programa $(DIR1)/*.o