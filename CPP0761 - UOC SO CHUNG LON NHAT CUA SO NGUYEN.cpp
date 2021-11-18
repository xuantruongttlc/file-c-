
#include<iostream>
using namespace std;
typedef long long int ll;
ll gcd(ll a, ll b)
{
    if (!a)
       return b;
    return gcd(b%a,a);
}
ll tmp(ll a, string b)
{
    ll mod = 0;
    for (int i=0; i<b.size(); i++)
        mod = (mod*10 + b[i] - '0')%a;
 
    return mod;
}
ll gcdLarge(ll a, string b)
{
    ll num = tmp(a, b);
    return gcd(a, num);
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        ll a;
        cin >> a;
        string b;
        cin >> b;
        if (a == 0)
            cout << b<<2;
        else
            cout << gcdLarge(a, b)<< endl;
        }
        return 0;
}
