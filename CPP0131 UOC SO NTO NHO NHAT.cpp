#include<iostream>
using namespace std;
int n;
void nhap( ){
	cin >> n;
}
int a[100001];
void prime(){
	for(int i = 1; i <= 100001; i++) a[i] = i;
	for(int i = 2; i <= 100001; i++){
		if(a[i] == i){
			for(int j=2*i; j <= 100001; j+=i) a[j] = min(i,a[j]);
		}
	}
}
void in(){
	for(int i=1; i <= n; i++){
		cout << a[i] <<" ";
	}
	cout << endl;
}
main(){
	int t;
	cin >> t;
	prime( );
	while(t--){
		nhap( );
		in( );
	}
}
