#include<iostream>
#include<algorithm>
using namespace std;
int n, a[100000];
void nhap(){
	cin >> n;
		for(int i=0; i < n; i++) cin >> a[i];
}
void tinh(){
	sort(a,a+n);
}
void in(){
	if(a[0] == a[1]) cout << "-1" << endl;
		else cout << a[0] << " " << a[1] << endl;
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
