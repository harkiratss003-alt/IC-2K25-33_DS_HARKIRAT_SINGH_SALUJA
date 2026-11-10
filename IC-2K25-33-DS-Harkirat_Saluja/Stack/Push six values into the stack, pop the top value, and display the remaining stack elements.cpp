#include <iostream>

using namespace std;

#define max 10

class stack {

    private:

    int arr[max];

    int top;

    public:

    stack(){

        top=-1;

    }

void push(int value){

    if(top==max-1){

        cout<<"Overflow"<<endl;

    }

        else{

            arr[++top]=value;

            cout<<value<<"pushed into stack."<<endl;

 

        }

    }

void pop(){

    if(top==-1){

        cout<<"Stack Underflow"<<endl;

    }else{

        cout<<arr[top]<<"popped from stack."<<endl;

        top--;

    }

}

void display (){

    if(top==-1){

        cout<<"Stack is empty."<<endl;

    }else{

        cout<<"stack elements: ";

        for(int i=top;i>=0;i--){

            cout<<arr[i]<<" ";

    }

    cout<<endl;

}
}
};

int main(){

    stack s;

    s.push(11);

    s.push(22);

    s.push(33);

    s.push(44);

    s.push(55);

    s.push(66);

    s.pop();

    s.display();

    return 0;

}