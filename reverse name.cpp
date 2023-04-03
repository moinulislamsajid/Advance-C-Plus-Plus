#include<iostream>
using namespace std;
void reverse(string s)
{
    if(s.length()==0)
    {
        return;
    }
    string hey = s.substr(1);
    reverse(hey);
    cout<<s[0];

}
int main()
{
    reverse("Ayman Sajid");
    return 0;
}
