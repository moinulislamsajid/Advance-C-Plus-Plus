#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    const int N = 1e6 + 2;
    bool cheak[N];
    for(int i=0;i<N;i++)
    {
        cheak[i] = true;
    }
        for(int i=0;i<n;i++)
        {
            if(a[i]>= 0)
            {
                cheak[a[i]] = 1;
            }
        }
        int ans=-1;
    for(int i=0;i<N;i++)
    {
        if(cheak[a[i]]==false)
        {
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;

}
