#include<iostream>
#include<cmath>
using namespace std;
int a[1000001] = {0};
void sang(){
	a[0]=a[1]=1;
	for(int i=2; i*i <= 1000000; i++){
		if(a[i] == 0){
			for(int j= i*i; j <= 1000000; j += i) a[j] = 1;
		}
	}
}
main(){
	int t;
	cin >> t;
	sang( );
	while(t--){
		long long n;
		cin >> n;
		int x = 0;
		for(long long j = 1; j*j <= n; j++){
			if(a[j] == 0) x++;
		}
		cout << x << endl;
	}
}

