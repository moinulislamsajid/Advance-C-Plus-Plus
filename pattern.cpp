#include<iostream>
using namespace std;
int main()
{
    /*int row,col;
    cin>>row>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            cout<<"*";
        }

    }
    cout<<endl;*/
    /*int row,col;
    cin>>row>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;i<=col;j++)
        {
            if(i==1 || i==row || j==1 || j==col)
            {
                cout<<"#";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;*/

    int n;
    cin>>n;
    for(int i=1;i<=n; i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=n-i)
            {
                cout<<"  ";
            }
            else{

                cout<<"* ";
            }
        }
        cout<<endl;
    }
}
