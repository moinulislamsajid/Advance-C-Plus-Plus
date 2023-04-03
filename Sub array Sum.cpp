#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter The Size Of Arrays : ";
    cin>>n;
   int arry[n];
   for(int i=0;i<n;i++)
   {
       cin>>arry[i];
   }
   int maxSum=INT_MIN;
      for(int i=0;i<n;i++)
      {
         for(int j=i;j<n;j++)
         {
             int sum=0;
                for(int k=i;i<=j;k++)
                {
                     sum+=arry[k];
                }
                maxSum=max(maxSum,sum);
         }

      }
      cout<<maxSum<<endl;



}
