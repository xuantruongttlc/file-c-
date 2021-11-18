#include<iostream>
#include<cmath>
using namespace std;
int nt(int n){
	if(n < 2) return 0;
	for(int i=2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int kt(int n){
	int s1 = 0, s2 =0, x=n;
	while(n != 0){
		s1 += n%10;
		n /= 10;
	}
	for(int i=2; i <= x; i++){
		while(x%i==0){
			if(i < 10) s2 += i;
			else {
				int I=i;
				while(I>0){
					s2+=I%10;
					I/=10;
				}
			}
			x/=i;
		}
	}
	if(s1==s2) return 1;
	else return 0;
}
main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(!nt(n) && kt(n)) cout <<"YES"<<endl;
		else cout << "NO" << endl;
	}
}
