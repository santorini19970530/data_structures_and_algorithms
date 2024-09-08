#include "Heap.hpp"

unsigned int parent(unsigned int i){
    return (i - 1) / 2;
}

unsigned int left(unsigned int i){
    return 2 * i + 1;
}

unsigned int right(unsigned int i){
    return 2 * i + 2;
}

Heap::Heap(unsigned int len):
    array(len), heap_size(0){
    // no code
}

Heap::Heap(std::vector<int> source, bool incremental):
    array(source), heap_size(source.size()){
    if(incremental){
        heap_size = 0;
        for(int value : source)
            insert(value);
    }
    else
        buildMaxHeap();
}

void Heap::insert(int k) {
    // Check if we can insert (ensure there is room in the heap)
    if(heap_size >= array.size()){
        std::vector<int> tempArray(array.size() * 2);
        array = tempArray;
    }
        //return;

    // Insert the new element at the end
    array[heap_size] = k;
    heap_size++;

    // Bubble up to maintain max-heap property
    int pos = heap_size - 1;
    while (pos > 0 && array[parent(pos)] < array[pos]) {
        // Swap with parent
        int temp = array[parent(pos)];
        array[parent(pos)] = array[pos];
        array[pos] = temp;

        pos = parent(pos);
    }
}

int Heap::maximum(){
    if (heap_size == 0)
        return -1;

    return array[0];
}

void Heap::maxHeapify(int i){
    int largest = i;
    unsigned int leftChild = left(i);
    unsigned int rightChild = right(i);

    if(leftChild < heap_size && array[leftChild] > array[largest])
        largest = leftChild;

    if(rightChild < heap_size && array[rightChild] > array[largest])
        largest = rightChild;

    if(largest != i){
        int temp = array[i];
        array[i] = array[largest];
        array[largest] = temp;

        maxHeapify(largest);
    }
}

void Heap::buildMaxHeap(){
    for(int j = (heap_size / 2) - 1; j >= 0; j--)
        maxHeapify(j);
}

int Heap::extractMax(){
    if (heap_size == 0)
        return -1;
    
    int max = maximum();

    array[0] = array[heap_size - 1];
    heap_size--;
    maxHeapify(0);

    return max;
}

std::vector<int> Heap::sort(){
    std::vector<int> sorted_array;
    buildMaxHeap();

    while(heap_size > 0)
        sorted_array.push_back(extractMax());

    //std::reverse(sorted_array.begin(), sorted_array.end());

    return sorted_array;
}
