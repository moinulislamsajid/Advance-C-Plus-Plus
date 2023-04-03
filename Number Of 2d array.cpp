#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            {
           cin>> a[n][m];
           }
    }
    //spiral order print
    int rowst=0,rowed=n-1,colst=0,coled=m-1;
    while(rowst<=rowend && colst<=coled)
    {
        for(int col = colst;col<=coled;col++)
        {
            cout<<a[rowst][col]<<" ";
        }
        rowst++;

        for(int row = rowst;col<=rowed;row++)
        {
            cout<<a[row][coled]<<" ";
            coled;
        }
    }
}
