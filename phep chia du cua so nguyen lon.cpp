#include<bits/stdc++.h> 
using namespace std;
main(){ 
	int t;
	cin >> t; 
	while(t--){ 
		string s;
		long long m, x=0;
		cin >> s >> m; 
		int i, a[1100], n=s.size(); 
		for(i=0; i<n; i++)	a[i]=s[i]-'0';
		for(i=0; i<n; i++)	x=(x*10 + a[i])%m;
		cout << x << endl; 
	} 
}
