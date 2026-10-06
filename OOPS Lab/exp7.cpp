#include <iostream>
using namespace std;
class Student{
private:
    int marks;
    static int count;
public:
    Student(int m) {
        marks = m;
        count++ ;
    }
 static void showCount(){
        cout << "Total students: " << count << endl;}
    friend void displayMarks(Student s);
};
int Student::count = 0;
void displayMarks(Student s)
{ cout << "Marks: " << s.marks << endl;}
int main(){
    Student s1(85);
    Student s2(90);
    Student s3(78);
    Student::showCount();
    displayMarks(s1);
    displayMarks(s2);
    displayMarks(s3);
    return 0;
}
