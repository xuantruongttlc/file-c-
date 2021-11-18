#include<iostream>
using namespace std;
typedef long long ll;

ll sqr(ll a){
    return a*a;
}


ll  pow(int a, int b, int MOD) {
    if (b == 0) return 1 ;
    else
        if (b % 2 == 0)
            return sqr(pow(a, b/2,MOD)) % MOD;
        else
            return a * (sqr(pow(a, b/2,MOD)) % MOD) % MOD;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,p;
        cin>>a>>b>>p;
        cout<<pow(a,b,p)<<endl;
    }
}
