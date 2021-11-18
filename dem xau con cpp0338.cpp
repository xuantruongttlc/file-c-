#include<bits/stdc++.h>
using namespace std;
int dem(string s, int k){
    int n=s.length(), i, j, x=0, a[26];
    for(i=0; i<n; i++){
        int d=0;
        memset(a, 0, sizeof(a));
        for(j=i; j<n; j++){
            if(a[s[j]-'a']==0)
                d++;
            a[s[j] - 'a']++;
            if(d==k)
                x++;
            if(d>k)
        	    break;
        }
    }
    return x;
}
main(){
    int t;
    cin >> t;
    while(t--){
        scanf("\n");
        string s;
        cin >> s;
        int k;
        cin >> k;
        cout << dem(s,k) << endl;
    }
}