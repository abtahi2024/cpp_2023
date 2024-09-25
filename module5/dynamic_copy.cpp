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
};
int main()
{
    person* sakib=new person("sakib",25);
    person* rakib=new person("rakib",28);

    *sakib=*rakib;
    delete sakib;
    cout<<rakib->name<<" "<<rakib->age<<endl;


    return 0;
}