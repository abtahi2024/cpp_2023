#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int rol;
    int cls;
    double gpa;
    // Student(int r,int c,double g)
    Student(int rol,int cls,double gpa)
    {
        this->rol=rol;// rol=r;
        this->cls=cls;// cls=c;
        this->gpa=gpa;// gpa=g;
    }

};
int main()
{
//   Student a(rol,cls,gpa);
    int rol;
    int cls;
    double gpa;
    Student a(rol,cls,gpa);
  cin>>a.rol>>a.cls>>a.gpa;
  cout<<a.rol<<" "<<a.cls<<" "<<a.gpa;

 
    return 0;
}