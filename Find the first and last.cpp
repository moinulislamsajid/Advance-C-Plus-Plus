#include<iostream>
using namespace std;
void firstocc(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return firstocc(arr,n,i+1, key);
}
void lastocc(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[]==key)
    {
        return i;
    }
  return restarry=lastocc(arr,n,i+1,key);
}
int main()
{
   int arr[]={4,2,1,2,5,2,7};
   cout<<firstocc(arr,7,0,2);
    return 0;
}
