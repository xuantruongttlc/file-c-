#include<iostream>
#include<algorithm>
using namespace std;
long long gcd(long long a , long long b){
    if (b == 0) return a;
        return gcd(b, a % b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long  n,m;
        cin>>n>>m;
        long long s=(n*(n+1))/2;
        if((s+m) % 2==1) {
            cout<<"No"<<endl;
            continue;
        }
        long long s1=(s+m)/2;
        long long s2=s-s1;
        if ( s < m) {
            cout<<"No"<<endl;
            continue;
        }
        if(gcd(s1,s2)==1){
            cout<<"Yes"<<endl;;
            continue;
        }
        cout<<"No";
        cout<<endl;
    }
}
