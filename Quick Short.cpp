#include<iostream>
using namespace std;
void swap(int arr[],int i,int j){
  int temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;

}
int parition(int arr[],int l,int r){
    int pivot=arr[r];
    int i=l-r;
    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,r);

        }
    }
    swap(arr,i+1,r);{
            return i+1;
    }

}
void quickshort(int arr[],int l,int r)
{
    if(l<r){
        int pi=parition(arr,l,r);
        quickshort(arr,l,pi-1);
        quickshort(arr,pi+1,r);
    }
}
int main()
{
    int arr[5]={5,4,3,2,1};
    quickshort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
