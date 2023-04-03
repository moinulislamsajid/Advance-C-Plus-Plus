#include<iostream>
using namespace std;
int sum(int n)
{

    if(n==0)
    {
        return 0;
    }

    int prefsum = sum(n-1);
    return n+ prefsum;
}
int main()
{
    int n;
    cout<<"Enter the number of recursion : ";
    cin>>n;
    cout<<sum(n);
    return 0;
}
