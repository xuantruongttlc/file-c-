#include<bits/stdc++.h>
using namespace std;

string kt(string s){
	int n = s.size( );
	int x = -1, i;
	for(i=n-2; i >= 0; i--){
		if(s[i] > s[i+1]){
			x=i;
			break;
		}
	}
	int d=-1;
	for(i=n-1; i > x; i--){
		if(s[i] < s[x]){
			if(d == -1)
				d = i;
			else if(s[i] >= s[d])
				d = i ;
		}
	}
	if(x==-1)
		return "-1";
	if(d != -1){
		swap(s[x], s[d]);
		return s;
	}
	return "-1";
}

main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << kt(s) << endl;
	}
}
