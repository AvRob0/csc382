#include "Insertion.h"
#include <iostream>


void Insertion::insertionSort(int insertionArr[], int p) {


	for (int ins = 1; ins < p; ins++) {
		
		int sort = insertionArr[ins];
		
		int ppp = ins - 1;

		while (sort < insertionArr[ppp] && ppp >= 0) {

			insertionArr[ppp + 1] = insertionArr[ppp];
			-- ppp;
		}
		insertionArr[ppp + 1] = sort; 

	}
}


void Insertion::printInsertion(int insertionArr[], int size) {
	
	int pp;

	
	for (pp = 0; pp < size; pp++) {
		
		std::cout << insertionArr[pp] << " , ";

	}
}
