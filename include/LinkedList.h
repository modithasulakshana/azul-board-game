#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "Types.h"

class Node {
public:
    Node(Tile value, shared_ptr<Node> next, shared_ptr<Node> prev);

    Tile value;
    shared_ptr<Node> next;
    shared_ptr<Node> prev;
};

class LinkedList {
public:
    LinkedList();

    LinkedList(const LinkedList &other);

    ~LinkedList();

    //TODO add contract that it can only be used when there is an element at the index
    /**
     * @return get the value of element at an index
     */
    Tile get(unsigned int i) const;

    /**
     * Return the current size of the Linked List.
     */
    unsigned int size() const;

    /**
     * Add the value to the back of the Linked List
     */
    void addBack(Tile value);

    /**
     * Add the value to the front of the Linked List
     */
    void addFront(Tile value);

    /**
     * Remove the value at the back of the Linked List
     */
    void removeBack();

    /**
     * Remove the value at the front of the Linked List
     */
    void removeFront();

    /**
     * Removes all values from the Linked List
     */
    void clear();

    /**
     * Returns a string containing all the elements in the list
     */
    string toString();

private:
    shared_ptr<Node> head;
    shared_ptr<Node> tail;
    unsigned int length;
};

#endif // LINKED_LIST_H
