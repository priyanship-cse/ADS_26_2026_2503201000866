#include <iostream>
using namespace std;


int fact(int n){

    if(n==0 || n==1)
    return 1;
    else
    return n*fact(n-1);
}

int fib(int n){
    if(n<=1)
        return n;
    else
        return fib(n-1) + fib(n-2);
}



int main(){
    cout<<fact(5)<<endl;
    cout<<fib(5)<<endl;
};





