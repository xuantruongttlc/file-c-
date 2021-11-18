#include<iostream>
using namespace std;
void tinh(int a, int b, int s[]){
	int x = 0, i;
	for(i = a; i <= b; i++){
		x += s[i];
	}
	cout << x << endl;
}
main(){
	int t;
	cin >> t;
	while(t--){
		int n, m,s[1000];
		cin >> n>>m;
		for(int i = 1; i <= n; i++ ) cin >> s[i];
		int a,b;
		while(m--){
			cin >> a>>b;
			tinh(a,b,s);
		}
		cout << endl;
	}
}
