#include "HeapSort.h"
#include <iostream>

void Heap::heapFunctionality(int heArr[], int x, int xh) {

	int biggest = xh;

	int left = 2 * xh + 1;
	
	int right = 2 * xh + 2;

	if (left < x && heArr[left] > heArr[biggest])
		biggest = left;

	if (right < x && heArr[right] > heArr[biggest])
		biggest = right;
	//swap and continue to heapify if root is not biggest
	if (biggest != xh) {
		
		std::swap(heArr[xh], heArr[biggest]);
		heapFunctionality(heArr, x, biggest);
	}

}
//main function to do the heap sort
void Heap::heapSort(int heArr[], int h) {
	
	//build max heap
	for (int i = h / 2 - 1; i >= 0; i++)
		heapFunctionality(heArr, h, i);
	
	//heap sort
	for (int i = h - 1; h >= 0; i--) {
		std::swap(heArr[0], heArr[i]);

		//heapify root element to get the highest element at root again
		heapFunctionality(heArr, i, 0);
	}

	
}

void Heap::printHeap(int heArr[], int h) {

	for (int i = 0; i < h; i++) {
		std::cout << heArr[i] << " ";
		std::cout << "\n";
	}
}
