#include<iostream>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		int n,k, d = 0;
		cin>>n>>k;
		int a[n+1];
		for(int i=0; i <n; i++) cin >> a[i];
		for(int i=0; i < n-1; i++){
			for(int j=i+1; j <n; j++){
				int x = a[j]+a[i];
				if(x==k) d++;
			}
		}
		cout << d<< endl;
	}
}
