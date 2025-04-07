#pragma once

#include <string>
#include <vector>
using namespace std;

template <typename ItemType>
class Heap {

private:
	vector<ItemType> theHeap;

public:
	Heap();
	void heapInsert(ItemType item);
	void heapPrint();
	void heapRemove();
	void setHeap(vector<ItemType> theData);
	void heapSort(); //wrapper
};

template <typename ItemType>
Heap<ItemType>::Heap() {
	theHeap.clear();
}


template <typename ItemType>
void Heap<ItemType>::setHeap(vector<ItemType> theData) {
	theHeap.clear();
	theHeap = theData;
}

template <typename ItemType>
void Heap<ItemType>::heapPrint() {
	for (auto i : theHeap)
		cout << i << " ";
	cout << endl;
}

//TASK 2: HEAPINSERT
template <typename ItemType>
void Heap<ItemType>::heapInsert(ItemType item) {

	// add the item to the end of the vector

	// set location of child & parent


	// while child is in range and the child is greater than parent
	// swap with parent


}

//PRE: None
//POST: removes the maximum element from the heap
template <typename ItemType>
void Heap<ItemType>::heapRemove() {
	//if there are no items, return
	if (theHeap.size() == 0)
		return;
	//if there is only one element, do pop_back function
	if (theHeap.size() == 1) {
		theHeap.pop_back();
		return;
	}
	//swap last element and first element & pop back
	swap(theHeap[0], theHeap[theHeap.size() - 1]);
	theHeap.pop_back();

	//restore 'heapness'
	int parent = 0, right = 0, max = 0;
	int left = 2 * parent + 1;


	while (left < theHeap.size()) {
		right = left + 1;
		// find max child and swap it with parent
		if (right < theHeap.size() &&
			theHeap[right] > theHeap[left])
			max = right;
		else
			max = left;

		if (theHeap[parent] < theHeap[max]) {
			swap(theHeap[max], theHeap[parent]);
			parent = max;
		}
		else
			break; // the heap is not out of order
		left = 2 * parent + 1;
  }


}
 
//PRE: None - assumes theHeap is an unsorted vector of data
//POST: sorts theHeap
template <typename ItemType>
void Heap<ItemType>::heapSort() {
	//if there are no items, return
	int theHeapSize = theHeap.size();
	if (theHeapSize == 0)
		return;

	//build the max heap correct the heap from bottom up
	for (int i = theHeapSize / 2 - 1; i >= 0; --i) {
		int parent = i;
		cout << endl << endl;
		while (true) {
			heapPrint();
			int max = parent;
			int left = 2 * parent + 1;
			int right = left + 1;

			if (left < theHeapSize && theHeap[left] > theHeap[max])
				max = left;

			if (right < theHeapSize && theHeap[right] > theHeap[max])
				max = right;

			if (max != parent) {
				swap(theHeap[parent], theHeap[max]);
				parent = max; // Move down the tree
			}
			else 
				break; // Heap property restored


		}
	}
 
}