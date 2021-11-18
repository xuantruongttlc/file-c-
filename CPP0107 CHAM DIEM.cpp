#include<iostream>
#include<iomanip>
using namespace std;
void kt(string s, string x){
	int d = 0;
	for(int i = 0; i < 15; i++){
		if(s[i] == x[i]) d++;
	}
	float n = (float)d*2/3;
	cout << setprecision(2) << fixed << n << endl;
}
main(){
	int t;
	cin >> t;
	while(t--){
		fflush(stdin);
		int n;
		cin >> n;
		string a = "ABBADCCABDCCABD", b="ACCABCDDBBCDDBB";
		char s[15];
		for(int i = 0; i < 15; i++){
			cin >> s[i];
		}
		if(n == 101) kt(s,a);
		else kt(s,b);
	}
}
