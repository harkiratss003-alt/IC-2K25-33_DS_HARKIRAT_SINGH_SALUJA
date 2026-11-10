#include <iostream>

using namespace std;

 

struct Node {

    int data;

    Node* next;

};

 

Node* head = nullptr;

 

void insertAtEnd(int value) {

    Node* newNode = new Node();

 

    newNode->data = value;

    newNode->next = nullptr;

 

    if (head == nullptr) {

        head = newNode;

        return;

    }

 

    Node* current = head;

 

    while (current->next != nullptr) {

        current = current->next;

    }

 

    current->next = newNode;

}

 

void display() {

    Node* current = head;

 

    while (current != nullptr) {

        cout << current->data << " -> ";

        current = current->next;

    }

 

    cout << "NULL" << endl;

}

 

int main() {

    insertAtEnd(5);

    insertAtEnd(15);

    insertAtEnd(25);

    insertAtEnd(35);

 

    display();

 

    return 0;

}