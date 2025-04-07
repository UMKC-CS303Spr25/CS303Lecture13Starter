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

//TASK 3: HEAPREMOVE
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

	//restore 'heapness'
	//starting with root (parent = 0)
	int parent = 0, right = 0, max = 0;

	//set left child

	//while (left < heapsize())
	while (left < theHeap.size()) {
		//set right child

		// find max child 



		//swap max with the parent
		//set parent to the max


		//reset left child of current parent
	}
}
 
//TASK 4
//PRE: None - assumes theHeap is an unsorted vector of data
//POST: sorts theHeap
template <typename ItemType>
void Heap<ItemType>::heapSort() {

	//if there are no items, return
	int theHeapSize = theHeap.size();
	if (theHeapSize == 0)
		return;

	//start at heapsize/2-1 (last parent) to 0
		for (int i = theHeapSize / 2 - 1; i >= 0; --i) {
			//while true
			//set parent (current max)
			// and left & right children

			while (true) {
				//if valid position
				//set max child (if either child > current max)


				//if max position is not the parent
				//swap max and parent
				//reset parent to current max
				if (max != parent) {
					swap(theHeap[parent], theHeap[max]);
					parent = max; // Move down the tree
				}
				else 
					break; // Heap property restored
			}
		}
 
}