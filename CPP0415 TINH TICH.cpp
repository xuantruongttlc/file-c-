#include<iostream>
#include<algorithm>
using namespace std;
void nhap(int n, long long  s[]){
	for(int i=0; i  < n; i++){
		cin >> s[i];
	}
}
void tinh(int n, int m, long long a[], long long  b[]){
	sort(a,a+n);
		sort(b,b+m);
		long long  x = a[n-1]*b[0];
		cout << x <<endl;
}
main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n>>m;
		long long  a[n+1], b[m+1];
		nhap(n,a);
		nhap(m,b);
		tinh(n,m,a,b);
	}
}
