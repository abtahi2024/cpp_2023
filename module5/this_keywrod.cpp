#include<bits/stdc++.h>
using namespace std;
class person 
{
    public:
    string name;
    int age;
    person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    void fun()
    {
        cout<<"hallo";
    }
};
int main()
{
    person rakib("rakib",24);
    cout<<rakib.name<<" "<<rakib.age;
   return 0;
}