#include<iostream>
using namespace std;
main(){
    int t;
    cin >> t;
    while(t--){
        int n, i, a[100100];
        cin >> n;
        for(i=0; i<n; i++) cin >> a[i];
        long long x=a[0], y=0, z;
        for(i=1; i<n; i++){
            z=(x>y)?x:y;
            x=y+a[i];
            y=z;
        }
        cout<< ((x>y)?x:y) << endl;
    }
}
