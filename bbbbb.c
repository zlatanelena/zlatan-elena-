
#include<iostream>
using namespace std;
usingned int n;
int biti=0;
int main()
{
   cin>>n;
   if(n==0)
    {
        cout<<"1";

    }
     while(n!=0)

     {
         n=n>>1;
         biti++
     }
     cout<<biti;
}
