#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;
string chuyen(string &s)
{
    for(int i=0; i<s.size() ; i++)
    {
        if(s[i]=='a' || s[i]=='b' || s[i]=='c') s[i]='2';
        if(s[i]=='d' || s[i]=='e' || s[i]=='f') s[i]='3';
        if(s[i]=='g' || s[i]=='i' || s[i]=='h') s[i]='4';
        if(s[i]=='j' || s[i]=='k' || s[i]=='l') s[i]='5';
        if(s[i]=='m' || s[i]=='n' || s[i]=='o') s[i]='6';
        if(s[i]=='p' || s[i]=='q' || s[i]=='r' || s[i]=='s') s[i]='7';
        if(s[i]=='t' || s[i]=='u' || s[i]=='v') s[i]='8';
        if(s[i]=='w' || s[i]=='x' || s[i]=='y' || s[i]=='z') s[i]='9';
        
    }
    return s;
}
bool check(string s)
{
    for(int i=0; i<s.size()/2 ; i++){
        if(s[i]!=s[s.size()-1-i]) return false;
    }
    return true;
}
void solve()
{
    string s;
    cin>>s;
    for(int i=0; i<s.size() ; i++)
    {
        if(s[i]>='A' && s[i]<='Z') s[i]+=32;
    }
    chuyen(s);
    if(check(s)) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

