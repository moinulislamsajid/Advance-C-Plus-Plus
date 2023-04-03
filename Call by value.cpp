#include<iostream>
using namespace std;
int sum(int a, int b)
{
    int c = a+b;
    return c;
}
void swapreferenceever(int a,int b){
    int temp = a;
    a=b;
    b=temp;
}
int main()
{  int x=4,y=5;
  cout<<"The Value is x is "<<x<<" And the value of y is "<<y<<endl;
  swapreferenceever(500);
  cout<<"The Value is y is "<<y<<" And the value of x is "<<y<<endl;


    return 0;
}
