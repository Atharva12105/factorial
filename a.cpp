#include<iostream>
using namespace std;
int n,i,k,sum=0,fact=1;

void factorial()

{
   cout<<"Enter a number to find factorial:"<<endl;
   cin>>n;
   if (n>0)
   {
   i=n-1;
   for(i=1;i<=n;i++)
   {
    fact=fact*i;
   }
   cout<<"The factorial is:"<<fact<<endl;
   }
   else{
    cout<<"Error"<<endl;
   }
}
int main()
{
    factorial();
}



