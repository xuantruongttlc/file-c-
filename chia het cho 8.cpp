#include<bits/stdc++.h> 
using namespace std; 
string s; 
int dem(int k){ 
	int i, j, d=0, n=s.length(); 
	for(i=0; i<n; i++){ 
		int a=0; 
		for(j=i; j<n; j++){ 
			a=a*10 + s[j]-'0'; 
			a=a%k;
			if(a==0) d++; 
		} 
	} 
	return d; 
} 
main(){ 
	int t;
	cin >> t;
	while(t--){
		scanf("\n");
		cin >> s; 
		cout << dem(8)-dem(24) << endl; 
	} 
}
