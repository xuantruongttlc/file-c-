#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
main(){	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n+1];
		int k = 0;
		for(int i=0; i < n; i++)
			cin >> a[i];	
			long long s=a[0]+a[1];
			for(int i=0; i < n-1; i++){
				for(int j = i+1; j < n; j++){
					if(abs(a[i] + a[j]) < abs(s)) s= a[i]+a[j];
				}
			}
		cout << s << endl;
	}
}
