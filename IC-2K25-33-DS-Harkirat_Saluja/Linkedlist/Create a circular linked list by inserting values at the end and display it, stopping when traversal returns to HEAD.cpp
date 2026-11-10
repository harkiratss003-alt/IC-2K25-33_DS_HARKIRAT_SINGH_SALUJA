#include <iostream>

using namespace std;

 

class Node {

public:

    int data;

    Node* next;

 

    Node(int value) {

        data = value;

        next = NULL;

    }

};

 

class CircularLinkedList {

public:

    Node* head;

 

    CircularLinkedList() {

        head = NULL;

    }

 

    // Insert at end

    void insert(int value) {

        Node* newNode = new Node(value);

 

        if (head == NULL) {

            head = newNode;

            newNode->next = head;

            return;

        }

 

        Node* temp = head;

 

        while (temp->next != head) {

            temp = temp->next;

        }

 

        temp->next = newNode;

        newNode->next = head;

    }

 

    // Display list

    void display() {

        if (head == NULL) {

            cout << "List is empty";

            return;

        }

 

        Node* temp = head;

 

        do {

            cout << temp->data << " -> ";

            temp = temp->next;

        } while (temp != head);

 

        cout << "HEAD";

    }

};

 

int main() {

    CircularLinkedList list;

 

    list.insert(15);

    list.insert(25);

    list.insert(35);

    list.insert(45);

 

    list.display();

 

    return 0;

}