#include<iostream>
using namespace std;
long long n,k,c[1001][1001];
const long long mod=1e9+7;

void slove( ){
    for(int i=1;i<1001;i++) c[i][i]=c[0][i]=1;
    for(int i=2;i<1001;i++){
        for(int j=1;j<=i;j++){
            c[j][i]=(c[j][i-1]+c[j-1][i-1])%mod;
        }
    }
    cout<<c[k][n]<<"\n";
}

int main( ){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        slove( );
    }
}
