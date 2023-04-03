#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter The Size Of Arrays : ";
    cin>>n;//input of size of arrays
    int a[n]
    for(int i=0;i<n;i++)//input of array
    {
        cin>>a[i];
    }
    int ans = 2;
    int pd = a[1] -a[0];
    int j=2;
    int curr = 2;
    while(j<n)
    {
        if(pd==a[j]-a[j-1])
        {
            curr++;
        }
        else
        {
            pd = a[j] - a[j-1];
            curr=2;
        }
        ans = ans(ans,curr);
        j++;
    }
    cout<<ans <<endl;
    return 0;

}
