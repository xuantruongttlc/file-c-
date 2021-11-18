#include<iostream>
#include<math.h>
using namespace std;
void kt(int n){
	int i = 2;
	while(n > 1){
		int x = 0;
		while(n % i == 0){
			x++;
			n /= i;
		}
		if(x != 0) {
			cout << i << " " << x << " ";
		}
		i++;
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		kt(n);
		cout << endl;
	}
}
