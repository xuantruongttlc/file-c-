#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		int n, i, j, x=0, max=1;
		cin >> n;
		int a[n], b[n], c[n+1], d=0, mid, k;
		for(i=0; i<n; i++) cin >> a[i];
		for(i=0; i<n; i++){
		    int x=1, y=d+1;
		    while(x<y){
		        mid=x+floor((y-x)/2);
		        if(a[c[mid]]<a[i])	x = mid+1;
		        else	y = mid;
			}
		    k = x;
		    b[i] = c[k-1];
		    c[k] = i;
		    if(k>d) d=k;
		}
		cout << d << endl;
	}
}
