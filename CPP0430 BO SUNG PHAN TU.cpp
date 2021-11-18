#include<iostream>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin >> n; 
		int a[100000], min = 100000, max = 0, b[100000];
		for (int i = 0; i < n; ++i) {
			 cin >> a[i]; 
			 ++b[a[i]]; 
			if(a[i] < min) min = a[i];
			if(a[i] > max) max = a[i];
		} 
		int d = 0; 
		for (int i = min; i <= max; ++i) { 
			if (!b[i]) { 
				++d; 
			} 
		} 
		cout << d << endl;  
	}
}
