#include<iostream>
using namespace std;
long long fast(string n,long long m){
    int res=0;
    for(int i=0;i<n.size( );i++){
        res=(res*10+n[i]-'0')%m;
    }
    return res;
}
int main( ){
    int t;
    cin>>t;
    while(t--){
        string a;
        long long b,m;
        cin>>a>>b>>m;
        long long res=1;
        long long z=fast(a,m);
        while(b){
            if(b&1)
                res=res*z%m;
            z=z*z%m;
            b=b>>1;
        }
        cout<<res<<endl;
    }
    return 0;
}
