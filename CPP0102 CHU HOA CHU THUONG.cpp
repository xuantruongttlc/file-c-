#include<iostream>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		char c;
		cin >> c;
		if(c >= 'a' && c <= 'z'){
			c -= 32;
			cout << c << endl;
		}	
		else {
			c += 32;
			cout << c<< endl;
		}
	}
		
}
