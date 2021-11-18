#include<bits/stdc++.h> 
using namespace std;
int n, a[1000];
void nhap(){
	cin >> n;
	for(int i=0; i<n; i++) cin >> a[i];
}
void tinh(){
	int i, t=0, k;
		sort(a, a+n);
		if(n%2==0) k=n/2;
		else k=n/2+1;
		for(i=0; i<n; i++){
			if(i%2==0){ cout << a[t] << " "; t++; }
			else{ cout << a[k] << " "; k++; }
		}
		cout << endl;
}
main(){ 
	int t;
	cin >> t; 
	while(t--){ 
		nhap();
		tinh();
	} 
}
