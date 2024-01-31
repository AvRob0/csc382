#include "bubble.h"
#include "Insertion.h"
#include "ShellSort.h"
#include "HeapSort.h"
#include <iostream>
#include <time.h>



int main() {
	

	std::cout << " BUBBLE SORT " << std::endl;

	int sort_Arr[] = {10, 1, 20, 11, 3, 7, 19, 5, 6, 15, 2, 9, 8, 16, 13, 14, 4, 12, 17, 18};
	clock_t start, end{};
	int n = sizeof(sort_Arr) / sizeof(sort_Arr[0]);

	for (int i = 0; i < 20; i++) {
		sort_Arr[i] = rand() % 20;
	}
	
	Bubble b1;
	start = clock();
	b1.bubble(sort_Arr, n);
	b1.printArray(sort_Arr, n);

	std::cout << "" << std::endl;
	
	std::cout << " bubble sort time = " << (end - start) << std::endl;
	/*
	start = clock();
	std::sort(arr, arr + n);
	end = clock();
	std::cout << " STD library sort in ms time = " << (end - start) << std::endl;
	*/
	std::cout << " " << std::endl;

	std::cout << "INSERTION SORT " << std::endl;
	
	Insertion i1;
	start = clock();
	i1.insertionSort(sort_Arr, n);
	i1.printInsertion(sort_Arr, n);

	std::cout << "" << std::endl;

	std::cout << " Insertion Sort Time = " << (end - start) << std::endl;

	std::cout << "" << std::endl;
	
	std::cout << " SHELL SORT " << std::endl;

	Shell s1;
	start = clock();
	s1.shellSort(sort_Arr, n);
	s1.printShell(sort_Arr, n);

	std::cout << "" << std::endl;

	std::cout << " Shell Sort Time = " << (end - start) << std::endl;

	std::cout << "" << std::endl;

	std::cout << " HEAP SORT " << std::endl;
	int sort_Heap[] = { 10, 1, 20, 11, 3, 7, 19, 5, 6, 15, 2, 9, 8, 16, 13, 14, 4, 12, 17, 18 };
	int sh = sizeof(sort_Heap) / sizeof(sort_Heap[0]);
	/*
	for (int s = 0; s < 20; s++) {
		sort_Heap[s];
	}
	*/
	Heap h1;
	start = clock();
	h1.heapSort(sort_Heap, sh);
	h1.printHeap(sort_Heap, sh);

	std::cout << "" << std::endl;

	std::cout << " Heap Sort Time = " << (end - start) << std::endl;
}
