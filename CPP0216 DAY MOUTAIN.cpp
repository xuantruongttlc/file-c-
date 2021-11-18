#include<iostream>
#include<algorithm>
using namespace std;
int n,x,y;
int a[10001];
void nhap( ){
	cin >> n;
	for(int i=0; i < n; i++) cin >> a[i];
	cin >> x>>y;
}
void kt( ) {
	if(x > y) swap(x,y);
	int ktr=1;
	if(y-x == 1) ktr=0;
	for(int i=x; i < (x+y)/2; i++){
		if(a[i] > a[i+1]) ktr=0;
	}
	for(int i=y; i>(x+y)/2; i--){
		if(a[i] > a[i-1]) ktr=0;
	}
	if(ktr==1) cout << "Yes" << endl;
	else cout << "No" << endl;
}
main(){
	int t;
	cin >> t;
	while(t--){
		nhap( );
		kt( );
	}
}
