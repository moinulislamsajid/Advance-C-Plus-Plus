#include<iostream>
using namespace std;
void swapnums(int &x, int &y)
{
    int z=x;
    x=y;
    y=z;
}
int main()
{
   int firstnumber = 1;
   int secondnumber = 2;
   cout<<"Before Swap "<<endl;
   cout<<firstnumber<<secondnumber<<endl;
   swapnums(firstnumber,secondnumber);

   cout<<"After Swap "<<endl;
   cout<<firstnumber<<secondnumber<<endl;
   return 0;
}
