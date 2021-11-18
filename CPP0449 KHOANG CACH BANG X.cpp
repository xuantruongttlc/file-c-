#include<iostream>
#include<algorithm>
using namespace std;
int n,k, a[100000];
void tinh(){
		int n,k;
		cin >> n>>k;
		int a[n], x = 0, d[100001] = {0};
		for(int i=0; i < n; i++){
			cin >> a[i];
			d[a[i]] = 1;
		}
		sort(a,a+n);
		for(int i = 0; i < n; i++){
			int s = a[i];
			if(s-k >= 0 && d[s-k] == 1){
				x=1;
				break;
			}
			if(s+k < 100001 && d[x+k] == 1){
				x=1;
				break;
			}
		}
		if(x == 0) cout << "-1" << endl;
		else cout << "1" << endl;
}
main(){
	int t;
	cin >> t;
	while(t--){
		tinh();
	}
}
