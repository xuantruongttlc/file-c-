#include<iostream>
#include<algorithm>
using namespace std;
long long max_day(int a[],int n, int m, int &pos){
    int max=a[n];
    for(int i=n; i<m ; i++){
        if(max<=a[i]) {
            max=a[i];
            pos=i;
        }
    }
    return max;
}
void solve(){
    int n,k,pos;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    long long tmp=max_day(a,0,k,pos);
    cout<<tmp<<" ";
    for(int i=1; i<=n-k; i++){
        if(a[i+k-1]>=tmp) {
            pos=i+k-1;
            tmp=a[i+k-1];
        }
        else
        {
            if( pos < i )
            {
                tmp = max_day(a,i,i+k-1,pos);
            }
        }
        cout<<tmp<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

