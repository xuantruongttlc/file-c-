#include<iostream>
using namespace std;
void in(int a, int b){
	long long  A=a, B=b;
	while(b > 0){
		int t = a%b;
		a=b;
		b=t;
	}
	cout <<(long long) (A*B)/a <<" " << a;
}
main(){
	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		in(a,b);
		cout << endl;
	}
}
