#include "LinkedList.hpp"

LinkedList::LinkedList(){
    head = NULL;
}

LinkedList::~LinkedList(){
    LinkedList::Node* current = head;
    LinkedList::Node* next;

    while(current != NULL){
        next = current->next;
        delete current;
        current = next;
    }
}

void LinkedList::insertSorted(LinkedList::Node*& _head, int _value){
    LinkedList::Node* insert = new LinkedList::Node();
    insert->data = _value;
    insert->next = NULL;

    if(_head == NULL || _head->data >= _value){
        insert->next = _head;
        _head = insert;
    }else{
        LinkedList::Node* current = _head;

        while(current->next != NULL && current->next->data < _value)
            current = current->next;
        
        insert->next = current->next;
        current->next = insert;
    }
}

int LinkedList::length(LinkedList::Node*& _head){
    int n {0};
    LinkedList::Node* current = _head;

    while(current != NULL){
        current = current->next;
        n++;
    }

    return n;
}

int LinkedList::search(LinkedList::Node*& _head, int _value){
    LinkedList::Node* iterator = _head;
    int position {0};

    while(iterator != NULL)
        if(iterator->data == _value)
            return position;
        else if(iterator->data > _value)
            break;
        else{
            iterator = iterator->next;
            position++;
        }

    return -1;
}

void LinkedList::remove(LinkedList::Node*& _head, int _value){
    if(_head == NULL)
        return;

    if(_head->data == _value){
        Node* temp = _head;
        _head = _head->next;
        delete temp;
        return;
    }

    LinkedList::Node* iterator = _head;
    while(iterator->next != NULL){
        if(iterator->next->data == _value){
            Node* temp = iterator->next;
            iterator->next = iterator->next->next;
            delete temp;
            return;
        }
        iterator = iterator->next;
    }
}

void LinkedList::display(LinkedList::Node*& _head){
    Node* iterator = _head; // Do not want to move the actual head, make a copy
    
    if(iterator == NULL)
        cout << "The list is empty";
    
    while(iterator!=NULL){
        cout << "[" + std::to_string(iterator->data) + "] ";
        iterator=iterator->next;
    }

    std::cout << std::endl;
}

LinkedList::Node*& LinkedList::getHead(){
    return*& this->head;
}
