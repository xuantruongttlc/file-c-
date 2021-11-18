#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int n,a[1000];
void nhap(){
	cin >> n;
	for(int i=0; i < n; i++) cin >> a[i];
}
void in(){
	for(int i=0; i < n; i++) cout << a[i] << " ";
	cout << endl;
}
void tinh(){
	sort(a,a+n);
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
