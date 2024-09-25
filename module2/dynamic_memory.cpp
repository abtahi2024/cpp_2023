#include<bits/stdc++.h>
using namespace std;
int* fun()
{
    int *a=new int;
    *a=100;
    // cout<<a;
    return a;
}
int main()
{
    int *p=fun();
    cout<<*p<<endl;
    // cout<<p<<endl;
    // int* a=new int;
    // *a=10;
    // cout<<*a<<endl;
    // float* f=new float;
    // *f=10.29394;
    // cout<<*f;
    return 0;
}