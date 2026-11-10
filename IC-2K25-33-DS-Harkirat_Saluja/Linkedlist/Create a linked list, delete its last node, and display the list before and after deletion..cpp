#include <iostream>

using namespace std;

 

class Node {

public:

    int data;

    Node* next;

 

    Node(int value) {

        data = value;

        next = nullptr;

    }

};

 

class LinkedList {

public:

    Node* head;

 

    LinkedList() {

        head = nullptr;

    }

 

    void insertAtEnd(int value) {

        Node* newNode = new Node(value);

 

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

 

    void popEnd() {

        if (head == nullptr) {

            cout << "List is empty" << endl;

            return;

        }

 

        if (head->next == nullptr) {

            delete head;

            head = nullptr;

            return;

        }

 

        Node* current = head;

 

        while (current->next->next != nullptr) {

            current = current->next;

        }

 

        delete current->next;

        current->next = nullptr;

    }

 

    void display() {

        Node* current = head;

 

        while (current != nullptr) {

            cout << current->data << " -> ";

            current = current->next;

        }

 

        cout << "NULL" << endl;

    }

};

 

int main() {

    LinkedList list;

 

    list.insertAtEnd(14);

    list.insertAtEnd(28);

    list.insertAtEnd(42);

    list.insertAtEnd(56);

 

    cout << "Original Linked List: ";

    list.display();

 

    list.popEnd();

 

    cout << "After Pop End: ";

    list.display();

 

    return 0;

}