#include<iostream>
#include<algorithm>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int max=-1;
    int dem2=0;
    for(int i=0; i<n ;i++){
        int dem1=0;
        int tmp=a[i];
        while(tmp>0){
            if(tmp%2==0){
                tmp/=2;
                dem1++;
            }
            else {
                tmp--;
                dem2++;
            }
        }
        if(max < dem1) max=dem1;
    }
    cout<<max+dem2<<endl;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        solve();
    }
}
