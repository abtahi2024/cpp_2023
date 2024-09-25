#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    // a=a+b;
    a.append(b);
    a+="A";
    cout<<a<<endl;
    a.push_back('A');
    cout<<a<<endl;
    a.pop_back();
    a.pop_back();
    cout<<a<<endl;
   return 0;
}