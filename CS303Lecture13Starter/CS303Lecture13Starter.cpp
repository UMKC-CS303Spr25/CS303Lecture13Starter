// CS303Lecture13Starter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <fstream>
#include <iostream>
#include "Heap.h"

void loadHeap(Heap<int>& theHeap) {
	ifstream inFile;
	inFile.open("input2.txt");
	if (!inFile.good()) {
		cout << "File error\n";
		return;
	}

	int inValue;

	//TASK 2: HEAPINSERT
	// add the item to the end of the vector
	while (inFile >> inValue) {
		theHeap.heapInsert(inValue);
		theHeap.heapPrint();
	}
}

using namespace std;
int main() {

	Heap<int> myHeap;
	loadHeap(myHeap);

	myHeap.heapInsert(80);    //TASK 2
	myHeap.heapPrint();

	myHeap.heapRemove();      //TASK 3
	myHeap.heapPrint();
	cout << endl << endl;

	//set a vector to heapSort
	vector<int> theData = { 6,29,28,18,26,20,66,39,32,37,74,76,80 };
	//vector<int> theData = { 6,29,28,18,26,20,66,2 };
	myHeap.setHeap(theData);
	myHeap.heapSort();       //TASK 4
	myHeap.heapPrint();

}
