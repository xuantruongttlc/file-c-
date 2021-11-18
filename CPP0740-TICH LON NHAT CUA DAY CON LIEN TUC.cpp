#include<iostream>
using namespace std;
int main( ){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++) cin>>a[i];
        long long max=-1e6;
        for(int i=0;i<n;i++){
            long long s=1;
            for(int j=i;j<n;j++){
                s*=a[j];
                if(s>max) max=s;
            }
        }
        cout<<max<<endl;
    }
}
