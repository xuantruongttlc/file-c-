#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		int x = s.size();
		int n = x;
		for(int i=0; i < n-1; i++){
			for(int j=i+1; j < n; j++){
				if(s[j] == s[i] ) x++;
			}
		}
		cout << x <<endl;
	}
}
