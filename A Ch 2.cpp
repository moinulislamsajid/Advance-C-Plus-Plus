#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter The Size of Arrays : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[n];
    }
    int curr=0;
        for(int i=0;i<n;i++)
        {
            curr = 0;
            for(int j=i;j<n;j++)
            {
                curr += a[j];
                cout<< a[j] <<endl;
            }
        }
        return 0;
}