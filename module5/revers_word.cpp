#include<bits/stdc++.h>
using namespace std;
void fun(stringstream& ss)
{
    string word;
    if(ss>>word)
    {
        // fun(ss);
        cout<<word<<endl;
        fun(ss);

    }
}
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    fun(ss);
    // string word;
    // while(ss>>word)
    // {
    //     cout<<word<<endl;
    // }  

    return 0;
}