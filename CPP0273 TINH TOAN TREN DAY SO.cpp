#include<iostream>
#include<cmath>
using namespace std;
const long long mod=1e9+7;
long long gcm(int A, int B) {
    if (B == 0)
        return A;
    return gcm(B, A%B);
}
long long mu(long long a, int b,long long c){
    if(b==0) return 1;
    long long tmp=mu(a,b/2,c);
    if(b%2==0){
        return (tmp*tmp)%c;
    }
    else return (a*((tmp*tmp)%c))%c;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        long long tich=1;
        for(int i=0; i<n ; i++) {
            cin>>a[i];
            tich*=a[i];
            tich%=mod;
            if(a[i]==0) {
                cout<<1<<endl;
                return 0;
            }
        }
        long long gcd=a[0];
        for(int i=1; i<n; i++){
                gcd=gcm(gcd,a[i]);
        }
        cout<<mu(tich, gcd,mod)<<endl;
    }
}