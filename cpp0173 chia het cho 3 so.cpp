#include<iostream>
using namespace std;

long long x,y,z,n;
void input()
{
    cin>>x>>y>>z>>n;
}
long long gcd(long long a,long long b){
    while(a!=b){
        if(a>b) a-=b;
        else b-=a;
    }
    return a;
}
long long lcm(long long a,long long b){
    return (a/gcd(a,b))*b;
}
void solve(){
    long long zz=lcm(x,lcm(y,z));
    long long ans=1;
    if(n==1){
        cout<<"-1\n";
        return;
    }
    if(n==0){
        
        cout<<"-1\n";
        return;
    }
    n--;
    while(n--)ans*=10;
    long long maxans=ans*10;
    ans=(ans+(zz-ans%zz)%zz);
    if(ans<maxans)cout<<ans<<'\n';
    else cout<<"-1\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        input();
        solve();
    }
}

