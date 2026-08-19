#include <iostream>
using namespace std;
#include <deque>

// int main () {
   
//     deque<int> dq;

// dq.push_back(19);
// dq.push_back(29);
// dq.push_front(9);

// cout<<dq.front()<<endl;
// cout<<dq.back()<<endl;
// dq.pop_front();
// dq.pop_back();
// cout<<"Remaining element :  ";


// for(int x:dq){
//     cout<<x<<endl;
// }


// }

// Insert/delete dynamic implementation

struct Node {
    int info;
    Node *next;
    Node *prev;

};

Node *front = NULL;
Node *rear = NULL;

void dq_insert(int x){
    Node *newNode = new Node();
    newNode->info = x;
    newNode->next = front;
    newNode->prev = NULL;

    if(front == NULL){
        front = newNode;
        rear = newNode;
    }
    else{
        newNode->prev = NULL;
        newNode->next = front;
        front->prev = newNode;
        front = newNode;
    }
    // inserting at rear
    // else{
    //     newNode->next = NULL;
    //     newNode->prev = rear;
    //     rear->next = newNode;
    //     rear = newNode;
    // }

 }

 // delete from front and rear

 void dq_delete () {
    Node *temp = front;
    //Node *temp = rear;

    if (front == NULL) 
        cout << "Deque is empty";
    else if(front == rear) {
        front = NULL;
        rear = NULL;
        delete temp;
    }
    else {
        front = front->next;
        front->prev = NULL;
        delete temp;
    }

    // rear ka liya 

    // else {
    //     rear = rear->prev;
    //     rear->next = NULL;
    //     delete temp;
    // }
    
 }

void display() {
    Node *temp = front;

    if (front == NULL) {
        cout << "Deque is empty";
        return;
    }

    while (temp != NULL) {
        cout << temp->info << " ";
        temp = temp->next;
    }
}
 
int main() {
    dq_insert(10);
    dq_insert(20);
    dq_insert(30);

    cout << "Elements in the deque: ";
    display();
    dq_insert(40);
    cout << "\nElements in the deque after inserting 40 at front : ";
   display();
   dq_delete();

   cout << "\nElements in the deque after deleting from front : ";
    display();
    return 0;
}


 
   