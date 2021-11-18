#include<bits/stdc++.h>
using namespace std;

int tong(string s){
	int x=0;
	for(int i=0; i < s.length(); i++)
		x=x*10+(s[i]-'0');
	return x;
}
main(){
	int t;
	cin >>t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		int n = s.length(), max = -1;
		string d="";
		for(int i=0; i<n; i++){
			if(s[i] >= '0' && s[i] <= '9')
				d+= s[i];
			else {
				if(d.length()>0) if(tong(d)>max)max=tong(d);
				d="";
			}
		}
		if(d.length()>0) if(tong(d)>max) max=tong(d);
		cout << max << endl;
	}
}
