#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter The Size of Arrays : ";
    cin>>n;
    int arry[n];
    for(int i=0;i<n;i++)
    {
        cin>>arry[i];
    }
      int currentSum=0;
      int maxSum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            currentSum+=arry[i];
            if(currentSum<0)
            {
                currentSum=0;
            }
            maxSum=max(maxSum,currentSum);
        }
        cout<<maxSum<<endl;


}
