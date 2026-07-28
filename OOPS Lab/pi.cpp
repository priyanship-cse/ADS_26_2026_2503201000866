#include <iostream>
using namespace std;


class student{
private:
    string name;
    int rollno;
    float marks;

public:
    void getdata()
    {
        cout<<"Enter Student name: ";
        cin>>name;

        cout<<"Enter rollno: ";
        cin>>rollno;

        cout<<"Enter marks: ";
        cin>>marks;

    };

    void displaydata()


         
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Rollno: "<<rollno<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

  int main()

{
  
    student p;

    p.getdata();
     cout<< "====== Student Details======"<<endl;
    p.displaydata();
    return 0;
}
