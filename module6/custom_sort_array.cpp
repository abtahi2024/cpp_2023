#include<bits/stdc++.h>
using namespace std;
class fque
{
    public:
    // string s;
    char value;
    int count;
};
bool cmp(fque a,fque b)
{
    if(a.count==b.count)
    {
        return a.value<a.value;
    }
    else
    {
        return a.count>b.count;
    }
}
int main()
{
    string s;
    cin>>s;
    fque f[26];
    for(int i=0;i<26;i++)
    {
        f[i].value=char (i+'a');
        f[i].count=0;
    }
    for(char c:s)
    {
        int ascii= int (c-'a');
        f[ascii].count+=1;
    }
    sort(f,f+26,cmp);
    for(int i=0;i<26;i++)
    {
        if(f[i].count>0)
        {
            for(int j=0;j<f[i].count;j++)
            {
                cout<<f[i].value;
            }
        }
    }



   return 0;
}