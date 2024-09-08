#include "./LinkedList.hpp"
#include<iostream>

int main(){
    LinkedList linked_list;

    linked_list.insertSorted(linked_list.getHead(), 10);
    linked_list.insertSorted(linked_list.getHead(), 5);
    linked_list.insertSorted(linked_list.getHead(), 15);

    linked_list.display(linked_list.getHead());

    std::cout << "Length : " << linked_list.length(linked_list.getHead()) << std::endl;

    // Search for a value in the linked list
    int value_to_search = 10;
    int position = linked_list.search(linked_list.getHead(), value_to_search);
    if (position != -1) {
        std::cout << "Value " << value_to_search << " found at position " << position << std::endl;
    } else {
        std::cout << "Value " << value_to_search << " not found in the list" << std::endl;
    }

    // Remove a value from the linked list
    linked_list.remove(linked_list.getHead(), 10);
    linked_list.display(linked_list.getHead());

    return 0;
}
