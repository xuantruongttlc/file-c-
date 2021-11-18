#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int d[300] = {0};
		int kt = 0;
		for(int i=0; i < s.size(); i++){
			d[s[i]] ++;
			if(s[i] < 48 || s[i] > 57 || s[0] == '0'){
					cout << "INVALID" << endl;
					kt = 1;
					break;
			} 
		}
		if(kt == 1) continue;
		for(int i=48; i <= 57; i++){
			if(d[i] == 0){
				cout << "NO\n";
				kt = 1;
				break;
			}
		}
		if(kt == 0) cout << "YES\n";
	}
	
}
