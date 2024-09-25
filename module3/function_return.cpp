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
Student fun()
{
    // Student *rahim=new Student(20,5,4.44);
    Student rahim(20,5,4.44);
    return rahim;
}

int main()
{
    Student ans=fun();
    cout<<ans.roll<<" "<<ans.cls<<" "<<ans.gpa;
    // cout<<ans->cls<<" "<<ans->cls<<" "<<ans->gpa;
    // delete ans;
    return 0;
}