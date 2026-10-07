#include <iostream>
using namespace std;

struct Stack{
    int size;
    int top;
    int a[6];
} ;

int push(Stack &s ,int v){
    if(s.top == s.size-1)
     cout<<"Stack is full\n";
    else {
        s.top++;
        s.a[s.top] = v;
       return v;
    }
}

int pop(Stack &s){
    if(s.top == -1)
        cout<< "Stack is empty\n" ;
    else{
  return s.a[s.top];
    s.top--;

    }

    }

int peek(Stack &s){
    if(s.top == -1)
    cout<<"Stack is empty\n";
   else 
   return s.a[s.top];
}

void display(Stack &s){
    if(s.top == -1)
    cout<<"Stack is empty"<<endl;
    else {
        for(int i = s.top ; i>=0 ; i--)
         cout<<s.a[i]<<" ";
    }
}

int main (){
   Stack s;
   s.size = 6;
   s.top = -1;
   cout<<"Stack create sucessfully"<<endl;

cout<<"All element of stack :  ";
 push(s,10);push(s,30);push(s,70);push(s,90);push(s,100);push(s,130);

 display(s);

 cout<< "Remove element" << pop(s);

 display(s);

 peek(s); 

cout<<"Now after all the operation all element are :    " ;

display(s);
};