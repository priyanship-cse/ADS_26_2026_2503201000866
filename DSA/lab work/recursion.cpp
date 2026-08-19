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

return fib(n-1) + fib(n-2);
}

int gcd(int a,int b){
  if(b==0)
  return a;
  else
  return gcd(b,a%b);
}


int main(){
    int n;
    cin>>n;

   

    cout<<fact(n)<<endl;
    for(int i=0;i<n;i++){
        cout<<fib(i)<<" ";
    }


    return 0;
};





