#include<iostream>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		fflush(stdin);
		string s;
		cin >> s;
		string a;
		int x = 0;
		int n = s.size();
		for(int i=0; i < n; i++){
			bool check=false;
			for(int j=0; j < n; j++){
				if(s[i] == s[j] && i!=j){
					check = true;
					break;
				}
			}
			if(check==true) continue;
			else cout << s[i];
		}
		cout << endl;
	}
}
