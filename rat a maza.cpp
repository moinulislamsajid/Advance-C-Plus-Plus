#include<iostream>
using namespace std;
bool issafe(int** arr,int x, int y, int n)
{
 if(x==n-1 && y==n-1)
 {
     solarry[x][y]=1;
     return true;
 }
    if(x<n && y<n && arr[x][y]==1)
    {
        return true;

    }
    return false;
}
bool ratamaza(int** arr,int x, int y, int** solarry)
{
    if(issafe(arr,x,y,n))
    {
        solarry[x][y]=1;
        if
        {(ratamaza(arr,x+1,y,n,solarry))
            return true;

    }
    if(ratamaza(arr,x,y+1,n,solarry))
    {
        return true;
    }
    solarry[x][y]=0;
    return false;
  }
 return false;
}


int main()
{

    int n;
    cout<<n;
    int **arr=new int*[n];
     for(int i=0;i<n;i++)
    {
        arr[i]=new int[n];
    }
         for(int i=0;i<n;i++)
         {
                  for(int j=0;j<n;j++)
                  {
                      cin>>arr[i][j];
                  }

         }
    int **solarry=new int*[n];
     for(int i=0;i<n;i++)
    {
        solarry[i]=new int[n];
        for(int j=0;l<n;j++)
        {
            solarry[i][j]=0;
        }
    }
    if(ratamaza(arr,0,0,n,dolarry))

    return 0;
}
