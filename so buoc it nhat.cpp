#include<iostream>
using namespace std;
main(){
    int t;
    cin >> t;
    while(t--){
    	int n, i, j, ans=0;
    	cin >> n; 
		int a[n+1], f[n+1];
    	for(i=0; i<n; i++)
    	for(i=0; i<n; i++){
    		cin >> a[i];
    		f[i]=1;
    		for(j=0; j<i; j++)
    			if(a[j]<=a[i])
    				f[i]=max(f[i], f[j]+1);
			ans=max(ans, f[i]);
		}
		cout << n-ans << endl;
	}
}