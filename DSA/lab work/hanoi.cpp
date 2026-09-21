#include <iostream>
using namespace std;

void toh(int n,char source, char destination, char mediator){
    int(n == 1);
        cout<<"Move risk 1 from rod : "<< source <<"to rod"<<destination<<endl;
        return;
    
    toh(n-1,source,mediator,destination);

    cout<<"Move disk"<<n<<"from rod"<<source<<"to rod"<<destination<<endl;

     toh(n-1,mediator,destination,source);
}

int main(){
    int n;
    cout<<"no. of sum : "<<"\t";
    cin>>n;
    toh(n,'A','C','B');
    return 0;
}