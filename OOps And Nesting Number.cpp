#include<iostream>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void cheakbin(void);
    void display(void);
    void onceagain(void);
};
void binary :: read(void)
{
    cout<<"Enter a binary Number"<<endl;
    cin>>s;
}
void binary :: cheakbin(void)
{
    for(int i=0; i<s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect binary number";
            exit(0);
        }
    }
}
void binary :: onceagain(void)
{
    for(int i = 0; i<s.length; i++)
    {
        if(s.st(i)=='0')
        {
            s.st(i)='1';
        }
         else
        {
           s.st(i)='0';
        }
    }
}

void binary :: display(void)
{
    for(int i = 0;i<s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.read();
    b.cheakbin();
    b.onceagain();
    b.display();
    b.display();

    return 0;
}
