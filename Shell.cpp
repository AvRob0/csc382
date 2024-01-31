#include "ShellSort.h"
#include <iostream>


void Shell::shellSort(int shellArray[], int s) {

	for (int check = s / 2; check > 0; check /= 2) {
		for (int sA = check; sA < s; sA += 1) {
			
			int temp = shellArray[sA];
			
			int aa;
			
			for (aa = sA; aa >= check && shellArray[aa - check] > temp; aa -= check) {
				shellArray[aa] = shellArray[aa - check];
			}
			shellArray[aa] = temp;
		}
	}
}

void Shell::printShell(int shellArray[], int size) {

	int ps;

	for (ps = 0; ps < size; ps++)
		std::cout << shellArray[ps] << " , ";
}
