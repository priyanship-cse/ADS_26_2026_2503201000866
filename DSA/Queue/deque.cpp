#include <iostream>
using namespace std;
#include <deque>

int main () {
   
    deque<int> dq;

dq.push_back(19);
dq.push_back(29);
dq.push_front(9);

cout<<dq.front()<<endl;
cout<<dq.back()<<endl;
dq.pop_front();
dq.pop_back();
cout<<"Remaining element :  ";


for(int x:dq){
    cout<<x<<endl;
}


}