#include <iostream>
using namespace std;
#define max 10

 int st[max];
 int top=-1;

 bool overflow () {
return top == max-1;
}

bool empty () {
    return top == -1;
}

void push(int x) {
    if(overflow()) {
        cout<<"Stack Overflow"<<endl;
    } else {
        top++;
        st[top] = x;
    }
}

  void pop(int x) {
    if(empty()) {
        cout<<"Stack Underflow"<<endl;
    } else {
        top--;
    }
}

void peek() {
    if(empty()) {
        cout<<"Stack is empty"<<endl;
    } else {
        cout<<"Top element is: "<<st[top]<<endl;
    }
}

void display() {
    if(empty()) {
        cout<<"Stack is empty"<<endl;
    } else {
        cout<<"Stack elements are: ";
        for(int i=top; i>=0; i--) {
            cout<<st[i]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int choice, x;
    do {
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Peek"<<endl;
        cout<<"4. Display"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice) {
            case 1:
                cout<<"Enter element to push: ";
                cin>>x;
                push(x);
                break;
            case 2:
                pop(x);
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                cout<<"Exiting..."<<endl;
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
    } while(choice != 5);

    return 0;
}
