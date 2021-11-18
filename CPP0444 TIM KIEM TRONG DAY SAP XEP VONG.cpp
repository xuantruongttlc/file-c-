#include<iostream>
using namespace std;
int n, x, a[100000];
void tinh(){
		cin >> n >> x;
		int d=0;
		for(int i=1; i <= n; i++){
			cin >> a[i];
			if(a[i] == x) d = i;
		}
		cout << d << endl;
}
main(){
	int t;
	cin >> t;
	while(t--){
		tinh();
	}
}
