#include<iostream>
using namespace std;
int titleways(int n)
{
    if(n==0){

        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return titleways(n-1) + titleways(n-2);
}
int main()
{
    cout<<titleways(4)<<endl;
    return 0;
}
