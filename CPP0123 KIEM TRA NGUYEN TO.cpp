#include<iostream>
#include<math.h>
using namespace std;
int kt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0) return 0;
	}
	return 1;
}
main(){
	int n;
	cin >> n;
	if(kt(n)) cout<<"YES";
	else cout << "NO";
}

