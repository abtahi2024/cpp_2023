#include<bits/stdc++.h>
using namespace std;
namespace rakib
{
   int age=24;
   void fun()
   {
      cout<<"rakib name>"<<endl;
   }
   namespace sakib
   {
      int age2=30;
      void fun2()
      {
         cout<<"sakib name";
      }
   }
}
using namespace rakib;
using namespace sakib;
int main()
{
   // cout<<fun()<<" "<<age<<fun2()<<" "<<age2<<endl;
   fun();
   cout<<age<<endl;
   fun2();
   cout<<" "<<age;
   return 0;
}