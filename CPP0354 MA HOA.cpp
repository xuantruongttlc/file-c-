#include<iostream>
using namespace std;
void tinh(string s, int n){
	int i =0, j;
	while(i < n){
		j = i+1;
		int d = 1;
		while(j < n){
			if(s[j] == s[i]) {
				d++;
				j++;
			}
			else {
				j++;
				break;
			}		
		}
		cout << s[i] << d;
			i = i+d;
	}
}
main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		fflush(stdin);
		string s;
		cin >> s;
		int n = s.size();
		tinh(s,n);
		cout << endl;
	}
}
