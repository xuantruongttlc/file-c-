#include<iostream>
using namespace std;
main(){
    int t;
    cin >> t;
    while(t--){
        int n, i;
        cin >> n;
        int a[n+1];
        for(i=0; i<n; i++) cin >> a[i];
        long long s=a[0], max=a[0];
        for(i=1; i<n; i++){
            s+=a[i];
            if(max<s) max=s;
            if(s<0) s=0;
        }
        if(max<0) max=-1;
        cout << max << endl;
    }
}
