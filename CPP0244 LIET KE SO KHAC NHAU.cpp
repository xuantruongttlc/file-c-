#include<bits/stdc++.h>
using namespace std;

main(){
	int n;
	cin >> n;
	int a[n+1];
	for(int i=0; i < n; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	cout << a[0];
	for(int i = 1; i < n; i++){
		if (a[i] != a[i-1]) cout << " " <<a[i];
	}
}
