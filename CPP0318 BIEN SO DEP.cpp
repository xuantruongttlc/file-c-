#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int kt1(int n, string s){
	for(int i = 5; i < 7; i++){
		if(s[i] >= s[i + 1]) return 0;
	}
	if(s[9] >= s[10] || s[7] >= s[9]) return 0;
	return 1;
}
int kt2(int n, string s ){
	for(int i = 5; i < 7; i ++){
		if(s[i] != s[i+1]) return 0;	
	} 
	if(s[9] != s[10]) return 0;
	if(s[9] != s[7] || s[10]!= s[7]) return 0;
	return 1;
}
int kt3(int n, string s){
	for(int i = 5; i < 7; i ++){
		if(s[i] != s[i+1]) return 0;
	} 
	if(s[9]!=s[10]) return 0;
	return 1;
}
int kt4(int n, string s){
	if(s[5] != '6' && s[5] != '8') return 0;
	if(s[6] != '6' && s[6] != '8') return 0;
	if(s[7] != '6' && s[7] != '8') return 0;
	if(s[9] != '6' && s[9] != '8') return 0;
	if(s[10] != '6' && s[10] != '8') return 0;
	return 1;
}
main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		scanf("\n");
		getline(cin, s);
		int n = s.size() ;
		if(kt1(n,s) || kt2(n,s) || kt3(n,s) || kt4(n,s)) cout << "YES\n";
		else cout <<"NO\n";
	}
}
