#include<iostream>
using namespace std;
int n, a[100000];
void nhap(){
		cin >> n;
		for(int i=1; i <= n-1; i++){
			cin >> a[i];
		}
}
void tinh(){
		int x = 1;
		for(int i=1; i <= n-1; i++){
				if(a[i] != i) {
					x = i;
					break;
				}
		}
		cout<< x <<endl;
}
main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		tinh();
	}
}
