#include<iostream>
using namespace std;
inline product (int a, int b)
{
    return a+b;
}
float moneyReceive(int CurrentMoney,int factor=1.04){

    return CurrentMoney * factor;

}

int main()
{
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;

    //cout<<"The product of a and b is "<<product(a,b)<<endl;

    return 0;
}
