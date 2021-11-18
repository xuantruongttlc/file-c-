#include<iostream>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		int n, i, j, x, b[100000]={0}, d=0;
		cin >> n;
		if(n==1){
			cin >> x;
			cout << 1 << endl;
			continue;
		}
		for(i=1; i<=n; i++){
			cin >> x;
			b[x]=1;
		}
		for(i=2; i<=n; i++){
			for(j=1; j<=n; j++){
				cin >> x;
				if(b[x]==i-1){
					b[x]=i;
					if(i==n) d++;
				}
			}
		}
		cout << d << endl;
	}
}	
