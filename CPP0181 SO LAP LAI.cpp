#include<iostream>
using namespace std;
int n,x,y;
long long usc(long long a , long long b){
	while(a != b){
		if(a >  b) a -= b;
		else b -= a;
	}
	return a;
}
void nhap( ){
	cin >>n>>x>>y;
}
void in( ){
	long long z = usc(x,y);
	while(z--){
		cout << n;
	}
	cout << endl;
}
main(){
	int t;
	cin >> t;
	while(t--){
		nhap( );
		in( );
	}
}
