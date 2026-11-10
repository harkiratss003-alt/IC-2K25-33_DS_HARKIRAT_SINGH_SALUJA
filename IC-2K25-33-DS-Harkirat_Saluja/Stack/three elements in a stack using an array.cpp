#include <iostream>

#include<stack>

using namespace std;

int main() {

    int stack[5],top=-1;

    stack[++top]=12;

    stack[++top]=24;

    stack[++top]=36;

    cout<<"Stack Elements: ";

    for(int i=top;i>=0;i--){

        cout<<stack[i]<<" ";

    }

    cout<<"\nPopped element:"<<stack[top--];

    

 

    return 0;

}