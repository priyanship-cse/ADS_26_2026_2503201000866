#include <iostream>
using namespace std;
int fun1(int n);
int fun2(int n);

// int fun(int n){
//     if(n>0)
//      fun(n-1);  // head recursion // tail ka liya hum phela n ko cout krta h fir funxtion call krta h 
//      cout<<n<<endl;
// }

int fun1(int n){
    if(n>0)
     cout<<n<<endl;
     fun2(n-1);  
}

int fun2(int n){
    if(n>0)
     fun1(n-1);  
     cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;

     cout<<"Head recursion : "<<endl;
    fun1(n);
    
return 0;
};

