#include <iostream>
#include "Heap.hpp"

void testHeapMaximum() {
    std::cout << "\nTesting Heap Maximum...\n";

    Heap heap(1); // Create a heap with capacity of 1
    heap.insert(1); // Insert into the heap
    std::cout << "Maximum after inserting 1: " << heap.maximum() << " (Expected: 1)\n"; // Should return 1
    
    // Insert more elements
    heap.insert(2); 
    heap.insert(3);
    std::cout << "Maximum after inserting 2 and 3: " << heap.maximum() << " (Expected: 3)\n"; // Should return 3
}

void testInsertIntoHeap() {
    std::cout << "\nTesting Insert into Heap...\n";

    Heap heap(5); // Create a heap with capacity for 5 elements
    heap.insert(5); // Insert first element
    heap.insert(10); // Insert second element
    heap.insert(6); // Insert third element
    std::cout << "Max after inserting 10, 5, and 6: " << heap.maximum() << " (Expected: 10)\n"; // Should be 10

    // Insert more elements, including the size check
    heap.insert(8);
    heap.insert(20); // 20 should be the new max
    std::cout << "Inserted 20, maximum should now be: " << heap.maximum() << " (Expected: 20)\n"; // Should be 20
    std::cout << "Heap size after insert: " << heap.heap_size << " (Expected: 5)\n"; // Make sure size is 5
}


void testInsertIntoZeroHeap() {
    std::cout << "\nTesting Insert into Zero Heap...\n";
    
    Heap heap(1); // Create a heap with capacity of 1
    heap.insert(1); // Insert into the empty heap
    std::cout << "After inserting 1, maximum: " << heap.maximum() << " (Expected: 1)\n"; // Should return 1
    std::cout << "Heap size: " << heap.heap_size << " (Expected: 1)\n"; // Should be 1
}

void testIncrementalHeap() {
    std::cout << "Testing Incremental Heap Creation...\n";
    
    std::vector<int> vec = {14, 18};
    Heap incrementalHeap(vec, true); // Creates an incremental heap
    std::cout << "Max of incremental heap: " << incrementalHeap.maximum() << " (Expected: 18)\n"; // Should be 18
}

void testHeapInsertion() {
    std::cout << "\nTesting Insertion...\n";

    Heap heap(10); // Create a heap with capacity of 10

    // Insert elements into the heap
    heap.insert(10);
    std::cout << "Inserted: 10\n";
    
    heap.insert(20);
    std::cout << "Inserted: 20\n";
    
    heap.insert(15);
    std::cout << "Inserted: 15\n";
    
    std::cout << "Current maximum after insertions: " << heap.maximum() << " (Expected: 20)\n";

    for (int i = 0; i < 5; i++) {
        heap.insert(i * 2); // Insert even numbers
        std::cout << "Inserted: " << (i * 2) << "\n";
    }

    std::cout << "Maximum after multiple insertions: " << heap.maximum() << " (Expected: 20)\n";
}

void testHeapExtraction() {
    std::cout << "\nTesting Maximum Extraction...\n";

    Heap heap(6); 
    heap.insert(1);
    heap.insert(2);
    heap.insert(3);
    heap.insert(4);
    heap.insert(5);
    heap.insert(6);
    
    std::cout << "Extracting maximum values:\n";
    while (heap.heap_size > 0) {
        std::cout << "Extracted max: " << heap.extractMax() << "\n";
    }
}

void testHeapSorting() {
    std::cout << "\nTesting Heap Sorting...\n";

    std::vector<int> unsortedArray = {30, 10, 20, 40, 50, 60, 80, 70};
    Heap sortHeap(unsortedArray, false); // Create a heap from an unsorted array
    std::vector<int> sortedArray = sortHeap.sort();

    std::cout << "Sorted array: ";
    for (int num : sortedArray) {
        std::cout << num << " ";
    }
    std::cout << "\n";
}

int main() {
    testIncrementalHeap();
    testHeapInsertion();
    testHeapExtraction();
    testHeapSorting();
    testInsertIntoZeroHeap();
    testInsertIntoHeap();
    testHeapMaximum();

    return 0;
}
