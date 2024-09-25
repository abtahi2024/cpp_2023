#include<bits/stdc++.h>
using namespace std;
//declear of class:
class Student
{
    public:
    char name[100];
    int roll;
    double cgpa;
};
int main()
{
    //declear of object:
  Student a,b;//group
//input:

//   a.roll;
//   a.cgpa;
//   a.name;
//   cin>>a.name>>a.roll>>a.cgpa;
//   cout<<a.name<<endl<<a.roll<<" "<<a.cgpa;
//   cout<<endl;
//   b.name;
//   b.roll;
//   b.cgpa;
//   cin>>b.name>>b.roll>>b.cgpa;
//   cout<<b.name<<endl<<b.roll<<" "<<b.cgpa;


//chareat input:
cin.getline(a.name,100);
cin>>a.roll>>a.cgpa;
cout<<a.name<<endl<<a.roll<<" "<<a.cgpa;
getchar();
cout<<endl;
cin.getline(b.name,100);
cin>>b.roll>>b.cgpa;
cout<<b.name<<endl<<b.roll<<" "<<b.cgpa;
    return 0;
}