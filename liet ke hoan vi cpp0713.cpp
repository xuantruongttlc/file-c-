#include<bits/stdc++.h>
using namespace std;
int n, a[20]; bool b[15];
void in(){
	for(int i=1; i <= n; i++) cout << a[i];
	cout <<' ';
}
void  xuly(int i){
	int j;
	for(j=1; j<= n; j++){
		if(b[j] == false){
			a[i]=j; b[j]=true;
			if(i==n) in();
			else xuly(i+1);
			b[j]=false;
		}
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=1; i < n; i++) b[i]=false;
		xuly(1);
		cout << endl;
	}
}
