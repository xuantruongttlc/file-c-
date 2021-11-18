#include<bits/stdc++.h>
#define vs vector<string>
#define pb push_back
using namespace std;
string s;
main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		getline(cin,s);
		vs v;
		stringstream ss(s);
		string s1;
		while(ss >> s1){
			v.pb(s1);
		}
		int c = 0, l = 0;
		for(int i=0; i < v.size(); i++){
			if(v[i][v[i].size()-1] % 2 == 0) c++;
			else l++; 
		}
		if((v.size() % 2 == 0 && c > l) || (v.size()%2==1 && c <l)) cout << "YES" << endl;
		else cout << "NO" << endl; 
	}
	return 0;
}
