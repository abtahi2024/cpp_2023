#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;
    Student(int roll,int cls,double gpa)
    {
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
    }
};
int main()
{
  Student* karim=new Student(6,30,4.55);
  cout<<karim->cls<<" "<<karim->roll<<" "<<karim->gpa;


    return 0;
}