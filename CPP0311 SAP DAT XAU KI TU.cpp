#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
void Res(){
    string s;
    cin>>s;
    int a[200]={0};
    for(int i=0;i<s.length();i++) a[s[i]]++;
    sort(a,a+123);
    int d=1;
    for(int i=121;i>=97;i--){
        d+=a[i];
        if(d>=a[122]){
            cout<<1<<'\n';
            return;
        }
    }
    cout<<0<<'\n';
}
int main(){
    int t = 1;
    cin>>t;
    while(t--){
        Res();
    }
}
