#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    // s.clear();
    // cout<<s.size()<<endl<<s.max_size();
    // cout<<s.capacity()<<endl;
    // cout<<s<<endl;
    // if(s.empty()==true)
    // {
    //     cout<<"null";
    // }
    // else
    // {
    //     cout<<"not null";
    // }
    s.resize(1);
    cout<<s<<" "<<s.size()<<" "<<s.capacity();
    return 0;
}