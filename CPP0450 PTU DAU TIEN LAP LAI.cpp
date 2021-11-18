#include<iostream>
#include<algorithm>
using namespace std;
int n,k, a[100000];
void tinh(){
		cin >> n;
		int  d[100001];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			d[a[i]] = 0;
		}
		int x = 0;
		for(int i=0; i < n; i++){
			d[a[i]]++;
			if(d[a[i]] == 2){
				cout << a[i];
				x = 1;
				break;
			}
		}
		if(x == 0) cout << "-1";
		cout << endl;
}
main(){
	int t;
	cin >> t;
	while(t--){
		tinh();
	}
}
