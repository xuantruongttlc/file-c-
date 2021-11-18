#include<iostream>
#include<cmath>
using namespace std;
int usc(int a, int b ){
	while(a!=b){
		if(a>b) a-=b;
		else b-=a;
	}
	return a;
}
int kt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i== 0) return 0;
	}
	return 1;
}
main(){
	int t;
	cin >> t;
	while(t--){
		int x;
		cin >> x;
		int d =0;
		for(int i=1; i <= x; i++){
			if(usc(i,x) == 1) d++;
		} 
		if(kt(d)) cout <<"1" << endl;
		else cout <<"0"<< endl;
	}
}
