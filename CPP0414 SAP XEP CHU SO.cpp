#include<iostream>
using namespace std;
void sx(long long n, int a[]){
	while (n > 0){
		a[n%10]++;
		n/=10;
	}
}
main(){
	int t;
	cin >> t;
	while (t--){
		int n, i, a[10]={0};
		cin >> n;
		long long x;
		for(int i=0; i <n; i++){
			cin >> x;
			sx(x,a);
		}
		for(i=0; i < 10; i++) if(a[i] != 0) cout << i << " ";
		cout << endl;
	}
}
