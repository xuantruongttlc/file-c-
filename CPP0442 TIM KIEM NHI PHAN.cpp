#include<iostream>
using namespace std;
int n,k,s[100000];
void nhap(){
		cin >> n>> k;
		for(int i = 1; i <= n; i++){
			cin >> s[i];
		}
}
void tinh(){
	int d = -1;
		for(int i=1; i <= n; i++){
			if(s[i] == k){
				d = i;
				break;
			}
		}
		cout << d << endl;
}
main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		tinh();
	}
}
