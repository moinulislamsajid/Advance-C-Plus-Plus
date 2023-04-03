#include<iostream>
using namespace std;
int countpat(int n,int i,int j)
{
    if(i==n-1&&j==n-1)
    {
        return 1;
    }
    if(j>=n || j>=n)
    {
        return 0;
    }
    return countpat(n,i+1,j) + countpat(n,i,j+1);
}
int main()
{

  cout<<countpat(3,0,0)<<endl;

}
