#include<iostream>
using namespace std;
#define N 10100
bool check[N];
void sang(int n){
	int i, j;
	for(i = 2; i <= n; i++) check[i] = true;
	for(i = 2; i*i <= n; i++){
		if(check[i] == true){
			for(j=i*i; j <= n; j=j+i){
				check[j] = false ;
			}
		}
	}
}
main(){
	int t,i,j;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		sang(n);
		if(n == 1) {
			cout << 1 << endl;
			continue ;
		}
		cout << "1 ";
		for(i = 2; i <= n; i++){
			if(i % 2 == 0){
				cout <<"2 ";
				continue;
			}
			if(check[i]){
				cout << i << " ";
				continue;
			}
			j = 2;
			while(j <= i){
				if(i % j == 0){
					cout << j <<" ";
					break;
				}
				else {
					j++;
					while(check[j] == 0) j++; 
				}
			}
		}
		cout << endl;
	}
}
