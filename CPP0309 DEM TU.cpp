#include<iostream>
using namespace std;
int kt(char c){
	if(c == '\n' || c == ' ' || c == '\t') return 0;
	return 1;
}
main(){
	int t;
	cin >> t;
	while(t--){
		cin.ignore();
		string s;
		getline(cin ,s);
		int n = s.size(), x = 1;
		for(int i=0; i < n; i++){
		 		if(!kt(s[i]) && kt(s[i+1]) || !kt(s[i]) && !kt(s[i+1]) && i+1 == s.size( )-1) x++;
		}
		cout << x << endl;
	}
	
}
