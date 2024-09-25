#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    // a="gallo";
    // a.assign("gello");
    // a.erase(3,1);
    a.replace(2,3,"so");
    a.insert(3,"bolo");
    cout<<a;
    return 0;
}