#include<iostream>
#include<math.h>
using namespace std;
int kt(int n){
	int c = 0, l = 0;
	while(n > 0){
		int x = n%10;
		if(x % 2 == 0) c++;
		else l++;
		n /= 10; 
	}
	if(c == l) return 1;
	return 0;
}
main(){
	int n;
	cin >> n;
	int a=pow(10,n-1);
	int b=pow(10,n);
	int x = 0;
	for(int i = a; i < b; i++){
		if(kt(i)) {
			cout << i <<" ";x++;
		}
		if(x == 10) {
			cout << endl;
			x = 0;
		}
	}
}
