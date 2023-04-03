#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string hey ="adsdhdhfdhfkfh";
    int freq[26];
    for(int i =0; i<26; i++)
    {
        freq[i]=0;

        for(int i=0; i<26; i++)
        freq[i] = 0;
        for(int i=0; i<hey.size(); i++)
            freq[hey[i]-'a']++;
        char ans = 'a';
        int maxf = 0;

        for(int i=0;i<26;i++)
        {
            if(freq[i]>maxf)
            {
                maxf = freq[i];
                ans = i+'a';
            }
        }
        cout<<maxf<<" "<<ans<<endl;


    }
    cout<<hey<<endl;


}
