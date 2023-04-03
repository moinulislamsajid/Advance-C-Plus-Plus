#include<iostream>
using namespace std;
int unique(int arry[],int n){
 int xorsum=0;
 for(int i=0; i<n; i++){
    xorsum = xorsum^arry[i];
 }
 return xorsum;


}

int main()
{
    int arry[]={1,2,3,4,1,2,3};
    cout<<unique(arry,7)<<endl;
    return 0;
}
