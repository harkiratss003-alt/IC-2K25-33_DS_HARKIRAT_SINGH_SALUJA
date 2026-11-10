#include <iostream>
#include <vector> 
using namespace std;

class VectorStack {
private:
    vector<int> v; 

public:
    void push(int value) {
        v.push_back(value); // Adds element to the end of the vector (top of stack)
        cout << value << " pushed into stack." << endl;
    }

    
    void pop() {
        if (v.empty()) {
            cout << "Stack Underflow! No elements to pop." << endl;
        } else {
            cout << v.back() << " popped from stack." << endl;
            v.pop_back(); // Removes the last element from the vector
        }
    }

    // View the top element
    void peek() {
        if (v.empty()) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Top element is: " << v.back() << endl;
        }
    }

    // Display all elements 
    void display() {
        if (v.empty()) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = v.size() - 1; i >= 0; i--) {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    VectorStack vs;

    vs.push(1);
    vs.push(2);
    vs.push(3);
    vs.display();

    vs.peek();

    vs.pop();
    vs.display();

    return 0;
}