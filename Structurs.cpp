#include<iostream>
using namespace std;
struct employee
{
    int etd;
    char favchar;
    float salary;

};
union hey {
    int id;
    char name;
    float roll;

};
int main()
{
    struct employee sajid;
    sajid.etd = 1;
    sajid.favchar = 'a';
    sajid.salary= 120000;
    cout<<sajid.etd<<endl;
    cout<<sajid.favchar<<endl;
    cout<<sajid.salary<<endl;

    hey boo;
    boo.id = 34;
    boo.name ='S';
    boo.roll = 2;
    cout<<boo.id<<endl;
    cout<<boo.name<<endl;
    cout<<boo.roll<<endl;
    string food = "pizza";
    string &meal = food;
    cout<<food<<endl;
    cout<<meal<<endl;
}
