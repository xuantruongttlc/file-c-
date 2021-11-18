#include<iostream>
using namespace std;
int kt(string s){
	int n = s.size();
	for(int i=0; i < n; i++){
		if(s[i] != s[n-1-i]) return 0;
		if((s[i] - '0') % 2 != 0) return 0; 
	}
	return 1;
}


main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if( kt(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
