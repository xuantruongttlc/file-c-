#include<iostream>
using namespace std;
main(){
	int n;
	cin >> n;
	int a[n][3];
	int  d = 0;
	for(int i = 0; i < n; i++){
		int c=0, l=0;
		for(int j = 0; j < 3; j++){
			cin >> a[i][j];
			if(a[i][j] == 1) l++;
			if(a[i][j] == 0) c++; 
		}
		if(l >= c) d++;
	}
	cout << d;
}
