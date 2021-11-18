#include<iostream>
using namespace std;
void in(int n, int a[]){
	int x = a[0];
	for(int i = 0; i < n; i++){
		if(a[i] > x) x = a[i];
	}
	cout << x << endl;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n, a[10000];
		cin >> n;
		for(int i = 0; i < n; i++){
			cin>> a[i];
		}
		in(n,a);
	}
}
