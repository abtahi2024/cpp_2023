#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    switch (x%2)
    {
    case 0:
    cout<<"even";
    break;
    case 1:
    cout<<"odd";
    break;
    // case 2:
    // cout<<"two";
    // break;
    // case 3:
    // cout<<"three";
    // break;
    // default:
    // cout<<"on one";
    //     break;
    }
    return 0;
}