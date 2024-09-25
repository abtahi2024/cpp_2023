#include<bits/stdc++.h>
using namespace std;
class parson
{
    public:
    string name;
    int age;
    int marks1;
    int marks2;
    // parson()
    // {
    //     name;
    //     age;
    //     marks1;
    //     marks2;
    // }
    parson(string nm,int ag,int m1,int m2)
    {
        name=nm;
        age=ag;
        marks1=m1;
        marks2=m2;
    }
    void fun()
    {
        cout<<name<<" "<<age<<endl;
    }
    int total()
    {
        return marks1+marks2;
    }
};
int main()
{
    // string nm;
    // int ag;
    // int m1;
    // int m2;
    // cin>>nm>>ag>>m1>>m2;
    parson rakib("rakib ahsan",24,95,85);
    // parson rakib;
    // cin>>rakib.name>>rakib.age>>rakib.marks1>>rakib.marks2>>rakib.marks2;
    // rakib.fun();
    // cout<<rakib.name<<" "<<rakib.total()<<endl;
    cout<<rakib.total()<<endl;


    return 0;
}