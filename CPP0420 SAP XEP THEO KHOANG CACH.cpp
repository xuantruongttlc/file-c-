#include<bits/stdc++.h>
using namespace std;
struct nhap{
	int so1, so2,i;
};

bool kt(nhap a, nhap b){
	if(a.so2>b.so2) return false;
	if(a.so2 == b.so2 && a.i>b.i ) return false;
	return true;
}

main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n>>k;
		vector<nhap>a(n);
		for(int i=0;i < n; i++){
			cin >> a[i].so1;
			a[i].so2 =  abs(k-a[i].so1);
			a[i].i=i;
		}
		sort(a.begin(),a.end(),kt);
        for(int i=0;i<n;i++) cout<<a[i].so1<<" ";
        cout<<endl;
	}
}
