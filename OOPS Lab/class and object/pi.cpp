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

    if(marks<0 || marks>100)
    {
        cout<<"Invalid marks entered. Please enter marks between 0 and 100."<<endl;
        exit(1);

    };

    if(marks>=90)
    {
        cout<<"Grade: A"<<endl;
    }
    else if(marks>=80)
    {
        cout<<"Grade: B"<<endl;
    }
    else if(marks>=70)
    {
        cout<<"Grade: C"<<endl;
    }
    else if(marks>=60)
    {
        cout<<"Grade: D"<<endl;
    }
    else
    {
        cout<<"Grade: F"<<endl;
    }

    }




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
