#include<iostream>
using namespace std;
int n,k,a[30],stop=1;
void khoitao(){
    for(int i=1; i<=k ; i++){
        a[i]=i;
    }
}
void in(){
    for(int i=1; i<=k ; i++){
        cout<<a[i];
    }
    cout<<" ";
}
void sinh(){
    int i=k;
    while(a[i]==n-k+i && i>0) i--;
    if(i==0) stop=0;
    else a[i]++;
    int p=a[i];
    while(i<=k) a[i++]=p++;

 }
void tohop(){
    while(stop){
        in();
        sinh();
    }
}
void solve(){
    stop=1;
    cin>>n>>k;
    khoitao();
    tohop();
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}
