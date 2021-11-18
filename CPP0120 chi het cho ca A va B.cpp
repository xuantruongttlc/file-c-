#include<iostream>
using namespace std;
int m,n,a,b;
void nhap( ){
	cin >>m>>n>>a>>b;
}
int tinh (int a, int b){
	while(a != b){
		if(a > b) a -= b;
		else b -= a;
	}
	return a;
}
int sum(int a, int b){
	return a/b;
}
void in(){
	int x = tinh(a,b);
	x = (a*b)/x;
	cout << sum(n,a) + sum(n,b) - sum(n,x) -sum(m-1,a) - sum(m-1,b)+sum(m-1,x) << endl;
}main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		in();
	}
}
