#include<iostream>
using namespace std;
void sang( ){
	int m,n;
	cin >> m >> n;
	if(n > m) swap(m,n);
	int d[100001] = {0};
	for(int i = 0; i <= 1000001; i++){
		if(i < 2) d[i] = 1;
	}
	for(int i = 2; i <= m; i++){
		if(d[i] == 0){
			for(int j = 2*i; j <= m; j+=i){
				d[j] = 1;
			}
		}
	}
	int dem = 0;
	for(int i=n; i <= m; i++){
		if(d[i] == 0) dem ++;
	}
	cout << dem;
}

main(){
	int n;
	cin >> n;
	while(n--){
		sang( );
		cout << endl;
		
	}
}
