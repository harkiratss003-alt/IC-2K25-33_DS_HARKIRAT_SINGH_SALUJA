#include <iostream>

using namespace std;

 

class Node {

public:

    int data;

    Node* prev;

    Node* next;

 

    Node(int value) {

        data = value;

        prev = NULL;

        next = NULL;

    }

};

 

class DoublyLinkedList {

public:

    Node* head;

 

    DoublyLinkedList() {

        head = NULL;

    }

 

    // Insert at end

    void insert(int value) {

        Node* newNode = new Node(value);

 

        if (head == NULL) {

            head = newNode;

            return;

        }

 

        Node* temp = head;

 

        while (temp->next != NULL) {

            temp = temp->next;

        }

 

        temp->next = newNode;

        newNode->prev = temp;

    }

 

    // Display list

    void display() {

        Node* temp = head;

 

        while (temp != NULL) {

            cout << temp->data << " <-> ";

            temp = temp->next;

        }

 

        cout << "NULL";

    }

};

 

int main() {

    DoublyLinkedList list;

 

    list.insert(12);

    list.insert(24);

    list.insert(36);

 

    list.display();

 

    return 0;

}