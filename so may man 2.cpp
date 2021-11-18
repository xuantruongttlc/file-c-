#include <iostream>
#include <string>
using namespace std;
int kt(int n) {
	int s=0;
	while(n>0){
		s=s+n%10;
		n/=10;
	}
	if(s==9) return 1;
	else {
		if(s>17) return kt(s);
		return 0;
	}
}
main(){
	int t, i;
	cin >> t;
	while(t--){
		string s; int n=0;
		cin >> s ;
		for(i=0; i<s.length(); i++) n+=s[i]-'0';
		cout << kt(n) << endl;
	}
}
