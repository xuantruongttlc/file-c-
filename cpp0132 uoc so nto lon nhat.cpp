#include<iostream>
#include<cmath>
using namespace std;
void kt(){
	long long n,i, x = 1;;
	cin >> n; 
	for( i = 2; i <= sqrt(n); i++){
		if(n%i == 0) x = max(x,i);
		while(n % i==0){
			n /= i;
		}
	}	
	if(n > 1) x = max(x,n);
	cout << x ;
}
main(){
	int t;
	cin >>  t;
	while(t--){
		kt();
		cout << endl;
	}
}
