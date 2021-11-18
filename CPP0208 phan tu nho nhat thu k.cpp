#include<bits/stdc++.h>
using namespace std;
int n, k, a[100000];
void nhap(){
		cin >> n >> k;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
}
void tinh(){
	sort(a,a+n);
}
void in(){
	for(int i = 0; i < n; i++){
			if(i == k-1) cout << a[i] << endl;
		}
}
main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		tinh();
		in();
	}
}
