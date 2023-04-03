#include<iostream>
using namespace std;
class employee{
    int id;
    static int count=0;
   public :
       void setdata(void)
       {
           cout<<"Enter the id"<<endl;
           cin>>id;
           count++;
        }
        void getdata(void){
        cout<<"The id of this employee is "<<id<<"This is employee number "<<count<<endl;

        }

};
int employee :: count;
int main()
{
    employee harry,rohan,sajid;

  return 0;
}
